#include <stdio.h>
int main()
{
    int i,j,k;
    int n;
    char s[6];

    scanf("%s",s);
    
    n=0;
    for(i=4;i>=0;i--)
   
        n+=(s[i]-'0');
    printf("%d",n);

    return 0;
}
