#include "stdio.h"   
#include "string.h"     
int a[1000][2],b[1000];    
int i,n,x,y;     
void dfs(int i,int k)    
{    
    b[k]=b[k]+1;    
    if(k>x)  x=k;    
    if(a[i][1]!=0)  dfs(a[i][1],k+1);    
    if(a[i][2]!=0)  dfs(a[i][2],k+1);    
}    
int main()    
{    
    scanf("%d",&n);    
    memset(a,0,sizeof(a));    
    memset(b,0,sizeof(b));    
    for(i=1;i<=n;i++)    
        scanf("%d%d",&a[i][1],&a[i][2]);    
    x=0;    
    dfs(1,1);    
    y=0;    
    for(i=1;i<1000;i++)    
        if(b[i]>y)   y=b[i];    
    printf("%d %d",y,x);    
    return 0;    
}    