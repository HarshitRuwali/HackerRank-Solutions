#include <stdio.h>
#define dbg printf("in\n");
int main()

{
    int i,j,k;
    int n,m;
    scanf("%d",&n);
    m=2*n+1;
    for(i=1;i<=n;i++)
    {
        for(j=n;j>n-i;j--)
        {
             printf("%d ",j);
        }
        for(j=1;j<=n-i;j++)
        {
            printf("%d ",n-i+1);
        }
        for(j=n-i;j>=1;j--)
        {
            printf("%d ",n-i+1);
        }
        k=n-i+2;
        for(j=1;j<=i-1;j++)
        {
            printf("%d ",k), k++;
        }
        printf("\n");
    }
    for(i=1;i<n;i++)
    {
        for(j=n;j>=i+1;j--)
        {
            printf("%d ",j);
        }
        for(j=1;j<=2*i-1;j++)
        {
            printf("%d ",i+1);
        }
        for(j=i+1;j<=n;j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
