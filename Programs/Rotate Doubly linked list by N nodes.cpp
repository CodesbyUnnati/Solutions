void solve( Node *head,int N)
{
    if(N==0)
    return head;
 Node* current=head;
 int count=1;
 while(count<N && current!=NULL)
 {
     current=current->next;
     count++;
 }
 Node *change=current;
 while(current->next!=NULL)
     current->next=head;
     head->prev=current;
     head=change->next;
     head->prev=NULL;
     change->next=NULL;   
 }
