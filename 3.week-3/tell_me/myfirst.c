#include <stdio.h>
int main()
{
    int T;
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++){
        int N;
        scanf("%d", &N);
        int A[N];
        for (int i = 0; i < N; i++){
            scanf("%d", &A[i]);
        }
        int X;
        scanf("%d", &X);
        int flag = 0; 
        for (int i = 0; i < N; i++){
            if(A[i] == X){
                flag = 1;
                break;
            }
        }

      if(flag == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    }
    return 0;
}
