(*Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution and you may not use the same element twice*)
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output = {};
        int flag = 0;
        for (size_t i = 0; i< nums.size(); ++i){
            int index1 = static_cast<int>(i);
            for (size_t j = i+1; j<nums.size();++j  ){
                int index2 = static_cast<int>(j);
                if (nums[i]+nums[j] == target){
                    output = {index1, index2};
                    flag = 1;

                }
                if (flag == 1) break;
            }
            if (flag == 1) break;
     }   
        return output;
    }
};
(*Solution two this is a java code. See the below one for c++ code.*)
class solution{
    public int[] twoSum(int[] nums, int target){
        Map<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<nums.length;i++){
            int complement = target - nums[i];
            if (map.containsKey(Complement)){
                return new int[]{
                map.get(Complement),i)};
            }
            map.put(nums[i], i);
        }
        return null;
    }
}
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> output = {};
        map<int, int> m;
        for (size_t i = 0; i < nums.size(); ++i){
            int complement = target - nums[i];
            if (m.find(complement) != m.end()){
                output = {static_cast<int>(m.at(complement)),static_cast<int>(i)};
                return output;
                //break;
            
            }
            else{
                m[nums[i]] = i;
            }
     }   
        return output;
    }
};
