#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

#define SIZE 10

int A[SIZE][SIZE], B[SIZE][SIZE];
long int C[SIZE][SIZE];

void *mul_thread(void *arg) {
	int i, row, col, *rcArgs;
	long int return_val; //long int, since int cannot be type casted to void
	rcArgs = (int *) arg;
	row = rcArgs[0];
	col = rcArgs[1];
	i	= rcArgs[2];
	return_val = A[row][i] * B[i][col];
	//return ((void *) return_val);
	pthread_exit((void *) return_val);
}

void accept_matrix(int M[SIZE][SIZE], int rows, int cols) {
	int i, j;
	printf("\n");
	for(i=0;i<rows;i++) {
		for(j=0;j<cols;j++) {
			printf("Value at [%d][%d]: ",i+1,j+1);
			scanf("%d",&M[i][j]);
		}
	}
}

void display_matrix(int M[SIZE][SIZE], int rows, int cols) {
	int i, j;
	printf("\n");
	for(i=0;i<rows;i++){
		for(j=0;j<cols;j++){
			printf("%2d  ",M[i][j]);
		}
		printf("\n");
	}
}

int main() {
	int rows_A, cols_A, rows_B, cols_B;
	int rcArgs[3];
	int i, j, k, *status;
	pthread_t P[SIZE][SIZE][SIZE];

	printf("\nEnter no. of rows in matrix A: ");
	scanf("%d",&rows_A);
	printf("Enter no. of columns in matrix A: ");
	scanf("%d",&cols_A);
	accept_matrix(A, rows_A, cols_A);

	printf("\nEnter no. of rows in matrix B: ");
	scanf("%d",&rows_B);
	printf("Enter no. of columns in matrix B: ");
	scanf("%d",&cols_B);
	accept_matrix(B, rows_B, cols_B);

	if(cols_A == rows_B) {
		for(i=0;i<rows_A;i++) {
			for(j=0;j<cols_B;j++) {
				for(k=0;k<cols_A;k++){
					rcArgs[0] = i;
					rcArgs[1] = j;
					rcArgs[2] = k;
					//Creating a new thread for every multiplication operation
					if(pthread_create(&P[i][j][k], NULL, mul_thread, rcArgs) != 0)
						printf("\nCannot create thread.\n");
					else
					//Inserting delay
						sleep(1);
				}
			}
		}
	} else {
		printf("\n Matrix multiplication not possible.");
		exit(1);
	}

	printf("\nMatrix A:");
	display_matrix(A, rows_A, cols_A);
	printf("\nMatrix B:");
	display_matrix(B, rows_B, cols_B);

	for(i=0;i<rows_A;i++) {
		for(j=0;j<cols_B;j++) {
			for(k=0;k<cols_A;k++){
				//joining all the threads and retrieving values in status
				if(pthread_join(P[i][j][k],(void **) &status) != 0)
					perror("\nThread join failed.\n");
				C[i][j] += (long int)status;
			}
		}
	}

	printf("\nResultant Matrix:\n");
	for(i=0;i<rows_A;i++){
		for(j=0;j<cols_B;j++){
			printf("%2ld  ",C[i][j]);
		}
		printf("\n");
	}

	exit(EXIT_SUCCESS);
}
