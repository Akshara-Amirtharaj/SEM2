// program to find the sum of the digits using only pointers
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *num, *sum;
 

    sum = (int*)malloc(sizeof(int));
    num = (int*)malloc(sizeof(int));
   
    *sum = 0;

    printf("Enter the value of num: ");
    scanf("%d", num);

    while(*num!=0)
     {
        *sum = *sum + *num;
        (*num)--;
    }

    printf("The sum is %d\n", *sum);

    free(sum);
    free(num);

    return 0;
}
