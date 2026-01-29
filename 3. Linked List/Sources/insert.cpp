void insert(int number, int position) {
    // 1. Създаваме новия възел
    Node* newNode = new Node(number);

    // 2. Случай: Списъкът е празен
    if (head == nullptr) {
        head = tail = newNode;
        return;
    }

    // 3. Случай: Вмъкване в началото (позиция 0)
    if (position <= 0) {
        newNode->next = head;
        head = newNode;
        return;
    }

    // 4. Случай: Вмъкване по средата или в края
    Node* current = head;
    int currentIndex = 0;

    // Спираме на възела ПРЕДИ позицията, на която искаме да вмъкнем
    while (current->next != nullptr && currentIndex < position - 1) {
        current = current->next;
        currentIndex++;
    }

    // Свързваме новия възел
    newNode->next = current->next;
    current->next = newNode;

    // 5. Случай: Ако сме вмъкнали след досегашния tail, обновяваме tail
    if (newNode->next == nullptr) {
        tail = newNode;
    }
}
