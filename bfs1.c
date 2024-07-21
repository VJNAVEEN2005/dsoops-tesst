#include<stdio.h>
#include<conio.h>

int visited[20],G[20][20],queue[20],rear=-1,front=-1;

void BFS(int v){
    int i;
    visited[v]=1;
    queue[++rear]=v;
    front++;

    while(rear>=front){
        v = queue[front++];
        printf("%d-> ",v);
        for(i=0;i<20;i++){
            if(G[v][i]==1 && visited[i]==0){
                queue[++rear]=i;
                visited[i]=1;
            }
        }
    }

}

int main(){
    int i,j,m,n;

    for(i=0;i<20;i++)
    for(j=0;j<20;j++)
        G[i][j]=0;

    for(i=0;i<20;i++)
        visited[i]=0;

    while(1){
        printf("Enter the Edge (v1 v2) in this formate (-1 -1 for stop) : ");
        scanf("%d %d",&m,&n);
        if(m==-1 && n==-1){
            break;
        }
        else{
            G[m][n]=1;
        }
    }

    printf("Enter the starting vertex : ");
    scanf("%d",&i);

    BFS(i);
}