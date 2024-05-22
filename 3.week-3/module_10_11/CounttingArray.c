#include <stdio.h> 
int main()
{ 
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int cnt[7] = { 0 };
    for (int i = 0; i < n; i++){
        cnt[a[i]]++;
    }

    printf("0: %d\n", cnt[0]);
    printf("1: %d\n", cnt[1]);
    printf("2: %d\n", cnt[2]);
    printf("3: %d\n", cnt[3]);
    printf("4: %d\n", cnt[4]);
    printf("5: %d\n", cnt[5]);
    return 0;
}
 