#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
  void dfs(int i,vector<int> adj[],stack<int> &st,vector<int>&vis){
      vis[i]=1;
      for(auto it : adj[i]){
          if(!vis[it]) dfs(it,adj,st,vis);
      }
      st.push(i);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<int> adj[V];
        for(int i=0;i<(int)edges.size();i++){
            int u,v;
           u=edges[i][0];
           v=edges[i][1];
           adj[u].push_back(v);
        }
        
        
        vector<int> vis(V,0);
        stack <int> st;
        vector<int> ans;
        for(int i=0;i<V;i++){
            if(!vis[i]) dfs(i,adj,st,vis);
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};

int main()
{
   
    return 0;
}