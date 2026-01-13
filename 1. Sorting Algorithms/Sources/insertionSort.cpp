// insertionSort
// time:
//   best: O(N)
//   average: O(N^2)
//   worst: O(N^2)
// space:
//   average: O(1)
//   worst: O(1)
// stable
void insertionSort(vector<int>& vect) {
    int N = vect.size();
    for (int i = 1; i < N; ++i) {
        int key = vect[i];
        int j = i - 1;
        while (j >= 0 && vect[j] > key) {
            vect[j + 1] = vect[j];
            --j;
        }
        vect[j + 1] = key;
    }
}
