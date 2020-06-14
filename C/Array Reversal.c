#include <stdio.h>
#include <stdlib.h>

int main()
{
/*    int num, *arr, i;
    scanf("%d", &num);
//    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }
*/
    int i,j,k;
    int n,m;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=n-1;i>=0;i--)

    {
         printf("%d ",a[i]);
    }

    return 0;
}

