/*
    Time Complexity: O(n)
    Space Complexity: O(1)
    where n is the size of the input array.
*/
void reverseArray(int start, int end, vector<int> &nums)
{
    if (start > end)
        return;
    swap(nums[start], nums[end]);
    return reverseArray(start + 1, end - 1, nums);
}

// Function to reverse the elements of the given array 'nums'.
vector<int> reverseArray(int n, vector<int> &nums)
{
    reverseArray(0, n - 1, nums);
    return nums;
}
