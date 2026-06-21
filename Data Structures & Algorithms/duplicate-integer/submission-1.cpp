class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        set<int> arr;
        for(int i=0;i<n;i++){
            arr.insert(nums[i]);
        }
        return nums.size()!=arr.size();
    }
};