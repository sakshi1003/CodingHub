class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> res;
        int n = intervals.size();
        sort(intervals.begin(),intervals.end());
        if(n == 0)
            return res;
        int f = intervals[0][0];
        int s = intervals[0][1];
        for(int i=0;i<n;i++)
        {
            int f2 = intervals[i][0];
            int s2 = intervals[i][1];
            if(f2 <= s)
            {
                if(s < s2)
                    s = s2;
            }
            else
            {
                res.push_back({f,s});
                f = f2;
                s = s2;
            }
        }
        res.push_back({f,s});
        return res;
    }
};
