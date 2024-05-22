#include <stdio.h> 
#include <limits.h> 
int main()
{ 
    int n, min, max;
    scanf("%d", &n);
    int num[n];

    int minE = INT_MAX;
    int maxE = INT_MIN;

    for (int i = 0; i < n; i++){
        scanf("%d", &num[i]);

        if(num[i] < minE){
            minE = num[i];
        }
        if(num[i] > maxE){
            maxE = num[i];
        } 
        
    }

    int minTemp = minE; 
    
    for(int i = 0; i < n; i++){
        if(num[i] == minE){
            num[i] = maxE;
        }
        else if(num[i] == maxE){
            num[i] = minTemp;
        }
        printf("%d ", num[i]);
    } 
    
    

    return 0;
}
 