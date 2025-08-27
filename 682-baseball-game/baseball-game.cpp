class Solution {
public:
    int calPoints(vector<string>& operations) {
       vector<int>res;
       int ans=0;
       int n=operations.size();
       for(int i=0;i<n;i++){
        if(operations[i]=="C"){
            res.pop_back();
        }
        else if(operations[i]=="D"){
            res.push_back(2*res.back());
        }
        else if(operations[i]=="+"){
            res.push_back(res.back()+res[res.size()-2]);
        }
        else{
            res.push_back(stoi(operations[i]));
        }
      
       } 
       for(int i=0;i<res.size();i++){
        ans+=res[i];
       }
        return ans;
    }
};