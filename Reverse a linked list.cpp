SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {

    SinglyLinkedListNode *temp,*tempp,*tempn;
    temp=head;
    tempp=NULL;
    tempn=temp->next;

    while(temp!=NULL)
    {
        temp->next=tempp;
        tempp=temp;
        temp=tempn;
        if(temp!=NULL)
        {
            tempn=temp->next;
        }
        else
        {
            break;
        }


    }
    head=tempp;
    return head;



}
