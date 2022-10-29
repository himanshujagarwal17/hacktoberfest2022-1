//Name: Himanshu Jagarwal
//Language: C++


class Solution {
public:
    string oddString(vector<string>& words) {
            
        int sz = words.size();
        int n = words[0].size();
            
        map<vector<int>,int>ans;
            
        for(int i=0;i<sz;i++)
            {
                    
            vector<int>temp;
                   
            for(int j=1;j<n;j++)
                   {
                           temp.push_back(words[i][j] - words[i][j-1]);
                   }
                    ans[temp]++;
            }
        
            
        vector<int>temps;
            
        for(auto i : ans)
                    if(i.second==1)
                            temps=i.first;
            for(int i=0;i<sz;i++)
            {
                    vector<int>temp;
                   for(int j = 1; j < n; j++)
                   {
                           temp.push_back(words[i][j] - words[i][j-1]);
                   }
                   
                if(temp==temps)
                           return(words[i]);
            }
            return(words[0]);
            
            
        
    }
};
