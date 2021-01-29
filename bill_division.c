#include "stdio.h"
#include "stdlib.h"
int main(){
    long int n, k, b, sum=0;
    scanf("%ld %ld", &n, &k);
    long int *a = (long int *)calloc(n, sizeof(long int));
    for(int i=0; i<n; i++){
        scanf("%ld", &a[i]);
        sum+=a[i];
    }
    scanf("%ld", &b);
    long int billA =(sum-a[k])/2 ;
    if (billA!=b) {
        printf("%ld", b-billA);
    }
    else  {
        printf("Bon Appetit");
    }
} 
