#include <bits/stdc++.h>
using namespace std;

int spanningTree(int V,int E,vector<vector<int> > graph);
// Driver code

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int V,E;
        cin>>V>>E;
        vector< vector<int> > graph(V,vector<int>(V,INT_MAX));

        while(E--)
        {
            int u,v,w;
            cin>>u>>v>>w;
            u--,v--;
            graph[u][v] = w;
            graph[v][u] = w;
        }

        cout<<spanningTree(V,E,graph)<<endl;
    }
    return 0;
}

// } Driver Code Ends


// Function to construct and print MST for
// a graph represented using adjacency
// matrix representation, with V vertices.
// graph[i][j] = weight if edge exits else INT_MAX

int prims(int V,vector< pair<int,int>> adj[],int vis[],int dis[],int par[])
{
    vis[0] = 1;
    
    dis[0] = 0;
    
    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int> > >q;
    
    q.push({0,0});
    
    int cost = 0;
    
    while(q.size())
    {
        int curr = q.top().second;
        
      //  int weight = q.top().first;
      
      if(!vis[curr])  cost += q.top().first;
        
        q.pop();
        
        for(auto neigh: adj[curr])
        {
            int neighr = neigh.second;
            
            int weight = neigh.first;
            
            if( !vis[neighr] )
            {
                if(dis[neighr] > weight )
                {   
                    dis[neighr] = weight;
                    par[neighr] = curr;
                    q.push({weight,neighr});
                
                }    
                
                
            }
        }
        
        vis[curr] = 1;
        
    }
    
   return cost;
}


int spanningTree(int V,int E,vector<vector<int> > graph)
{
     int vis[1000] = {0};
    
     int dis[1000];
    
     int par[1000];
    
    memset(dis,( int)1e4,sizeof(dis));
    
    memset(par,-1,sizeof(par));
    
    vector<pair<int,int>> adj[1000];
    
    for(int i = 0;i<graph.size();i++)
    {
        for(int j = 0;j<graph[i].size();j++)
        {
            adj[i].push_back({graph[i][j],j});
            adj[j].push_back({graph[i][j],i});
        }
    }
    
    return  prims(V,adj,vis,dis,par);
    
    // code here
}