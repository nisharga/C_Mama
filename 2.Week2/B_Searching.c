#include <stdio.h> 
int main()
{ 
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int val, answer = -1;
    scanf("%d", &val);

    for (int i = 0; i < n; i++){
        if(arr[i] == val){
            answer = i;
            break;
        }
    }

    printf("%d\n", answer);
    return 0;
}
 