#include <stdio.h>
#include <stdlib.h>
int main(){
    int num;
    printf("Enter size of input:\n");
    if(!scanf("%d",&num)){ //inavlid input
        return 0;
    }
    if(num < 0){
        printf("Invalid size\n");
        return 0;
    }
    printf("Enter numbers:\n");
    int *a = (int*)malloc(sizeof(int)*num);
    int i;
    for(i = 0; i < num; i++){
        if(!scanf("%d",&a[i])){ //inavlid input
            printf("Invalid number\n");
            return 0;
        }
    }
    int expSum = 0;
    for(i = 0; i < num; i++){
        int temp = a[i], power = 0, count = 0;
        if(a[i] > 0){
            while(temp != 0){
                power += temp%2;
                count++;
                temp/=2;
            }
            if(power == 1){
                printf("The number %d is a power of 2: %d = 2^%d\n", a[i],a[i],count-1);
                expSum += count-1;
            }
        }
    }
    free(a);
    printf("Total exponent sum is %d\n", expSum);
    return 0;
}