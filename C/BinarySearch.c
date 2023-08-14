#include <stdio.h>
#include <math.h>

int main()
{
    int L=0, M, i, j, val;
    int a[] = {2,35,68,3,43,5,34,22,51,7,8,4,32,23,13};
    int U = sizeof(a)/sizeof(int)-1;
    // Sorting the array
    for(i=0; i<=U-1; i++){
        for(j=i+1; j<=U; j++){
            if(a[i] >= a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Enter the number to search: ");
    scanf("%d", &val);
    j = ceil(U/2);
    // Searching for value position in the array
    for(i=0; i<=j; i++){
        M = ceil((L + U) / 2);
        if(a[M] == val){
            printf("The position of %d is %d", val, M);
            break;
        }
        else if(val > a[M]){
            L = M + 1;
        }
        else{
            U = M - 1;
        }
    }
}
