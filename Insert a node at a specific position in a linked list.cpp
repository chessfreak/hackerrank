SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int position) {
    SinglyLinkedListNode *node =new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp;
    if(head==NULL)
    {
        head=node;
        return head;
    }
    else if(position==0)
    {
        head->next=NULL;
        node->next=head;
        return node;
    }
    else
    {
        int no=0;
        temp=head;
        while(no!=position-1)
        {
           temp=temp->next;
           no++;
        }
        node->next=temp->next;
        temp->next=node;
        return head;



    }
