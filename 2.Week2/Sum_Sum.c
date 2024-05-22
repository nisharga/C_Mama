#include <stdio.h> 
int main()
{ 
    int n, positiveSum = 0, negativeSum = 0;
    scanf("%d", &n);
    int arr[n - 1];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if (arr[i] >= 0){
            positiveSum += arr[i];
        }else{
            negativeSum += arr[i];
        }
    }
    printf("%d %d\n", positiveSum, negativeSum);
    
    return 0;
}
 