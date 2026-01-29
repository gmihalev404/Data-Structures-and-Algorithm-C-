void remove(int position) {
    // 1. Случай: Празен списък
    if (head == nullptr) return;

    // 2. Случай: Премахване на началото (position 0)
    if (position <= 0) {
        Node* temp = head;
        head = head->next;
        
        // Ако списъкът е имал само един елемент
        if (head == nullptr) {
            tail = nullptr;
        }
        
        delete temp;
        return;
    }

    // 3. Намиране на елемента ПРЕДИ този, който ще трием
    Node* current = head;
    int currentIndex = 0;

    while (current->next != nullptr && currentIndex < position - 1) {
        current = current->next;
        currentIndex++;
    }

    // Ако позицията е извън обхвата или няма елемент за триене
    if (current->next == nullptr) return;

    // 4. Случай: Премахване по средата или в края
    Node* nodeToDelete = current->next;
    current->next = nodeToDelete->next;

    // Ако трием последния елемент, обновяваме tail
    if (current->next == nullptr) {
        tail = current;
    }

    delete nodeToDelete;
}
