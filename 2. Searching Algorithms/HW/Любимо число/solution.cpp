#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

size_t getDepth (size_t len, size_t F) {
    size_t L = 1, R = len;
    size_t depth = 1;
    while(1) {
        size_t mid1 = L + (R - L) / 3;
        size_t mid2 = L + 2 * (R - L) / 3;
        if (F > mid2) {
            L = mid2 + 1;
        }
        else if ((F <= mid2 && F > mid1) || R == L) {
            return depth;
        }
        else if(F <= mid1) {
            R = mid1;
        }
        ++depth;
    }
}  

int main() {
    int P, N;
    cin >> P >> N;
    size_t len = 1;
    for (int i = 0; i < P; ++i) len *= 3;
    for (int i = 0; i < N; ++i) {
        size_t F;
        cin >> F;
        cout << getDepth(len, F) << "\n";
    }
    return 0;
}
