#include <stdio.h> 
int main()
{ 
    int n;
    scanf("%d", &n);
    int arr[n];
    long long int summation = 0;
    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < n; j++){
        summation += arr[j];
    }
    
    if(summation < 0){
        printf("%lld", summation * -1);
    }else{
        printf("%lld", summation);
    } 

    return 0;
}
 