class Solution {
public:
    void addRange(vector<string>& ranges, int start, int curr) {
        if (start == curr) {
            ranges.push_back(to_string(start));
        }
        else {
            ranges.push_back(to_string(start) + "->" + to_string(curr));
        }
    }
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ranges;
        if (nums.size() > 0) {
            int curr = nums[0];
            int start = nums[0];

            int i = 1;
            while(i<nums.size()) {
                if (nums[i] == curr + 1) {
                    curr = nums[i];
                }
                else {
                    addRange(ranges, start, curr);
                    start = nums[i];
                    curr = nums[i];
                }
                ++i;
            }
            addRange(ranges, start, curr);
        }
        return ranges;
    }
};
