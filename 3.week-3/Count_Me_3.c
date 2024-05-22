#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
     
    while(n--){  
    char strings[10001];
    scanf("%s",  &strings);

    int smallletter = 0 , capitalletter = 0, numbers = 0;
       
    for (int j = 0; j < strlen(strings); j++) { 
        if(strings[j] >= 'A' && strings[j] <= 'Z'){
            capitalletter++;
        }else if(strings[j] >= 'a' && strings[j] <= 'z'){
            smallletter++;
        }else if(strings[j] >= '0' && strings[j] <= '9'){
            numbers++;
        } 
    }

    printf("%d %d %d\n", capitalletter, smallletter, numbers); 
}
    return 0;
}
 