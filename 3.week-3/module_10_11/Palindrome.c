#include <stdio.h>
#include <string.h> 
int main() {
    char arry[1001];
    int count;
    scanf("%s", arry);

    printf("%c ", arry[2]);
    printf("%c", arry[1]);

   /*  count = strlen(arry);
    int x = count - 1;
    int flag = 0;
    for (int i = 0; x > i; i++, x--) {
        if (arry[i] != arry[x]) {
            flag = 1;
            break;  
        }
    }
    if (flag == 1) {
        printf("NO");
    } else {
        printf("YES");
    } */
    return 0;
}
