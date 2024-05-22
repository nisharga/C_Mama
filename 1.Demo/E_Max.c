
#include <stdio.h> 
#include <limits.h> 
int main()
{ 
    int n;
    scanf("%d", &n);
    int a, min = INT_MIN; // 1 8
    for(int i = 1; i <= n; i++){
        scanf("%d", &a);
        if(a > min){
            min = a;
        }
    }
    printf("%d", min);
    return 0;
}
 