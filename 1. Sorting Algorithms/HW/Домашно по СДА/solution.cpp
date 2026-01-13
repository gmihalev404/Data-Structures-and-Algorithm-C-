#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    int score;
    
    bool operator> (Student& other) {
        if (this->score > other.score) return true;
        if (this->score == other.score) return this->name < other.name;
        return false;
    }
};

int partition (vector<Student>& students, int start, int end, int pivot) {
    int index = start;
    for (int i = start; i <= end; ++i) {
        if (students[i] > students[pivot]) {
            swap(students[index++], students[i]);
        }
    }
    swap(students[index], students[pivot]);
    return index;
}

void sort (vector<Student>& students, int start, int end) {
    if (start >= end) return;
    int pivot = end;
    pivot = partition(students, start, end, pivot);
    sort(students, start, pivot - 1);
    sort(students, pivot + 1, end);
}


int main() {
    int N;
    cin >> N;
    vector<Student> students(N);
    for (int i = 0; i < N; ++i) {
        cin >> students[i].name;
    }
    for (int i = 0; i < N; ++i) {
        cin >> students[i].score;
    }
    sort(students, 0, N - 1);
    for (auto& s : students) {
        cout << s.name << " " << s.score << "\n";
    }
    return 0;
}
