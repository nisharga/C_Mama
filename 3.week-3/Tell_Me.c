#include <stdio.h>

int main()
{
    int T, N, X; 
    scanf("%d", &T);
    scanf("%d", &N);
    int A[N]; 

    // while(T--){
    for(int i = 0; i < N; i++){
        
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    scanf("%d", &X);
    int flag = 0;

   for (int i = 0; i < N; i++){
        if(A[i] == X){
            flag = 1;
            break;
        }
    }

    if(flag == 0){
        printf("NO\n");
    }else{
        printf("YES\n");
    }

    }
    return 0;
}