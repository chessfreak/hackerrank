    SinglyLinkedListNode *temp1=head1, *temp2=head2;
    int flag=0;

    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data != temp2->data)
        {
            flag=1;
            break;
        }
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(flag==0  && temp1==NULL && temp2==NULL)
        return 1;
    else
        return 0;
