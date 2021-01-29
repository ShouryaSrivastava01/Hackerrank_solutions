#include "stdio.h"
int main(){
    int n=0, k=0, q=0, t,i;  //n=terms, k=rotations, q= queries
    scanf("%d %d %d", &n, &k, &q);
    int a[n], rev[n], p=(n+k)%n;
    
    //taking input for array
    
    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    // rotating array k times
    for(i=0; i<n; i++){
        if(p==n){
            p=0;
        }
        rev[p]=a[i];
        p++;
    }
    
    for (i=0; i<q; i++) {
        scanf("%d", &t);
        printf("%d\n", rev[t]);
    }
    
}
