#define ll long long int 
class Solution {
public:

    int climbStairs(int n) {
        if(n==1){
            return 1;
        }ll a = 1,b = 2;
        for(int i=1;i<n;i++){
            ll c = a+b;
            a = b;
            b = c;
        }
        return (int)a;
    }
};