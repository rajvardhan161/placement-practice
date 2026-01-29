class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();
        int tail = 0;
        int head = -1;
        int zero_count = 0;
        int max_length = 0;

        while (tail < n) {
            while (head + 1 < n && zero_count + (nums[head + 1] == 0 ? 1 : 0) <= k) {
                head++;
                if (nums[head] == 0)
                    zero_count++;
            }
            max_length = max(max_length, head - tail + 1);

          
            if (tail > head) {
                tail++;
                head = tail - 1;
            } else {
                if (nums[tail] == 0)
                    zero_count--;
                tail++;
            }
        }

        return max_length;
    }
};
