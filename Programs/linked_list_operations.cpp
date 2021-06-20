#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node* next;
    
    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node* &head,int val)
{

node* n=new node(val);
n->next=head;
head=n;
}
   
    void insertAtTail(node* &head, int val)
    {
        node* n = new node(val);
        if (head == NULL)
        {
            head = n;
            return;
        }
        node* temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = n;
    }
    void deleteAtHead(node * &head)
    {
        node *toDelete = head;
        head = head->next;
        delete toDelete;
    }
   
    void display(node * head)
    {
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    bool search(node * head, int key)
    {
        node *temp = head;
        while (temp != NULL)
        {
            if (temp->data == key)
            {
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

    int main()
    {
        node *head = NULL;
        insertAtHead(head, 5);
        insertAtHead(head, 4);
        insertAtTail(head, 10);
        deleteAtHead(head);
        search(head, 10);
        display(head);

    return 0;
}
