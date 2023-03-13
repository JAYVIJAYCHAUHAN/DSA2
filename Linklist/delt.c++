#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*next;
};
void deleteat(node*head){
    node*todelete=head;
    head=head->next;
    delete todelete;
}
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        deleteat(head);
    }
    node*temp=head;
    while(temp->next->data=val){
        temp=temp->next;

    }
    node*todelete=temp->next;
    temp->next=temp->next->next;
    
}
int main(){
    node*head=NULL;
    deletion(head,4);
   
}
