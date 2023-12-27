#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int ans = arr[0];
    for(int i = 1; i < n; i++) {
        ans = max(ans, arr[i]);
    }
    return ans;
}
