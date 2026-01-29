void push_front(int number) {
  Node *newHead = new Node(number, head);
  head = newHead;

  if (tail == nullptr){ // празен списък
    tail = head;
  }
}

void push_back(int number) {
   if(head == nullptr){     // празен списък
     head = new Node(number);
     tail = head;
   }
  else{   
     tail->next = new Node(number);
   }
}
