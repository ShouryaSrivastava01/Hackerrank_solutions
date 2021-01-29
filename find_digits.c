#include "stdio.h"
int main(){
    int t;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        long int n, d, count=0;
        scanf("%ld", &n);
        int num=n;
        while(n!=0){
            d=n%10;
            if(d!=0){
                if(num%d==0){
                    count ++;
                 }
            
            }
            n=n/10;
        }
        printf("%ld\n", count);
    }
}
