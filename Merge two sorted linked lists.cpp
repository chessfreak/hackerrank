#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node, string sep, ofstream& fout) {
    while (node) {
        fout << node->data;

        node = node->next;

        if (node) {
            fout << sep;
        }
    }
}

void free_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        SinglyLinkedListNode* temp = node;
        node = node->next;

        free(temp);
    }
}

// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode *temp1=head1,*temp2=head2,*head,*temp;
    SinglyLinkedListNode *node=new SinglyLinkedListNode(0);
    head=node;
    temp=node;

    int flag1=0,flag2=0;
    SinglyLinkedListNode **p;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->data<temp2->data)
        {
            SinglyLinkedListNode *node= new SinglyLinkedListNode(temp1->data);


            node->next=NULL;
            temp->next=node;
            temp=node;
            temp1=temp1->next;
            cout<<1<<endl;

        }
        else
        {
            SinglyLinkedListNode *node= new SinglyLinkedListNode(temp2->data);


            node->next=NULL;
            temp->next=node;
            temp=node;
            temp2=temp2->next;
            cout<<2<<endl;
        }
    }
    if(temp1!=NULL)
    {
        temp->next=temp1;
    }
    else
    {
        temp->next=temp2;
    }

    return (head->next);


}

int main()
