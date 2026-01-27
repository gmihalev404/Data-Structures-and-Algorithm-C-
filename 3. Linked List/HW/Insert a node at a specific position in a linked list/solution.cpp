//...
SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* node = new SinglyLinkedListNode(data);
    if (position == 0) {
        node->next = llist;
        return node;
    }
    SinglyLinkedListNode* head = llist;
    for (int i = 1; i < position; ++i) {
        llist = llist->next;
    }
    node->next = llist->next;
    llist->next = node;
    
    return head;
}
//...
