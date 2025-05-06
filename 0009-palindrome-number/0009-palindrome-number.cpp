class Solution {
public:
    bool isPalindrome(int n) {
        long rev = 0;
        long org = n;

        if(n<0) return false;

        while(n>0){

            long ld = n%10;
            rev = (rev*10) +ld;
            n = n/10;
        }
        if(org == rev) return true;
        return false;
    }


};