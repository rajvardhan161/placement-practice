class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int max1 = 0;
        int i =0;
        int j = n-1;
        while(i<j){
            if(max1<nums[i]+nums[j]){
                max1 = nums[i]+nums[j];
            }
            i++;
            j--;
        }
    return max1;
}
    
};
