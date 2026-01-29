#include <iostream>
#include <deque>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    deque<int> left, right;
    int szL = 0, szR = 0;

    while (N--) {
        string cmd;
        cin >> cmd;

        if (cmd == "add") {
            int x;
            cin >> x;
            right.push_back(x);
            szR++;
        }
        else if (cmd == "gun") {
            right.pop_back();
            szR--;
        }
        else if (cmd == "milen") {
            swap(left, right);
            swap(szL, szR);
        }

        // rebalance
        int total = szL + szR;
        int targetL = total / 2;

        while (szL > targetL) {
            right.push_front(left.back());
            left.pop_back();
            szL--; szR++;
        }
        while (szL < targetL) {
            left.push_back(right.front());
            right.pop_front();
            szL++; szR--;
        }
    }

    cout << szL + szR << "\n";
    for (int x : left) cout << x << " ";
    for (int x : right) cout << x << " ";
    cout << "\n";
}
