class Solution {
public:
    bool isPalindrome(int x) {
         //  int num=x;
    //  int ans=0;
    //     while(x>0){
    //         int rem=x%10;
    //         ans=(ans*10)+rem;
    //         x/=10;
    //     }
    //     if(ans==num){
    //         return true;
    //     }
    //     return false;
   

    if(x < 0 || (x%10 == 0 && x!=0)) {
            return false;
        }

        int reversedNumber = 0;
        while(x > reversedNumber) {
            reversedNumber = reversedNumber * 10 + x % 10;
            x/=10;
        }

        return x == reversedNumber || reversedNumber/10 == x;
    }
};
