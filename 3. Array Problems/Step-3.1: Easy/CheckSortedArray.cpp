//in case of sorted array
bool isSorted(int n, vector<int> a) {
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            return false;
        }
    }
    return true;
}

// in case of rotated and sorted array
class Solution {
public:
    bool check(vector<int>& nums) {
        int breaks = 0;
        for(int i = 0; i < nums.size() - 1; i++) {
            if(nums[i] > nums[i+1]) {
                breaks++;
            }
        }
        if(nums[nums.size() - 1] > nums[0]) {
            breaks++;
        }
        return breaks <= 1;
    }
};