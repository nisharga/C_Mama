#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int str[a + 1];

    int cnt[10] = { 0 };

    for (int i = 0; i < a; i++){
        scanf("%d", &str[i]);
    }
    
    for (int i = 0; i < a; i++){
        cnt[str[i]]++;
    }
    
    for (int i = 0; i <= b ; i++){
        if(cnt[i] > 0){
            printf("%d\n", cnt[i]);
        }
    }

    return 0;
}
 

  
//  #include <stdio.h>

// int main() {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     int A[N];
//     int cnt[M+1];  

    
//     for (int i = 0; i <= M; i++) {
//         cnt[i] = 0;
//     }

    
//     for (int i = 0; i < N; i++) {
//         scanf("%d", &A[i]);
//         cnt[A[i]]++;
//     }

    
//     for (int i = 1; i <= M; i++) {
//         printf("%d\n", cnt[i]);
//     }

//     return 0;
// }
