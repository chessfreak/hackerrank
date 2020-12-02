
void reversePrint(SinglyLinkedListNode* head) {
    int no=0;
    SinglyLinkedListNode *temp=head;
    if(temp==NULL)
    {

    }
    while(temp!=NULL)
    {
        no++;
        temp=temp->next;
    }
    temp=head;
    int arr[no];
    int i=0;
    while(i<no)
    {
        arr[i]=temp->data;
        i++;
        temp=temp->next;
    }

    for(i=no-1;i>=0;i--)
    {
        cout<<arr[i]<<endl;;
    }

}
