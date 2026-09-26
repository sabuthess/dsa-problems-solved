class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> l, r, m;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (nums[i] > pivot) {
                r.push_back(nums[i]);
            } else if (nums[i] == pivot){
                m.push_back(nums[i]);
            }else {
                l.push_back(nums[i]);
            }
        }

        int lLength = l.size();
        int rLength = r.size();
        int mLength = m.size(); 

        vector<int> result;

        for (int i = 0; i < lLength; i++) {
            result.push_back(l[i]);
        }

        for (int i = 0; i < mLength; i++) {
            result.push_back(m[i]);
        }
         

        for (int i = 0; i < rLength; i++) {
            result.push_back(r[i]);
        } 

        return result;
    }
};