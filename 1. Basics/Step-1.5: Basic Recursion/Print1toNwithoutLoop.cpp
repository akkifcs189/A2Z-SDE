vector<int> printNos(int x) {
    if(x == 0) {
        vector<int> ans;
        return ans;
    }
    vector<int> ans = printNos(x - 1);
    ans.push_back(x);
    return ans;

}