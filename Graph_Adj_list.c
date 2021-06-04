struct ListNode{
	int vertexNo;
	struct ListNode *next;
};

struct Graph{
	int v;
	int e;
	struct ListNode *Adj;
};

struct Graph* Adj_list(){
	int i,x,y;
	ListNode *temp,*t;
	struct Graph *G;
	G = (struct Graph)malloc(sizeof(struct Graph));
	
	printf("ENter no. of vertices and no. of edges.\n");
	scanf("%d %d",&G->v,&G->e);
	G->Adj = (struct ListNode*)malloc(sizeof(struct ListNode)*G->v);
	
	for(i=0;i<G->v;i++)
	{
		G->Adj[i]->vertexNo=i;
		G->Adj[i]->next = G->Adj+i;
	}
	
	for(i=0;G->e;i++)
	{
		printf("Enter edge (source node and destination node.\n)");
		scanf("%d %d",&x,&y);
		temp = (struct LisNode*)malloc(sizeof(struct ListNode));
		temp->vertexNo=y;
		temp->next=G->Adj[x];
		
		t=G->Adj[x];
		while(t->next!=G->Adj[x])
			t=t->next;
			
		t->next=temp;
		
	}
	return (G);
	
		
} 
