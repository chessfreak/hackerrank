SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
  SinglyLinkedListNode *temp=head;
    while(temp!=NULL)
    {
        if(temp->data == temp->next->data)
        {
            temp->next=temp->next->next;
        }
        else
        {
            temp=temp->next;
        }
    }
    return head;
    /*
    Program terminated with signal SIGSEGV, Segmentation fault.

#0  0x00000000004012a6 in removeDuplicates (head=0x14bb5b0) at Solution.cpp:76

76            while(temp->data == temp->next->data)

To enable execution of this file add

    add-auto-load-safe-path /usr/local/lib64/libstdc++.so.6.0.25-gdb.py

line to your configuration file "//.gdbinit".

To completely disable this security protection add

    set auto-load safe-path /

line to your configuration file "//.
 */
}
