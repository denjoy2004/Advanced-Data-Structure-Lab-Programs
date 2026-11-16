#include <stdio.h>
void dfs(int n, int adj[n][n],int visited[n],int start){
	visited[start]=1;
	printf("%d",start);
		
	for(int i=0;i<n;i++){
		if(adj[start][i]==1&&!visited[i]){
			dfs(n,adj,visited,i);
		}
	}
}
void main(){
	int n,v,u,e,start;
	printf("Enter number of vertices : ");
	scanf("%d",&n);
	int adj[n][n];
	int visited[n];
	for (int i=0;i<n;i++){
		visited[i]=0;
		for (int j=0;j<n;j++){
			adj[i][j]=0;
		}
	}
	printf("Enter number of edges : ");
	scanf("%d",&e);
	
	printf("Enter edges as (u v) :\n");
	for(int i=0;i<e;i++){
		scanf("%d%d",&u,&v);
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
	dfs(n,adj,visited,start);
	printf("\n");
	 
}
