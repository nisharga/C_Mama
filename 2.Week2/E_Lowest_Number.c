#include <stdio.h> 
#include <limits.h> 
int main()
{ 
    int n, min = INT_MAX, position;
    scanf("%d", &n);
    int arr[n]; 
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
        if(min > arr[i]){ //1 2 1
            min = arr[i];
        }
        if(min == arr[0]){ //1 2 1
            position = 1;
        } else if(min == arr[i]){ //1 2 1
            position = arr[i - 1];
        } 
    }

    printf("%d ", min);
    printf("%d", position);
    return 0;
}
 