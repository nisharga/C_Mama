#include <stdio.h>
#include <string.h>

int main()
{
    char s[1000], t[1000];
    scanf("%s %s", &s, &t);

    int ans = strcmp(s, t);

    if(ans == -1){
        printf("%s\n", s);
    }else if(ans == 1){
        printf("%s\n", t);
    }else{
        printf("%s\n", s);
    } 
    return 0;
}
 