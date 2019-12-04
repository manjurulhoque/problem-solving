class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector< pair<int, int> > nums2;

        for(int i = 0; i < nums.size(); i++) {
            pair<int, int> tmp(nums[i], i + 1);
            nums2.push_back(tmp);
        }

        sort(nums2.begin(), nums2.end());

        int i = 0, j = nums2.size() - 1;

        while(i < j) {
            if(nums2[i].first + nums2[j].first == target) {
                vector<int> r{nums2[i].second, nums2[j].second};
                return r;
            } else if(nums2[i].first + nums2[j].first > target) {
                --j;
            } else {
                ++i;
            }
        }

        vector<int> r{0, 0};
        return r;
    }
};
