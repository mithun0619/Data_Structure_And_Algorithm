class Solution {
public:
    string largestOddNumber(string s) {
        int n=s.length()-1;
        string ans;
        if(s[n]%2!=0)return s;
       // int ind=-1;

        for(int i=n;i>=0;i--){
            if(s[i]%2==0) continue;
            else{
              return s.substr(0,i+1);
            }
        }

       /* if(ind==-1)return "";
        for(int i=0;i<=ind;i++)
        {
            ans+=s[i];
        }*/
        return "";
    }
};