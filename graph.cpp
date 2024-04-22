#include<iostream>
#include<vector>
#include<map>
#include<utility>
using namespace std;

void graphWithoutMatrix(int vertices, int edges){


    vector<vector<int> >graph(vertices);
   

    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    for(int i=0;i<vertices;i++){
        for(int j=0;j<graph[i].size();j++){
            cout<<i<<' '<<graph[i][j]<<endl;
        }
    }


}
void graphWithMap(int vertices, int edges){
    map<char,vector<char> >graph;
    for(int i=0;i<edges;i++){
        char x,y;
        cin>>x>>y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(auto i:graph){
        for(char j:i.second){
            cout<<i.first<<' '<<j<<endl;
        }
    }

}

void weightedGraph(int vertices, int edges){
    map<char,vector<pair<char,int> > >graph;
    for(int i=0;i<edges;i++){
        char x,y;
        int w;
        cin>>x>>y>>w;
        graph[x].push_back(make_pair(y,w));
        graph[y].push_back(make_pair(x,w));
    }

    for(auto i:graph){
        char node=i.first;
        vector<pair<char,int> > value=i.second;
        for(int j=0;j<value.size();j++){
            cout<<node<<" "<<value[j].first<<" weight: "<<value[j].second<<endl;
        }
    }
}

void graphWithMatrix(int vertices, int edges){
    vector<vector<int> >graph(vertices,vector<int>(vertices,0));
    for(int i=0;i<edges;i++){
        int x,y;
        cin>>x>>y;
        graph[x][y]=1;
        graph[y][x]=1;
    }
    cout<<"graph: \n";
    for(int i=0;i<vertices;i++){
        for(int j=0;j<vertices;j++){
            if(graph[i][j]){
                cout<<i<<' '<<j<<endl;
            }
        }
    }
}



int main(){
cout<<"enter the number of vertices: ";
    int vertices;
    cin>>vertices;
     cout<<"enter number of edges: ";
    int edges;
    cin>>edges;

    // graphWithoutMatrix(vertices, edges);
    // graphWithMap(vertices,edges);
    // graphWithMatrix(vertices,edges);
    weightedGraph(vertices,edges);

    return 0;
}