#include <cmath>
#include <cstdio>
#include <vector>
#include <queue>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    deque<int> to_A;
    deque<int> to_B;
    queue<int> passed;
    for (int i = 0; i < N; ++i) {
        int cur;
        cin >> cur;
        if (cur < 0) {
            to_A.push_back(cur);
        }
        if (cur > 0) {
            while (!to_A.empty()) {
                passed.push(to_A.front());
                to_A.pop_front();
            }
            to_B.push_back(cur);
        }
        while (!to_A.empty() && !to_B.empty()) {
            if (abs(to_A.front()) > to_B.back()) {
                to_B.pop_back();
            }
            else if (abs(to_A.front()) < to_B.back()) {
               to_A.pop_front(); 
            }
            else {
                to_B.pop_back();
                to_A.pop_front(); 
            }
        }
    }
    while (!to_A.empty()) {
        passed.push(to_A.front());
        to_A.pop_front();
    }
    while (!to_B.empty()) {
        passed.push(to_B.front());
        to_B.pop_front();
    }
    
    while (!passed.empty()) {
        cout << passed.front() << " ";
        passed.pop();
    }
    cout << "\n";
    
    return 0;
}
