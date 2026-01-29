bool search(int x) const {
  Node *current = head;

  while(current != nullptr){
    if (current->data == x){
      return true;
    }
    current = current->next;
  }

  return false;
}
