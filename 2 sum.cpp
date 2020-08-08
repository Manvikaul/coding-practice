class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int>mymap;
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++)
        {
            if(mymap.count(target-nums[i])>0)
            {
                ans.push_back(mymap[target-nums[i]]);
                ans.push_back(i);
                break;
            }
            else
            {
                mymap[nums[i]]=i;
            }

        }
        
        return ans;
        
    }
};
