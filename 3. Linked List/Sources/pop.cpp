void pop_front() {
  Node *temp = head;

  // списъкът не е празен
  if (head != nullptr){ 
    // 1 елемент 
    if (head == tail){  
      tail = nullptr;
    }
    head = head->next;
    delete temp;
  }
}

void pop_back() {
  
  if(tail==nullptr) return;
  if(head==tail) {
     delete head;
     head = tail = nullptr; 
     return;
  }

  Node *current;
  Node *previous = nullptr;
  current = head;
  
  while (current != tail){
    previous = current;
    current = current->next;
  }

  tail = previous;

  previous->next = nullptr;
  delete current;
}
