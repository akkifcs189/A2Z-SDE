long long sumFirstN(long long n) {
    long long ans = 0;
    if(n == 0) return ans;
    return n + sumFirstN(n - 1);
}