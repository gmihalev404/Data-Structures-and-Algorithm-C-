// countingSort
// time:
//   best: O(N + K)
//   average: O(N + K)
//   worst: O(N + K)
// space:
//   average: O(K)
//   worst: O(K)
// not stable
void countingSort (vector<int>& vect) {
    int N = vect.size();
    if(N == 0) return;
    
    int min = vect[0], max = vect[0];
    for (int i = 1; i < N; ++i) {
        if (vect[i] > max) max = vect[i];
        if (vect[i] < min) min = vect[i];
    }
    
    int K = max - min + 1;
    vector<int> count(K, 0);
    
    for (int i = 0; i < N; ++i) {
        count[vect[i] - min]++;
    }
    
    int index = 0;
    for (int i = 0; i < K; ++i) {
        while (count[i]) {
            vect[index] = i + min;
            count[i]--;
            ++index;
        }
    }
}
