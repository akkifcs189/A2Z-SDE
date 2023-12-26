//Question link - https://www.codingninjas.com/studio/problems/factorial-numbers-not-greater-than-n_8365435

vector<long long> factorialNumbers(long long n) {
    vector<long long> ans;
    long long fact = 1, count = 1;
    while(count <= n) {
        fact = fact * count;
        if(fact <= n) ans.push_back(fact);
        else break;
        count++;
    }
    return ans;
}