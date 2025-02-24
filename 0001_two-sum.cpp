class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> v;
        int temp = 0;

        for (int i=0; i< nums.size(); ++i) {
            temp = target - nums[i];
            if (m.find(temp) != m.end()) {
                v.push_back(i);
                v.push_back(m[temp]);
                return v;
            }
            m[nums[i]] = i;
        }
        return v;
    }
};
