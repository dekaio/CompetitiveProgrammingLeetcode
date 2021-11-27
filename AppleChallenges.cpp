(*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution and you may not use the same element twice*)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output = {};
        for (size_t i = 0; i< nums.size(); ++i){
            int index1 = static_cast<int>(i);
            for (size_t j = i+1; j<nums.size();++j  ){
                int index2 = static_cast<int>(j);
                if (nums[i]+nums[j] == target){
                    output = {index1, index2};
                }
            }
     }   
        return output;
    }
};
