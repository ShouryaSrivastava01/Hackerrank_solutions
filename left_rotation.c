#include "stdio.h"
int main(){
    int n, d;
    scanf("%d %d", &n, &d);
    int a[n], b[n], p=d%n;
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    for(int i=0; i<n; i++){
        if(p==n){
            p=0;
        }
        b[i]=a[p];
        printf("%d ", b[i]);
        p++;
    }
    
}
