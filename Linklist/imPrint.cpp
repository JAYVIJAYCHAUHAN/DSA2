#include<iostream>
using namespace std; 
class node{
    public:
    int data ;
    node*next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
node*take_input(){
    int data;
    cin>>data;
     
    node*head=NULL;
    node*tail=NULL;
    while(data!=-1){
        node *newnode=new node(data);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=tail->next;
        }
        cin>>data;
    }
    return head;
     
} 
  int length_list(node*head){
    int count=0;
    node*temp = head;
    if(head==NULL){
        return 0;
    }
    while(temp->next!=NULL){
        temp=temp->next;
         count++ ; 
    }
    return count;
}
int return_node(node*head,int t){
    int count=0;
    if(head==NULL){
        return -1;
    }
    while(count!=t && head!=NULL){
        head=head->next;
        ++count;
    }
    return head->data;
}
void print(node*head){
    node*temp=head;
   while(temp!=NULL){
       cout << temp->data<<endl;
       temp=temp->next;
   }
  /* temp=head;
   while(temp!=NULL){
       cout << temp->data<<endl;
       temp=temp->next;
   }*/
}
int main(){
    int t;
    cin>>t;
   node n1(23);
    node n2(21);
    node n3(11);
    node*head=&n1;
    n1.next=&n2;
    n2.next=&n3;
 cout << return_node(head,2)<<endl;
   
  /* node *n=new node(32);
    node*head=n;
   node *n1=new node(43);
   node *n2=new node(42);
   node *n3=new node(99);
   n->next=n1;
   n1->next=n2;
   n2->next=n3;
   print(head);
   print(n3);
   print(n2); */
  // node*head=take_input();
   print(head);
  // cout << length_list<< endl;
   
}