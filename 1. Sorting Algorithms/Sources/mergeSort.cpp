// mergeSort
// time:
//   best: O(N log N)
//   average: O(N log N)
//   worst: O(N log N)
// space:
//   average: O(N)
//   worst: O(N)
// not stable
void merge (vector<int>& vect, int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;
    
    vector<int> v1(n1);
    vector<int> v2(n2);
    
    for (int i = 0; i < n1; ++i) v1[i] = vect[start + i];
    for (int i = 0; i < n2; ++i) v2[i] = vect[mid + 1 + i];
    
    int index = start, i = 0, j = 0;

    
    while(i < n1 && j < n2) {
        if (v1[i] < v2[j]) {
            vect[index] = v1[i];
            ++i;
        }
        else {
            vect[index] = v2[j];
            ++j;
        }
        ++index;
    }
    
    while (i < n1) {
        vect[index] = v1[i];
        ++i;
        ++index;
    }
    
    while (j < n2) {
        vect[index] = v2[j];
        ++j;
        ++index;
    }
}

void mergeSort (vector<int>& vect, int start, int end) {
    if(start >= end) return;
    int mid = (start + end) / 2;
    mergeSort(vect, start, mid);
    mergeSort(vect, mid + 1, end);
    merge(vect, start, mid, end);
}
