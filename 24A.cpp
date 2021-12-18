#include <bits/stdc++.h>
using namespace std;

unordered_map <int, vector <int> > graph;
map < pair <int, int>, int > weight;
map < pair <int, int>, bool > path;
bool vis[105];
int cost1, cost2, endn1, endn2;

void dfs_right(int u) {
	vis[u] = true;
	if(u != 1) endn1 = u;
	for(int i=0 ; i<2 ; i++) {
		auto v = graph[u][i];
		if(!vis[v]) {
			if(path[{u, v}] == false) {
				cost1 += weight[{u, v}];
			}
			dfs_right(v);
		}
	}
}

void dfs_left(int u) {
	vis[u] = true;
	if(u != 1) endn2 = u;
	for(int i=1 ; i>=0 ; i--) {
		auto v = graph[u][i];
		if(!vis[v]) {
			if(path[{u, v}] == false) {
				cost2 += weight[{u, v}];
			}
			dfs_left(v);
		}
	}
}

void solve() {
	int n, u, v, w;
	cin >> n;
	cost1 = 0; cost2 = 0;
	for(int i=1 ; i<=n ; i++) {
		cin >> u >> v >> w;
		graph[u].push_back(v);
		graph[v].push_back(u);
		weight[{u, v}] = w;
		weight[{v, u}] = w;
		path[{u, v}] = true;
	}
	dfs_right(1);
	if(path[{endn1, 1}] == false)
		cost1 += weight[{endn1, 1}];
	memset(vis, false, sizeof vis);
	dfs_left(1);
	if(path[{endn2, 1}] == false)
		cost2 += weight[{endn2, 1}];
	//cout << cost1 << " " << cost2;
	cout << min(cost1, cost2);
}

int main() {
	solve();
}