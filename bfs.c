#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define MAX 3


void BFS(int arr[][MAX],int visited[],int start){

    int queue[MAX],front=-1,rear=-1,i,k;

    for(k=0;k<MAX;k++){
        visited[k]=0;
    }

    queue[++rear]=start;
    front++;
    visited[start]=1;

    while(rear>=front){
        
        start=queue[front++];
        printf("%d ",start);

        for(i=0;i<MAX;i++){
            if(arr[start][i] && visited[i]==0){
                queue[rear++]=i;
                visited[i]=1;
            }
        }

    }
    

}

int main(){
    
    int visited[MAX];
    int adj[MAX][MAX];
    int option;
    int i,j;

    printf("Enter the adjacency matrix : \n");

    for(i=0;i<MAX;i++)
    for(j=0;j<MAX;j++)
    scanf("%d",&adj[i][j]);

    BFS(adj,visited,0);
}