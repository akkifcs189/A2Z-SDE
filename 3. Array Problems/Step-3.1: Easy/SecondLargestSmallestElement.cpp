vector<int> getSecondOrderElements(int n, vector<int> a) {
    //find the largest and smallest elements first
    int largest = a[0], smallest = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] > largest) {
            largest = a[i];
        }
        if(a[i] < smallest) {
            smallest = a[i];
        }
    }

    //after this use the above findings to get second largest/smallest
    int secondLargest = INT_MIN, secondSmallest = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
        if(a[i] < secondSmallest && a[i] != smallest) {
            secondSmallest = a[i];
        }
    }

    vector<int> ans = {secondLargest, secondSmallest};
    return ans;
}
