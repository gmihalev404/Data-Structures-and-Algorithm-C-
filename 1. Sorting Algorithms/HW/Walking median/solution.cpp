#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void insert(vector<int>& vect, int num) {
    int left = 0, right = vect.size();
    while (left < right) {
        int mid = (left + right) / 2;
        if(num >= vect[mid]) left = mid + 1;
        else right = mid;
    }
    vect.insert(vect.begin() + left, num);
}

int main() {
    int N;
    cin >> N;
    vector<int> vect;
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        insert(vect, num);
        int size = vect.size();
        if(size & 1) cout <<  vect[size/2];
        else cout << (vect[size/2] + vect[size/2 - 1]) / 2.0;
        cout << "\n";
    }
    return 0;
}
