#include <stdio.h>
void main(){
	int n,v,u,e;
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
	printf("Adjacency Matrix : \n");
	printf("   ");
	for(int i=0;i<n;i++){
		printf("%3d",i);
	}
	printf("\n");
	for (int i=0;i<n;i++){
		printf("%3d",i);
		for (int j=0;j<n;j++){
			printf("%3d",adj[i][j]);
		}
		printf("\n");
	}
	
	
}
