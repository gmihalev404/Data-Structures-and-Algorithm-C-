#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool canDevide (vector<size_t>& skills, size_t T, size_t target) {
    size_t teams = 1;
    size_t current = 0;
    for (size_t skill : skills) {
        if (current + skill > target) {
            current = 0;
            ++teams;
        }
        current += skill;
        if(teams > T) return false;
    }
    return true;
}

int main() {
    size_t N, T;
    cin >> N >> T;
    vector<size_t> skills(N);
    size_t maxSkill = 0, sum = 0;
    for (int i = 0; i < N; ++i) {
        cin >> skills[i];
        sum += skills[i];
        if (skills[i] > maxSkill) maxSkill = skills[i];
    }
    size_t lower = maxSkill, upper = sum;
    while (lower < upper) {
        size_t mid = (lower + upper) / 2;
        if(canDevide(skills, T, mid)) {
            upper = mid;
        }
        else {
            lower = mid + 1;
        }
    }
    cout << lower;
    
    return 0;
}
