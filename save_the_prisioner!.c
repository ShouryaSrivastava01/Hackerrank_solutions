#include "stdio.h"
int main(){
    int t;
    scanf("%d", &t);
    long long int n, m, s, p, result;
    for(int i=0; i<t; i++){
    scanf("%lld %lld %lld", &n, &m, &s);
    p=m-(n-s+1);
    if(p>=0){
        result=p%n;
        if(result==0){
            printf("%lld\n", n);
        }
        else{
            printf("%lld\n", result);
        }
    }
    else{
        printf("%lld\n", m+s-1);
        }
    }
}
