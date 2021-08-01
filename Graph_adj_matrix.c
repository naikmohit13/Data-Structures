#include <stdio.h>
struct graph{
	int v;
	int e;
	int **Adj;
};

struct graph* adj_Matrix_of_Graph(){
	int u,v,i;
	struct graph *G;
	G = (struct graph*)malloc(sizeof(struct graph));
	
	printf("Enter the number of nodes and edges\n");
	scanf("%d %d",&G->v,&G->e);
	G->Adj = (int**)malloc(sizeof(int)*(G->v*G->v)); 
	
	for(u=0; u<G->v ;u++)
		for(v=0; v<G->v;v++)
			G->Adj[u][v] = 0;
	
	printf("Enter number of nodes in pair to connect them:\n");
	for(i=0;i<G->e;i++)
	{
		scanf("%d %d",&u,&v);
		G->Adj[u][v]=1;
		G->Adj[v][u]=1;
		}
	return (G); 
}
int main()
{	
	struct graph *G;
	G = adj_Matrix_of_Graph();
	
	return 0;
}
