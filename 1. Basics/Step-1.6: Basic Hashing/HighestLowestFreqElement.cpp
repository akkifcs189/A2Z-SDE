//Question link - https://www.codingninjas.com/studio/problems/k-most-occurrent-numbers_625382

vector<int> getFrequencies(vector<int>& v) {
    vector<int> ans;
    map<int, int> mp;
    for(auto num : v) {
        mp[num]++;
    }
    int min = INT_MAX, max = INT_MIN;
    int minElement, maxElement;
    for(auto item : mp) {
        if(item.second > max) {
            max = item.second;
            maxElement = item.first;
        }
        if(item.second < min) {
            min = item.second;
            minElement = item.first;
        }
    }
    ans.push_back(maxElement);
    ans.push_back(minElement);
  //cout << min << " " << max << endl;
    return ans;
}