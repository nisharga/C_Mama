#include <stdio.h> 
int main()
{ 
    int n, i = 1, t;
    scanf("%d", &n); // 4
   for (int i = 0; i < n; i++){
        scanf("%d", &t); // 12345  
        do{
        printf("%d ", t % 10);
        t=t/10;
        }while(t != 0);
        printf("\n");
   }
    return 0;
}
 