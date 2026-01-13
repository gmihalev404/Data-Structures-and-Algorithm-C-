#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    vector<size_t> weights(N);
    
    for (int i = 0; i < N; ++i) {
        double w;
        cin >> w;
        weights[i] = w;
    }
    sort(weights.begin(), weights.end());

    for (int i = 0; i < Q; ++i) {
        double min, max;
        cin >> min >> max;
        auto in = lower_bound(weights.begin(), weights.end(), min);
        auto out = upper_bound(in, weights.end(), max);
        int count = 0;
        for(auto it = in; it != out; ++it) ++count;
        cout << count << "\n";
    }
 
    return 0;
}
