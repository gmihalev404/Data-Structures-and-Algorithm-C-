struct Node{
  int data;
  Node *next;

  Node(int data, Node* next = nullptr) {
    this->data = data;
    this->next = next;
  }
}

struct LinkedList{
  private:
    Node *head, *tail;

  public:
    List(){
      head = nullptr;
      tail = nullptr;
    }
}
