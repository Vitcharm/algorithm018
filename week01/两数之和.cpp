class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> myMap;
        vector<int> result;

        for (int i = 0; i < nums.size(); i++) {
            if (myMap.count(target - nums[i]) > 0 && (myMap[target - nums[i]] != i)) {
                result.push_back(i);
                result.push_back(myMap[target - nums[i]]);
            }
            myMap[nums[i]] = i;
        }   
        return result;
    }
};