#include<stdio.h>
#include<conio.h>

int source,V,E,time,visited[20],G[20][20];

void DFS(int i){
    int j;
    printf("%d -> ",i+1);
    for(j=0;j<V;j++){
        if(G[i][j]==1 && visited[i]==0){
            DFS(j);
        }
    }
}

int main(){
    
    int i,j,V1,V2;
    printf("Enter the no. of vertices : ");
    scanf("%d",&V);
    printf("Enter the no. of edges : ");
    scanf("%d",&E);

    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            G[i][j] = 0;
        }
    }

    for(i=0;i<E;i++){
        printf("Enter the edges (format : v1 v2) : ");
        scanf("%d%d",&V1,&V2);
        G[V1-1][V2-1]=1;
    }

    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            printf("%d\t",G[i][j]);
        }
        printf("\n");
    }
    
    printf("Enter the source : ");
    scanf("%d",&source);
    DFS(source-1);
    getch();
    return 0;
}