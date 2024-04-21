#include<iostream>
#include<vector>
using namespace std;
int q[10],rear=-1,front=-1;

bool isEmpty(){
    return front==-1 || front>rear;
}

void enqueue(int a){
    if(front==-1)front=0;
    if(rear>=9){
        cout<<"overflow\n";
        return;
    }
    q[++rear]=a;

}
int dequeue(){
    if(isEmpty())return -1;
    return q[front++];
}



int main(){
    
    int n,m;
    cin>>n>>m;
    vector<vector<int> >a(n,vector<int>(n,0));
   for(int i=0;i<m;i++){
    int x,y;
    cin>>x>>y;
    a[x][y]=1;
    a[y][x]=1;
   }

int start,target;
    cout<<"search node: ";
    cin>>start;
    cout<<"target node: ";
    cin>>target;

    vector<bool>visited(n,false);

    enqueue(start);

    while(!isEmpty()){
        int node=dequeue();
            visited[node]=1;
        for(int i=0;i<n;i++){
            if(a[node][i]){

                if(i==target){

                cout<<"possible\n";
                return 0;
                }
            if(!visited[i]){
                enqueue(i);
            }
            }
        }
    }
    cout<<"not possible\n";




   


    return 0;
}