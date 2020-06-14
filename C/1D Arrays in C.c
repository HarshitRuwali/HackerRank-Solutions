#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int i,j,k,m, n;
    
    scanf("%d",&n);
    
    int a[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    int sum=0;

    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);  
    return 0;
}

