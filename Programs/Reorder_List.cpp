
// } Driver Code Ends

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
/* Linked list Node */
struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void reorderList(struct Node** head);

/* Function to create a new Node with given data */
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}

void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}

void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}

int main(void) {
    int t, n, m, i, x;

    cin >> t;
    while (t--) {
        struct Node* temp, *head;
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(&head);
        printList(head);
        freeList(head);
    }
    return 0;
}
////////////////////////////////////////////////////////////////
// Function to reverse the linked list
void reverselist(Node** head)
{
    // Initialize prev and current pointers
    Node *prev = NULL, *curr = *head, *next;
 
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
 
    *head = prev;
}

 
// Function to rearrange a linked list
void reorderList(Node** head)
{

    Node *slow = *head, *fast = slow->next;
    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
 
    Node* head1 = *head;
    Node* head2 = slow->next;
    slow->next = NULL;
 
    reverselist(&head2);
 
    *head = newNode(0);
 
    Node* curr = *head;
    while (head1 || head2) {
       
        if (head1) {
            curr->next = head1;
            curr = curr->next;
            head1 = head1->next;
        }
 
        //add the element from the second list
        if (head2) {
            curr->next = head2;
            curr = curr->next;
            head2 = head2->next;
        }
    }
 
    // Assign the head of the new list to head pointer
    *head = (*head)->next;
}

