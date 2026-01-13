//bubbleSort time: O(N^2) space: O(1)
void bubbleSort (vector<int>& vect) {
    int N = vect.size();
    for (int i = 0; i < N; ++i) {
        bool swapped = false;
        for (int j = N - 1; j > i; --j) {
            if (vect[j] > vect[j - 1]) {
                swap(vect[j - 1], vect[j]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}
