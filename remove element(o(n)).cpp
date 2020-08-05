class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
        int curr=0;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=val)
            {
                nums[curr]=nums[i];
                curr++;
            }
        }
        
        return curr;
        
    }
};
