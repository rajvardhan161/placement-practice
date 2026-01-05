class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int> s(nums.begin(), nums.end());   
        vector<int> arr(s.begin(), s.end());
        sort(arr.begin(), arr.end(), greater<int>()); 
        vector<int> arr1;
        int n = arr.size();
        for (int i = 0; i < min(k, n); i++) {
            arr1.push_back(arr[i]);
        }

        return arr1;
    }
};
