class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int end = nums.size()-1;
        for (int i=nums.size()-1; i >= 0; --i) {
            if (nums[i] == val && i == end) {
               nums[end--] = val; 
            }
            else if (nums[i] == val) {
                nums[i] = nums[end--];
            }
        }
        return end+1;
    }
};
