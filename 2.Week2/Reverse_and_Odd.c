#include <stdio.h> 
int main()
{ 
    int n, temp_number;
    scanf("%d", &n); 
    long long int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%lld", &arr[i]); 
    }

    
        /* for(int val = n - 1; val >= 0; val--){
            if(arr[val] % 2 != 0){
                
            }
        }  */
 
  
        for(int val = n - 1; val >= 0; val--){
            temp_number = arr[val] / 10;
            if (temp_number % 2 == 0){
                printf("%lld ", arr[val]);
            }
            else{
                printf("%lld ", arr[val]);
            }
        }  
    return 0;
}
 