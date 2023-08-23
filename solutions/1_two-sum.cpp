#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> dct;

        for (int i = 0; i < nums.size(); ++i) {
            if (dct.find(nums[i]) != dct.end()) {
                return {dct[nums[i]], i};
            }

            dct[target - nums[i]] = i;
        }

        return {};
    }
};
