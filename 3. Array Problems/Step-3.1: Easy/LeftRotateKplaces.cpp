void rotateArray(vector<int>& arr) {
        int firstItem = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            arr[i - 1] = arr[i];
        }
        arr[arr.size() - 1] = firstItem;
        // for (int i = 0; i < n; i++) {
        //     cout << arr[i] << " ";
        // } cout << "\n";
}

vector<int> rotateArray(vector<int>arr, int k) {
    while(k--) {
        rotateArray(arr);
    }
    return arr;
}
