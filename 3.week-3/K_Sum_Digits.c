#include <stdio.h>
#include <string.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);
    
    char str[n];
    int numAll[n];

    for (int i = 0; i < n; i++){
        scanf("%s", &str[i]);
    }

    for (int i = 0; i < n; i++){
        numAll[i] = str[i] - 48;
    }
    
    for (int i = 0; i < n; i++){
        sum += numAll[i];
    }

     printf("%d\n", sum);

    return 0;
}
 