//selectionSort time: O(N^2) space: O(1)
void selectionSort (vector<int>& vect) {
    int N = vect.size();
    for (int i = 0; i < N; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < N; ++j) {
            if (vect[j] < vect[minIndex]) {
                minIndex = j;
            }
        }
        swap(vect[i], vect[minIndex]);
    }
}
