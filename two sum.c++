#include <iostream>
#include <vector>  
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int p1 = 0; p1 < n; p1++) {
            for(int p2 = p1 + 1; p2 < n; p2++) {
                if(nums[p1] + nums[p2] == target)
                    return {p1, p2};
            }
        }

        return {}; 
    }
};