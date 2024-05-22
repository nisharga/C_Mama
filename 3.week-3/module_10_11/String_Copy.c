#include <stdio.h>
#include <string.h> 
int main() {
    char a[100], b[101]; 
    scanf("%s %s", a, b);
   
    strcat(a, b);

    printf("%s %s", a, b);







    /* strcpy(a, b);
    
    printf("%s %s", a, b); */

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
