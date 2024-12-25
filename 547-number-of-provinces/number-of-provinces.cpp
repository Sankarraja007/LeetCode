class Solution {
public:
    void traverse(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& ls){
        vis[node]=1;
        ls.push_back(node);

        for(int i=0; i<adj.size(); i++){
            if(i!=node && !vis[i] && adj[node][i]){
                traverse(i, adj, vis, ls);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> vis(n,0);
        vector<int> ls;
        int count=0;        
        printVector(vis);
        printVector(ls);
        for(int i=0; i<n; i++){
            if(!vis[i]){
                traverse(i, isConnected, vis, ls);
                printVector(vis);
                printVector(ls);
                count++;
            }
        }
        return count;
    }
    void printVector(vector<int>& vis){
        for(int i=0; i<vis.size(); i++){
            cout<<vis[i]<<" ";
        }
        cout<<endl;
    }

};