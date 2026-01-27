SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    if (!head1) return head2;
    if (!head2) return head1;
    
    SinglyLinkedListNode* head;
    if (head1->data < head2->data) {
        head = head1;
        head1 = head1->next;
    }
    else {
        head = head2;
        head2 = head2->next;
    }
    
    SinglyLinkedListNode* newList = head;
    
    while (head1 && head2) {
        if(head1->data < head2->data) {
            newList->next = head1;
            head1 = head1->next;
        }
        else {
            newList->next = head2;
            head2 = head2->next;
        }
        newList = newList->next;
    }
    
    while (head1) {
        newList->next = head1;
        newList = newList->next;
        head1 = head1->next;
    }
    
    while (head2) {
        newList->next = head2;
        newList = newList->next;
        head2 = head2->next;
    }
    return head;
}
