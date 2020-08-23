#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int freq[10];
    char str[1000];
    
    scanf("%s", &str);
    
    for (int i = 0; i < 10; i++) //initialising all the values to 0
        freq[i] = 0;
    
    for (int i = 0; i < strlen(str); i++) {
        int pos = str[i] - '0'; 
        if (pos >= 0 && pos < 10)
            freq[pos]++;
    }
    
    for (int i = 0; i < 10; i++)
        printf("%d ", freq[i]);

    return 0;
}
