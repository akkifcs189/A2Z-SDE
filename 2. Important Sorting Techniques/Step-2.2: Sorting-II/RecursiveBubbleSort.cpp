void bubbleSortHelper(vector<int>& arr, int n, int idx) {
    if(idx == n) {
        return;
    }
    for(int j = 0; j < n - idx - 1; j++) {
        if(arr[j] > arr[j+1]) {
            swap(arr[j], arr[j+1]);
        }
    }
    bubbleSortHelper(arr, n, idx + 1);
}

void bubbleSort(vector<int>& arr, int n) 
{
    bubbleSortHelper(arr, n, 0);
    
}