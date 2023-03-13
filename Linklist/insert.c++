#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node*next;

};
void insert_end(node**head,int value){
    node* new=new_node;
    new_node->data=value;
    new_node->next=NULL;
    if(*head==NULL){
        *head=new_node;

    }
    else{
        node*temp=*head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=new_node;
    }
}
void print(node*head){
    while(head->next!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<head->data;
}
int main(){
    int arr[]={7,6,5,3,1};
    node*head=NULL;
    for(int i=0;i<5;i++)
    {
        insert_end(&head,arr[i]);
    }
    print(head);
}


