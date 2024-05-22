#include <stdio.h> 
int main()
{ 
    int n;
    scanf("%d", &n);
    int a;
    int even = 0, odd = 0, neg = 0, pos = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a);
        if (a % 2 == 0){
            even++;
        }else if (a % 2 == 1){
            odd++;
        }else if (a < 0){
            neg++;
        }else{
            pos++;
        }
    } 
    printf("Even: %d Odd: %d Positive: %d Negative: %d", even, odd, pos, neg);
    return 0;
}
 