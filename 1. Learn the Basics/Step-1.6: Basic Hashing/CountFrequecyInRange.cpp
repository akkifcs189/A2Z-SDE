//Question link - https://www.codingninjas.com/studio/problems/count-frequency-in-a-range_8365446

vector<int> countFrequency(int n, int x, vector<int> &nums){
    // int freq[100001] = {0};
    // for(int i = 0; i < nums.size(); i++) {
    //     freq[nums[i]]++;
    // }

    // vector<int> ans;
    // for(int i = 1; i <= n; i++) {
    //     ans.push_back(freq[i]);
    // }
    // return ans;
    unordered_map<int, int> ump;
    for(int i = 0; i < nums.size(); i++) {
        ump[nums[i]]++;
    }
    vector<int> ans;
    for(int i = 1; i <= n; i++) {
        ans.push_back(ump[i]);
    }
    return ans;
}