class Solution {
public:
    
    vector<int> lcs(vector<int>& a){
    
        vector<int> v(a.size(),1);
        for(int i=0;i<a.size();i++){
            for(int j=0;j<i;j++){
                if(a[i]>a[j] && v[i]<v[j]+1){
                    v[i]=v[j]+1;
                }
            }
        }
        return v;
    }

    vector<int> rlcs(vector<int>& a){

        vector<int> v(a.size(),1);
        for(int i=a.size()-1;i>=0;i--){
            for(int j=a.size()-1;j>i;j--){
                if(a[i]>a[j] && v[i]<v[j]+1){
                    v[i]=v[j]+1;
                }
            }
        }
        return v;
    }
    
    int minimumMountainRemovals(vector<int>& a) {
        vector<int> v(a.size()),w(a.size());
        v=lcs(a);
        w=rlcs(a);
        int m=INT_MIN;
        for(int i=1;i<a.size()-1;i++){
            if(v[i]>1 && w[i]>1)
            m=max(m,v[i]+w[i]-1);
        }
        // m-=1;
        return a.size()-m;
    }
};