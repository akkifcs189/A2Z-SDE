int removeDuplicates(vector<int> &arr, int n) {
	int k = 1;
        for(int i = 1; i < n; i++) {
            if(arr[i] != arr[i - 1]) {
                arr[k++] = arr[i];
			}
        }
        return k;
}