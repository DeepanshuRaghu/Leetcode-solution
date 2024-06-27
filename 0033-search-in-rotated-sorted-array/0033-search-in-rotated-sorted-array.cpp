class Solution {
public:
    int getpivot(vector<int>& arr, int n){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
    if( arr[mid] >= arr[0]) {
      s = mid + 1;
    }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return s;

}
int binarysearch(vector<int>& arr, int a,int b, int key){
int s=a;
int e=b;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==key){
        return mid;

}
 else if(key>arr[mid]){
     s=mid+1;
 }
 else{
     e=mid-1;
 }
mid=s+(e-s)/2;
}
return -1;
}
    int search(vector<int>& arr, int key){
        int n=arr.size();
    int pivot= getpivot(arr,n);
    if( key>=arr[pivot] && key<=arr[n-1]){
        return binarysearch(arr, pivot,n-1,key);
    
    }
    else{
        return binarysearch(arr,0,pivot-1 , key);
    }
}
};