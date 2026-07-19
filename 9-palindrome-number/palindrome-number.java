class Solution {
    public boolean isPalindrome(int x) {
        if(x==pal(x) && x>=0){
            return true;
        }
        return false;
    }
    public static int pal(int x){
        int r=0;
        
        while( x!=0){
            r=(r*10)+(x%10);
            x=x/10;
        }
        return r;
    }
}