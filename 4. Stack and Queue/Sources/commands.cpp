#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

int main() {
    // 1. STACK (LIFO - Последен влязъл, първи излязъл)
    // Представи си го като купчина книги.
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Stack top: " << s.top() << endl; // Ще изведе 30 (последното влязло)
    s.pop(); // Премахва 30
    // Внимавай: s.pop() не връща стойност!
    
    

    // 2. QUEUE (FIFO - Първи влязъл, първи излязъл)
    // Като опашка за билети.
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << "Queue front: " << q.front() << endl; // Ще изведе 1 (първото влязло)
    cout << "Queue back: " << q.back() << endl;   // Ще изведе 3 (последното влязло)
    q.pop(); // Премахва 1
    
    

    // 3. DEQUE (Double-Ended Queue)
    // Гъвкава структура - позволява всичко.
    deque<int> dq;
    dq.push_back(100);  // [100]
    dq.push_front(50);  // [50, 100]
    dq.push_back(150);  // [50, 100, 150]

    cout << "Deque at index 1: " << dq[1] << endl; // Можеш да достъпваш по индекс! (100)
    
    dq.pop_front(); // Маха 50 -> [100, 150]
    dq.pop_back();  // Маха 150 -> [100]
    
    

    // Важна проверка: Винаги проверявай дали е празно преди достъп!
    if (!dq.empty()) {
        cout << "Final deque front: " << dq.front() << endl;
    }

    return 0;
}
