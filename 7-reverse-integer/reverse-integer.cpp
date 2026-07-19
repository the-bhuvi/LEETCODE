#include <climits>
class Solution {
public:
    int reverse(int x) {
        int a=x;
        long   r=0;
        while(a!=0){
             r=(r*10)+(a%10);
             a=a/10;
        }
        if(r<=INT_MIN || r>=INT_MAX){
            return 0;
        }
        return (int)r;
    }
};