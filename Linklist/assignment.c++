#include<iostream>
#include<stdlib.h>
using namespace std;
//create a node
struct Node{
    int data;
    struct Node*next;
};
void inserAtBeggining(struct Node** head,int new_data){
    //allocating a memory to a node
    struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
    //inset a data
    new_node->data= new_data;
    new_node->next= (*head);
(*head) = new_node;

}
     //insert a node after a node
     void insertAfter(struct Node* prev, int new_data){
         if(prev==NULL){
             cout<<"the given previous node cannot be null";
             return ;
         }
         struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
         new_node->data=new_data;
         new_node->next=prev->next;
         prev->next=new_node;
     }
     //insert at the end 
     void insertAtend(struct Node ** head,int new_data){
         struct Node* new_node=(struct Node*)malloc(sizeof(struct Node));
         struct Node*last=*head;
         new_node->data=new_data;
         new_node->next=NULL;

         if(*head==NULL){
             *head=new_node;
             return ;
            }
         while (last->next!=NULL)
         {
             last=last->next;
             last->next=new_node;
             return ;
         }
     
         //delete a node 
         void deleteNode(struct Node**head,int key){
             struct Node*temp=*head,*prev;
             if(temp!=NULL && temp->data==key){
                 *head=temp->next;
                 free(temp);
                 return ;

             }
             // find the key to be deleted
             while(temp!=NULL && temp->data!=key){
                 prev=temp;
                 temp=temp->next;
             }

             // If the key is not present
             if(temp==NULL){
             retrun ;
             }
            // remove the node
            prev->next=temp->next;
            free (temp);
         }
     
         // sort the linked list
         void sortLinkedlist(struct Node** head){
             struct Node *current=*head,*index=NULL;
             int temp;
             if(head==NULL){
                 return ;

             }
             else{
                 while(current!=NULL){
                     index=current->next;
                     while(index!=NULl){
                         if(current->data>index->data){
                             temp=current->data;
                             current->data=index->data;
                             index->data=temp;
                         }
                         index=index->next;
                     }
                     current=current->next;
                 }
             }
         }

         // print the linked list
         void printList(struct Node* node){
             while(node!=NULL){
                 cout<<node->data<< " ";
                 node=node->next;
             }
         }
     
         // driver program given below
         int main(){
  struct Node* head=NULL;
  insertAtend(&head,1);
  inserAtBeggining(&head,2);
  inserAtBeggining(&head,3);
  insertAtend(&head,4);
  insertAfter(&head,5);
  cout<<"linked list is: " ;
  printList(head); 
  cout<<"\n after deleting an element:";
  deleteNode(&head,3);
  printList(head);
  sortLinkedlist(&head);
  cout<<"\nsorted linked list is:";
  printList(head);      
  }
         
     