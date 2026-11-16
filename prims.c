#include <stdio.h>
#define INF 9999

void main(){
	int n,v,u,e,min, total=0;
	printf("Enter number of vertices : ");
	scanf("%d",&n);
	int cost[n][n],visited[n];
	for (int i=0;i<n;i++){
		visited[n]=0;
		for (int j=0;j<n;j++){
			cost[i][j]=0;
		}
	}
	printf("Enter number of edges : ");
	scanf("%d",&e);
	
	printf("Enter cost matrix (0 for no edge) :\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
		if(u<0||u>=n||v<0||v>=n){
			printf("Invalid edge. Try again \n");
			i--;
			continue;
			
		}
		adj[u][v]=1;
		adj[v][u]=1;
	}
	printf("Enter starting vertex : ");
	scanf("%d",&start);
	
	printf("BFS Traversal \n");
	bfs(n,adj,start);
	printf("\n");
	 
}
