  if(!head)
        return NULL;
    SinglyLinkedListNode *tmp = head;
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(0);
    while(tmp && tmp->next)
    {
        while(tmp->next && tmp->data == tmp->next->data)
        {
            temp = tmp->next;
            tmp->next = tmp->next->next;//temp->next;
            //free(temp);
        }
        if(tmp)
            tmp = tmp->next;
        else
            break;
    }
    return head;
