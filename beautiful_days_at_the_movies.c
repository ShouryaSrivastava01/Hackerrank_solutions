#include "stdio.h"
#include "stdlib.h"

int reverse(int n){
    int sum=0,a;
    while(n!=0){
        a=n%10;
        n=n/10;
        sum=sum*10+a;
        }
   return sum;
}
int  main(){
    int i, j,k, value, count=0;
    scanf("%d %d %d", &i, &j, &k);
    int term=j-i+1;
    float b[term];
    for(int s=0,m=i; m<=j; m++){
        value =abs(m-reverse(m));
        if(value%k==0){
            count++;
        }
    }

        printf("%d", count);
}
