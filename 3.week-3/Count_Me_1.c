#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int devide_by_two = 0, devide_by_three = 0;

    // int cnt[5] = { 0 }

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    
    for (int i = 0; i < n; i++){
        if(a[i] % 2 != 0){
            if(a[i] % 3 == 0){
                devide_by_three++;
            }
        }
        if(a[i] % 2 == 0){
            devide_by_two++;
        }
    }
    printf("%d %d\n", devide_by_two, devide_by_three);
    return 0;
}
 