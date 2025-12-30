class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int size = n*n;
        int  kl = size*w;
        if(maxWeight>=kl){
            return size;
        }
    return maxWeight/w;
    }
};
