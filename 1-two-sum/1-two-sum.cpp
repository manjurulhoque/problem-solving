class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = nums.size();
        
        for(int i = 0; i < l; ++i) {
            for(int j = 0; j < l; ++j) {
                if(i != j && nums[i] + nums[j] == target) {
                    vector<int> ret{i, j};
                    return ret;
                }
            }
        }
        //end solution
        vector<int> r{0, 0};
        return r;
    }
};