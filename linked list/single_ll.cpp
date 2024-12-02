#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val){
        data=val;
       this->next = NULL;
    }
};
node*insertattail(node*head,int val){
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return head;
    }
    node*temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    return head;
}

node*insertathead(node*head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
    return head;
}


int search(node*head,int val){

    int count=0;
    node*temp=head;
    while(temp!=NULL){
        if(temp->data==val){
            return count;
        }
        count++;
        temp=temp->next;
    }
    return -1;
}

void delet(node*head,int val){
    node*temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node*addbefor(node*head,int val,int valuebefre){
    node*n=new node(val);
       if (head->data==valuebefre) {
        head = insertathead(head, val); 
        return head;
    }

    node*temp=head;
    if(temp->next->data!=val){
        temp=temp->next;
    }
    n->next=temp->next;
    temp->next=n;
    return head;

}

void display(node *head)
{
    if (head == NULL)
        return;
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout <<"NULL";
    cout<<endl;
}

int main()
{
node*head=NULL;
  head = insertattail(head,1); 
    head = insertattail(head,2); 
    head=insertattail(head,3);
display(head);

head=insertathead(head,6);
display(head);
   cout << "Position of 3: " << search(head, 3) << endl;

// delet(head,3);
// display(head);

head=addbefor(head,8,2);
display(head);

}