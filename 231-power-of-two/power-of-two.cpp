class Solution {
public:
    bool isPowerOfTwo(int n) {
   /* int x=0;
    while(x!=n)    
    {    if(pow(2,x)==n)
        {
            return true;
        }
        x++;
    }
        return false;
    }*/
    return n>0 && (n & (n-1))==0;
    }
};