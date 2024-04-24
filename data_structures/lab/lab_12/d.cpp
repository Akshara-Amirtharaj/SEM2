// To implement Graph ADT with an adjaceny matrix

#include<stdio.h>
#include<stdlib.h>
#define N 6
#include"queue.h"
class graph
{
    
    int adjacencymatrix[N][N],visited[N];
    int cur,curv;
    public:
    graph()
    {
        for (int i=0;i<N;i++)
        {
            for (int j=0;j<N;j++)
            {
            adjacencymatrix[i][j]=0;
            }
        }
        cur=1;
        curv=0;
    }
    int insert (int u,int v);
    void display();
    int del(int v);
    int search(int v);
    void bfs();
};

int main()
{
    graph g1;
    int choice;
    while(1)
    {
        printf("\n(1) Insert");
        printf("\n(2) Delete");
        printf("\n(3) Search");
        printf("\n(4) Display");
        printf("\n(5) Exit");
        printf("\n Enter your choice");
        scanf("%d",&choice);
        
        switch (choice)
        {
            case 1:
            int v1,v2;
            printf("Enter the vertex 1:");
            scanf("%d",&v1);
            printf("Enter the vertex 2:");
            scanf("%d",&v2);
            if(g1.insert(v1,v2))
            {
               printf("vertex is inserted successfully");
            }
        
            break;

            case 2:
            int v;
            printf("Enter the vertex to be deleted:");
            scanf("%d",&v);
            if(g1.del(v))
            {
                printf("vertex is deleted successfully");
            }
            else
            {
                printf("vertex is not present");
            }
            break;

            case 3:
            int v3;
            printf("Enter the vertex to search");
            scanf("%d",&v3);
            
            if(g1.search(v3))
            {
                printf("vertex is found");
            }
            else
            {
                printf("vertex is not found");
            }
            break;

            case 4:
            g1.display();
            printf("\nBreadth first traversal:\n");
            g1.bfs();
            break;
            
            case 5:
            return 0;
        }
    
    }
}

//method to insert
int graph:: insert(int v1,int v2)
{
    if(cur>=N)
    {
        printf("matrix is full");
        return 0;
    }
   
    else 
    {
        int row=0,col=0;
        for (int i=1;i<=cur;i++)
        {
            if(adjacencymatrix[0][i]==v1)
            {
               col=i;
            }
            if(adjacencymatrix[i][0]==v2)
            {
               row=i;
            }
        for (int i=1;i<=cur;i++)
        {
            if(adjacencymatrix[0][i]==v2)
            {
               col=i;
            }
            if(adjacencymatrix[i][0]==v1)
            {
               row=i;
            }
        }
        if(row!=0 && col!=0)
        {
        adjacencymatrix[row][col]=1;
        adjacencymatrix[col][row]=1;
        return 1;
        }
        if(row!=0 &&col==0)
        {
            adjacencymatrix[0][cur]=v2;
            adjacencymatrix[cur][0]=v2;
            adjacencymatrix[cur][row]=1;
            adjacencymatrix[row][cur]=1;
            cur++;
            return 1;
        }
        if(row==0 &&col!=0)
        {
            adjacencymatrix[0][cur]=v1;
            adjacencymatrix[cur][0]=v1;
            adjacencymatrix[cur][col]=1;
            adjacencymatrix[col][cur]=1;
            cur++;
            return 1;
        }
        
        else
        {
             if(v1==v2)
        {
            adjacencymatrix[0][cur]=v1;
            adjacencymatrix[cur][0]=v1;
            adjacencymatrix[cur][cur]=1;
            cur++;
            return 1;
        }
        adjacencymatrix[0][cur]=v1;
        adjacencymatrix[0][cur+1]=v2;
        adjacencymatrix[cur][0]=v1;
        adjacencymatrix[cur+1][0]=v2;
        adjacencymatrix[cur][cur+1]=1;
        adjacencymatrix[cur+1][cur]=1;
        cur+=2;
        return 1;
        }
    }
}
}

//method to display
void graph::display()
{
    for (int i=0;i<cur;i++)
    {
        for (int j=0;j<cur;j++)
        {
            printf("%d\t",adjacencymatrix[i][j]);
        }
        printf("\n");
    }
}

//method to delete
int graph:: del(int v)
{
    if(cur==-1)
    {
        printf("The matrix is empty already");
        return 0;
    }
    for (int i=1;i<=cur;i++)
    {
        if(adjacencymatrix[0][i]==v)
        {
            for (int j=i;j<=cur;j++)
            {
            adjacencymatrix[0][j]=adjacencymatrix[0][j+1];
            }
        }
        if(adjacencymatrix[i][0]==v)
        {
            for(int j=i;j<=cur;j++)
            {
            adjacencymatrix[j][0]=adjacencymatrix[j+1][0];
            }
            cur--;
        }
    }
    return 1;
}

//method to search

int graph:: search(int v)
{
    for (int i=1;i<=cur;i++)
    {
        if(adjacencymatrix[0][i]==v)
        {
            return 1;
        }
    }
    return 0;
}

//method for bfs traversal
void graph::bfs()
{
    queue q1;

    for(int i=1;i<cur;i++)
    {
        for(int j=1;j<cur;j++)
        {
            if (adjacencymatrix[i][j]==1)
            {
                q1.enqueue(adjacencymatrix[0][j]);
            }
        }
        int found=0;
        int data=q1.dequeue();
        if(curv==0)
        {
            visited[curv]=data;
            curv++;
        }
        else
        {
        for (int i=0;i<=curv;i++)
        {
           if(data==visited[i])
           {
            found=1;
            break;
           }
        }
        if(found==0)
        {
            visited[curv]=data;
            curv++;
        }
        }
    }
    for(int i=0;i<curv;i++)
    {
        printf("%d\t",visited[i]);
    }
}