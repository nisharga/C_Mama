#include <stdio.h> 
#include <string.h>
int main()
{ 
    char str[1000];
    scanf("%s", &str); 
    char c[];

    for(int i = strlen(str) - 1; i >= 0 ; i--){ 
      c = str[i];
      printf("%c", c);
    } 

     

    /* if(a == b){
        printf("YES\n");
    }else{
        printf("NO\n");
    } */
 
    /* printf("%s", b); */

    return 0;
}
 