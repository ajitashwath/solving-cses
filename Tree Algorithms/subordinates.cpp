// Given structure of a company
// Calculate for each employee the number of subordinates

// Uses DFS to count subordinates in a tree structure in O(n) time

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj; // Adjacency list to store subordinates
vector<int> subordinates; // No. of subordinates for each employee

int dfs(int node) {
    int cnt = 0;
    for(int child : adj[node]) cnt += 1 + dfs(child);
    subordinates[node] = cnt;
    return cnt;
}

int main() {
    int n;
    cin >> n;
    adj.resize(n + 1);
    subordinates.assign(n + 1, 0);
    for(int i = 2; i <= n; i++) {
        int boss;
        cin >> boss;
        adj[boss].push_back(i);
    }
    dfs(1);
    for(int i = 1; i <= n; i++) cout << subordinates[i] << " ";
}