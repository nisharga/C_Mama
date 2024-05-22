#include <stdio.h>  
int main()
{ 
    int n;
    scanf("%d", &n); 
    for(int i = 1; i <= 12; i++){ //2 * 1 = 2
        printf("%d * %d = %d\n", n, i, n*i);
    } 
    return 0;
}