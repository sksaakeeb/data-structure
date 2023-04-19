#include<stdio.h>
void bellman_ford(int G[][10],int edge[][2],int s,int V,int E){
    int flag=1,i,d[V],k,u,v;
    for(i=0;i<V;i++){
        d[i]=999;
    }
    d[s]=0;
    for(i=1;i<V;i++){
        for(k=0;k<E;k++){
            u=edge[k][0];
            v=edge[k][1];
            if(d[u]+G[u][v]<d[v])
                d[v]=d[u]+G[u][v];
        }
    }
    for(k=0;k<E;k++){
        u=edge[k][0];
        v=edge[k][1];
        if(d[u]+G[u][v]<d[v])
            // d[v]=d[u]+G[u][v];
            flag=0;
    }
    if(flag==0){
        printf("Negative cycle present in graph");
    }
    else{
        for(i=0;i<V;i++){
            printf("%d  ",d[i]);
        }
    }
}
int main(){
    int V,E,i,j,G[10][10],u,v,w,edge[10][2],k=0,s;
    printf("Enter the no of vertices: ");
    scanf("%d",&V);
    printf("Enter the no of deges: ");
    scanf("%d",&E);
    for(i=0;i<V;i++){
        for(j=0;j<V;j++)
            G[i][j]=0;
    }
    for(i=0;i<E;i++){
        printf("Enter start vertex: ");
        scanf("%d",&u);
        printf("Enter end vertex: ");
        scanf("%d",&v);
        printf("Enter weight: ");
        scanf("%d",&w);
        G[u][v]=w;
        edge[k][0]=u;
        edge[k][1]=v;
        k++;        
    }
    printf("Enter source vertex: ");
    scanf("%d",&s);
    bellman_ford(G,edge,s,V,E);
return 0;
}