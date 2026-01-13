int ternarySearch(const vector<int>& arr, int l, int r, int x) {
    while (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;

        if (arr[mid1] == x) return mid1; // намерили сме елемента
        if (arr[mid2] == x) return mid2; // намерили сме елемента

        if (x < arr[mid1]) {
            r = mid1 - 1; // търсим в първата третина
        } else if (x > arr[mid2]) {
            l = mid2 + 1; // търсим в третата третина
        } else {
            l = mid1 + 1; // търсим в средната третина
            r = mid2 - 1;
        }
    }
    return -1; // елементът не се съдържа в масива
}
