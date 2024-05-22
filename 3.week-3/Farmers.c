#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int t;
    scanf("%d", &t);

    int arr[3];
    int M1, M2, D1;

    while(t--){  
        scanf("%d %d %d", &M1, &M2, &D1);  
        int M3= M1 + M2; 
        int D2=(M1 * D1)/ M3;
        int result = D1-D2;
        printf("%d\n", result); 
    } 
 
    return 0;
}
 