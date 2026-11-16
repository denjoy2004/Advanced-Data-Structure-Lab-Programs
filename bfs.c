#include <stdio.h>
void bfs(int n, int adj[n][n],int start){
	int visited[n];
	int queue[n];
	int front=0,rear=0;
	for (int i=0;i<n;i++){
	visited[i]=0;
	}
	
	visited[start]=1;
	queue[rear++]=start;
	while(front<rear){
		int v=queue[front++];
		printf("%d",v);
		
		for(int i=0;i<n;i++){
			if(adj[v][i]==1&&!visited[i]){
				visited[i]=1;
				queue[rear++]=1;
			}
		}
	}
}
void main(){
	int n,v,u,e,start;
	printf("Enter number of vertices : ");
	scanf("%d",&n);
	int adj[n][n];
	for (int i=0;i<n;i++){
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
	bfs(n,adj,start);
	printf("\n");
	 
}
