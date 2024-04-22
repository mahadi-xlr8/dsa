#include<iostream>
#include<vector>
using namespace std;
int stack[10];
int top=-1;

void push(int a){
    if(top==9){
        cout<<"stack overflow!\n";
        return;
    }
    stack[++top]=a;
}
int pop(){
    if(top==-1){
        cout<<"stack is empty\n";
        return -1;
    }
    return stack[top--];
}
int peek(){
    if(top==-1){
        cout<<"stack is empty\n";
        return -1;
    }
    return stack[top];
}

int main(){

    push(10);
    push(11);
    cout<<pop()<<endl;
    cout<<pop()<<endl;
    cout<<peek()<<endl;



    return 0;
}