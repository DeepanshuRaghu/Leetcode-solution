class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0)
            return false;
        long rev=0;
        int deget;
        int temp=x;
        while(x!=0){
            deget=x%10;
            rev=rev*10+deget;
            x=x/10;
        }
        if(rev==temp)
            return true;
             else{
                 return false;
             }
            
    }
};