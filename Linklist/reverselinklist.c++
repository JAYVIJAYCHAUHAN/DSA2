 #include<bits/stdc++.h>
 using namespace std;
 struct Node
 {
    string  data;
    struct Node* next;
    Node(string data){
        this->data=data;
        next=NULL;
    }
 };
 struct Linklist{
     Node*head;
     Linklist(){
         head=NULL;
     }
     // pailndrome function
      
     void display{
         struct Node* temp=head
         while(temp!=NULL){
             cout<<temp->data<<" ";
             temp=temp->next;
         }
     }
     void pushback(string data){
         Node* temp=new Node(data);
         temp->next=head;
         head=temp;
     }
 };
 int main(){
     Linklist ll;
     
     ll.push(abcd);
     ll.push(adc);
     ll.push(add);
     cout<<"given linklist is "<<endl;
     ll.display();
     ll.pailndrome();
     cout<<"pailndrome the linkllist is"<<endl;
     ll.display();
 }