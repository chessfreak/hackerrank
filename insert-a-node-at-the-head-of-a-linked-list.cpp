SinglyLinkedListNode* insertNodeAtHead(SinglyLinkedListNode* llist, int data) {
    SinglyLinkedListNode *node = new SinglyLinkedListNode(data);
    if(llist==NULL)
    {
        llist=node;
        return llist;
    }
    else {
    {
       node->next=llist;
       return node;
    }

    }

}
