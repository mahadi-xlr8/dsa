#include<iostream>
using namespace std;

int queue[10],rear=-1,front=-1;
void enqueue(int a){
    if(rear==9){
        cout<<"overflow\n";
        return;
    }
    if(front==-1)front=0;
    rear++;
    queue[rear]=a;
    cout<<"data inserted!\n";

}

int dequeue(){
    if(front==-1 || front>rear){
        cout<<"queue is empty!\n";
        return -1;
    }

        return queue[front++];

}
int main(){

    for(int i=1;i<11;i++)enqueue(i*10);
    for(int i=0;i<14;i++){
        cout<<dequeue()<<endl;
    }


    return 0;
}

