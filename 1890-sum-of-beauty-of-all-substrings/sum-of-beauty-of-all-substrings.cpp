class Solution {
public:
    int beautySum(string s) {
        int total=0;
        int n=s.length();
        int maxs=0;
        int mins=INT_MAX;
        for(int i=0;i<n;i++){
            vector<int> v(26,0);
            for(int j=i;j<n;j++){
                v[s[j]-'a']++;

                int maxs=0;
                int mins=INT_MAX;
                for(int k=0;k<26;k++){
                    if(v[k]>0){
                        maxs=max(maxs,v[k]);
                        mins=min(mins,v[k]);
                    }
                }
                  total+=maxs-mins;
            } 
        }
          return total;
    }
  
};