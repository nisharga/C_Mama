#include <stdio.h> 
#include <string.h>

int main() { 
    int n;
    scanf("%d", &n);

    char arr[100][101]; 

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
        if (strlen(arr[i]) > 10) {
            int wordLength = strlen(arr[i]) - 2; 
            printf("%c%d%c\n", arr[i][0], wordLength, arr[i][strlen(arr[i]) - 1]);
        } else {
            printf("%s\n", arr[i]);
        }
    }

    return 0;
}