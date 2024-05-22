#include <stdio.h> 
#include <string.h>
int main()
{ 
    int n;
    scanf("%d", &n);

    char arr[9][10000] = {};

    for (int i = 0; i < n; i++){
        scanf("%s ", arr[i]);
        if(strlen(arr[i]) > 4){
            int wordLength = strlen(arr[i]) - 2;
            printf("%c%d%c\n", arr[i][0], wordLength, arr[i][wordLength + 1]);
        }else{
            printf("%s\n", arr[i]);
        }
    } 
 

    return 0;
}
 