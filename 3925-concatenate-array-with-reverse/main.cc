class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> reverseArray;
        // 1. reverse the nums array
        // 2. concatenate nums array with reverse nums array

        // 3. iterate the array from last position

        int n1 = size(nums);


        for (int i = n1 - 1; i >= 0; i--) {
            reverseArray.push_back(nums[i]);
        }

        int n2 = size(reverseArray);
        for (int i = 0; i < n2; i++)
            nums.push_back(reverseArray[i]);

        return nums;
    }
};