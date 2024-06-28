class Solution {
public:
    long long  int binarysecrch(int n){
        int s=0;
       int  e=n;
         long long int mid=s+(e-s)/2;
         long long int ans=-1;
        while(s<=e){
            long long int squer=mid*mid;
            if(squer==n){
                return mid;
            }
            if(squer<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
         return ans;
    }
    int mySqrt(int x) {
        return binarysecrch(x);
        
    }
};