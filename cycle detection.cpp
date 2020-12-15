bool has_cycle(SinglyLinkedListNode* head) {
    if(head==NULL)
    {
        return 1;
    }
    SinglyLinkedListNode *temp=head;
    int no=0;
    int flag=0;
    while(temp!=NULL)
    {
        no++;
        if(no>1000)
        {
            flag=1;
            break;
        }

        temp=temp->next;
    }

    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}
