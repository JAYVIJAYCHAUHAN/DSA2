#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAthead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    head=n;
}
void insertAttail(node* &head,int val){
     
    node*n=new node(val);
    if(head==NULL){
        head=n;
        return ;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void deleteAthead(node* &head){
    node* todelete= head;
    head=head->next;
    delete todelete;
}
void deletell(node* &head,int val){
    if(head==NULL)
        return ;
    if(head->next=NULL){
        deleteAthead(head);
        return ;
    }
    node* temp=head->next;
    while(temp->next->data!=val){
        temp= temp->next;
    }
    node *todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
 
}
void reversell(node* &head){
    node* preptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
nextptr=currptr->next;
currptr->next=preptr;
preptr=currptr;
currptr=nextptr;
    }
}
void display(node*head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
    bool search(node* head,int key){
        node*temp=head;
        {
            while(temp!=NULL){
                if(temp->data==key){
                    return true;
                }
                temp=temp->next;

            }
            return false;
        }
    }

int main(){
    node* head=NULL;
    insertAttail(head,1);
 insertAttail(head,1);
  insertAttail(head,8);
   insertAttail(head,5);
    insertAttail(head,1);
    display(head);
    insertAthead(head,4);
    display(head);
    cout<<search(head,5)<<endl;
    deleteAthead(head);
//display(head);
//deletell;
//display(head);
cout<<reversell<<endl;
    return 0;
}