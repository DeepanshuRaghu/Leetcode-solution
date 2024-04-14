class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int>ans;
        for (int i=0; i<nums.size();i++){
            int temp=abs(nums[i]) - 1;
            if (nums[temp]<0)
                ans.push_back(abs(nums[i]));
            else 
                nums[temp]= -nums[temp];
        }
        return ans;
        
    }
};