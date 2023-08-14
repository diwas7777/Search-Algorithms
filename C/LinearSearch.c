#include <stdio.h>
#include <math.h>

int main(){
    int U,i, val;
    int a[] = {2,35,68,3,43,5,34,22,51,7,8,4,32,23,13};
    U = sizeof(a)/sizeof(int) - 1;
    printf("Enter the value to search: ");
    scanf("%d", &val);
    for(i=0; i<=U; i++){
        if(val == a[i]){
            printf("The position of %d is %d", val, i);
            break;
        }
    }
}