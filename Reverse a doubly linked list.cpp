DoublyLinkedListNode* reverse(DoublyLinkedListNode* head) {

    DoublyLinkedListNode * temp=head;
    int count=0;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        count++;
    }
    count=count+1;
    head=temp;
    DoublyLinkedListNode *a;
    while(count--)
    {
        a=temp->next;
        temp->next=temp->prev;
        temp->prev=a;
        temp=temp->next;
    }
    return head;




}
