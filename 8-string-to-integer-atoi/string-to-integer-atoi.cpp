class Solution {
public:
    int myAtoi(string s) {
        int l=s.length();
        int i=0;
        int sign=1; 

        while(i<l && s[i]==' '){
            i++;
        }
        if(i==l)return 0;

        if(i<l && s[i]=='+' || s[i]=='-'){
            if(s[i]=='-')sign =-1;
            i++;
        }
        int ans=0;

        while(i<l && isdigit(s[i])){
            int d=s[i]-'0';
            if(ans>(INT_MAX-d)/10){
                if(sign==1)return INT_MAX;
               else return INT_MIN;
            }
            ans=ans*10+d;

            i++;
        }
        return ans*sign;

    }
};