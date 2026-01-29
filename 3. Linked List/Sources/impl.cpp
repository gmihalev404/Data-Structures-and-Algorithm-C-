struct Node{
  int data;
  Node *next;

  Node(int data, Node* next = nullptr) {
    this->data = data;
    this->next = next;
  }
}


int main(){
  Node *head = new Node(5);
  return 0;
}
