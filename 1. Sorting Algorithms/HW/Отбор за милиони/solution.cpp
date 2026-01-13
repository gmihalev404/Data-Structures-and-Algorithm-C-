#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N;
    cin >> N;
    int count[63] = {0};
    string str;
    cin >> str;
    for (int i = 0; i < N; ++i) {
        int num;
        if (str[i] >= 'a' && str[i] <= 'z') num = str[i] - 'a' + 11;
        else if (str[i] >= 'A' && str[i] <= 'Z') num = str[i] - 'A' + 37;
        else num = str[i] - '0' + 1;
        count[num]++;
    }
    int index = 1;
    for (; index <= 62; ) {
        if (count[index] != 0) {
            char numC;
            if (index <= 10) numC = index - 1 + '0';
            else if (index <= 36) numC = index - 11 + 'a';
            else numC = index - 37 + 'A';
            count[index]--;
            cout << numC;
        }
        else index++;
    }
    return 0;
}
