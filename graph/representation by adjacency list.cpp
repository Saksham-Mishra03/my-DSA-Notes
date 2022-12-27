#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;


class graph{
    
    unordered_map<int,list<int>>adj;
    public:
    void addedge(int u, int v, bool direction)
    {
        //direction =0 for undirected and 1 for directed
        
        adj[u].push_back(v);
        if(direction==0)
        {
            adj[v].push_back(u);
        }
        
    }
    void print()
    {
        for(auto i:adj)
        {
            cout<<i.first<<"->";
            
            for(auto j: i.second)
            {
                cout<<j<<", ";
                
            }
            cout<<endl;
        }
    }
    
};

int main()
{
    int n;
    cout<<"enter the number of edges"<<endl;
    cin>>n;
    
    int m;
    cout<<"enter the number of nodes"<<endl;
    cin>>m;
    
  
    
    graph g;
    
    for(int i = 0; i<n;i++)
    {
        int u,v;
        cin>>u>>v;
        //creating graph
        g.addedge(u,v,0);
    }
    //printing grap
    g.print();
    
    
    
    return 0;
}
