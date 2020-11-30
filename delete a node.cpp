SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
    SinglyLinkedListNode *temp=head;
    int no=0;
    if(position==0 && temp->next==NULL)
    {
        return NULL;
    }
    else if(position==0)
    {
        head=temp->next;
        return head;
    }
    while(no!=position-1)
    {
        temp=temp->next;
        no++;
    }
    temp->next=temp->next->next;
    return head;
}
