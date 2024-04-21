#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};


int main(){

// node *one=(node*)malloc(10);
node *head=NULL, *tail=NULL;
node *arr[10];
int count=0;
for(int i=0;i<10;i++){
    count++;
    node *temp=(node*)malloc(sizeof(node));
    temp->data=10*i;
    if(head==NULL){
        head=temp;
        tail=temp;
    }
    else{
        tail->next=temp;
        tail=temp;
    }
    
    
}

node *temp=head;
while(temp->next!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
}

cout<<"count:"<<count<<endl;




    return 0;
}