void insertionSortHelper(int arr[], int n, int idx) {
    if(idx == n) {
        return;
    }
    int j = idx;
    while(j > 0 && arr[j-1] > arr[j]) {
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }
    insertionSortHelper(arr, n, idx + 1);
}

void insertionSort(int arr[], int n) {
    insertionSortHelper(arr, n, 0);
}