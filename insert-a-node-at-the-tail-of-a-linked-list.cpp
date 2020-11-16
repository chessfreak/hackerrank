   SinglyLinkedListNode * newN= new SinglyLinkedListNode(data);
    //newN->next=NULL;
    //newN->data=data;
    SinglyLinkedListNode * temp=head;
    if(head==NULL)
    {
        head=newN;
        return head;
    }
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newN;
    return head;
