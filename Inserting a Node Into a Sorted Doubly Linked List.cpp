DoublyLinkedListNode* sortedInsert(DoublyLinkedListNode* head, int data) {
    DoublyLinkedListNode* node = new DoublyLinkedListNode(data);
    if(head==NULL)
    {

        node->next=NULL;
        node->prev=NULL;
        head=node;
        return head;
    }
    DoublyLinkedListNode *temp=head;
    if(data<=temp->data)
    {
        node->next=temp;
        temp->prev=node;
        head=node;
        return head;
    }
    while(temp!=NULL)
    {
        if(temp->next!=NULL)
        {


            if(data>=temp->data && data<=temp->next->data)
            {



                node->next=temp->next;
                temp->next->prev=node;
                temp->next=node;
                node->prev=temp;
                //cout<<1<<endl;
                break;
            }
            else
            {
                temp=temp->next;
            }

        }
        else
        {
            node->next=NULL;
            temp->next=node;
            node->prev=temp;
            //cout<<2<<endl;
            break;
        }



    }
    return head;





}
