void merge(vector<int>& arr, int l, int mid, int r) {
    int temp[r - l + 1];
    int left = l, right = mid + 1;
    int k = 0;
    while(left <= mid && right <= r) {
        if(arr[left] < arr[right]) {
            temp[k++] = arr[left++];
        } else {
            temp[k++] = arr[right++];
        }
    }
    //one of the arrays would be exhausted
    while(left <= mid) {
        temp[k++] = arr[left++];
    }
    while(right <= r) {
        temp[k++] = arr[right++];
    }

    for(int i = l; i <= r; i++) {
        arr[i] = temp[i - l];
    }
}

void mergeSort(vector<int>& arr, int l, int r) {
    if(l < r) {
        int mid = l + (r-l)/2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
    }

    
}