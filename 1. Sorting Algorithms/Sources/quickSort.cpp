// quickSort
// time:
//   best: O(N log N)
//   average: O(N log N)
//   worst: O(N^2)
// space:
//   average: O(log N)
//   worst: O(N)
// not stable
int partition (vector<int>& vect, int start, int end, int pivot) {
    int index = start;
    for (int i = start; i < end; ++i) {
        if (vect[i] < vect[pivot]){
            swap(vect[index], vect[i]);
            ++index;
        }
    }
    swap(vect[index], vect[pivot]);
    return index; 
}

void quickSort (vector<int>& vect, int start, int end) {
    if (start >= end) return;
    int pivot = end;
    pivot = partition(vect, start, end, pivot);
    quickSort(vect, start, pivot - 1);
    quickSort(vect, pivot + 1, end);
}
