 int integerBreak(int n) {
        if(n==0)
            return 0;
        if(n==1 || n==2)
            return 1;
        int x=1,y=1;
        int prod =1;
        int i= 2;
        while(i<=n){
            prod = x*y;
            
            if(y==4){
                x = x*3;
                y=1;
            }
            if(x<y){
                x++;
            }
            else{
                y++;
            }
            i++;
        }
        return prod;
    } 
