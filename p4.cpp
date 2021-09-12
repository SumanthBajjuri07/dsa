

#include <iostream>

using namespace std;


class node {
    public:
    int data;
    node* next;
    
    node(int value){
        data = value;
        next=NULL;
        
    }
};



void insertAtend(node** head_ref, int val){
    node* n= new node(val);
    node* head;
    head = *head_ref;
    
    if(head==NULL){
        head=n;
        n->next=NULL;
        return;
    }
 
    
    node* temp;
    temp=head;
    
    while(temp->next!=NULL){
        temp=temp->next;
        
    }
    
    temp->next=n;
    n->next=NULL;
    
}

void print(node* head){
    node* temp1;
    temp1=head;
    
    while(temp1!=NULL){
        cout<< temp1->data<<endl;
        temp1=temp1->next;
    }
    
}



int main()
{
    
    
    cout<<"Hello World";
    node* head;
    head = new node(10);
    node** head_ref1;
    head_ref1= &head;
    insertAtend(head_ref1 , 20);
    insertAtend(head_ref1 , 30);
    print(head);
    



    return 0;
}
