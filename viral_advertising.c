#include "stdio.h"
int main(){
    int n, a=5, sum=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        a=a/2;
        sum+=a;
        a=a*3;
    }
    printf("%d", sum);
}
