#include <stdio.h> 
int main()
{ 
    int n, m, answer;
    scanf("%d %d", &n, &m);
    answer = n - m;
    if(answer >= 0){
        printf("%d\n", answer);
    }else{
        printf("%d\n", 0);
    } 
    return 0;
}
 