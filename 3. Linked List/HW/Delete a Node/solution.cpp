//...
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    if (!position) return llist->next;
    
    SinglyLinkedListNode* head = llist;
    
    for (int i = 1; i < position; ++i) {
        llist = llist->next;
    }
    
    llist->next = llist->next->next;
    return head;
}
//...
