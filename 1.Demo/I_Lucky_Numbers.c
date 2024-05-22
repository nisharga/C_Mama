#include <stdio.h> 
int main()
{ 
    int n, temp, m;
    scanf("%d", &n);
      //39
        temp = n % 10;
        m = n/10;
        if(temp % m == 0 || m % temp == 0){
            printf("YES");
        }else{
            printf("NO");
        }
     
    return 0;
}
 