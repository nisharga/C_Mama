#include <stdio.h> 
int main()
{  
    
    char arr[1000][1000];
    
    for (int i = 0; i < 10; i++){
        scanf("%c", &arr[i]);
    }

    printf("%c", arr[2]);
    return 0;
}
 