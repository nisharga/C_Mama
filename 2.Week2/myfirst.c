#include <stdio.h> 
int main()
{ 
    int n, x, v;
    scanf("%d", &n); 

    int arr[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]); 
    }

    scanf("%d %d", &x, &v);  
    arr[x] = v; 

    for (int val = n - 1; val >= 0; val--){
        printf("%d ", arr[val]);
    } 

    return 0;
}
 