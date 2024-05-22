#include <stdio.h>  
int main()
{ 
    int n;
    scanf("%d", &n); 
    for(int i = 1; i <= n; i++){ //6 1 2 3 6
        if(n % i == 0){
            printf("%d ", i);
        }
    } 
    return 0;
}


 