#include "stdio.h"
int main(){
    int n, k, i=0, e=100;
    scanf("%d  %d", &n, &k);
    int c[n];
    for(int j=0; j<n; j++){
        scanf("%d", &c[j]);
    }
    while((i+k)%n!=0){
        if(c[(i+k)%n]==0){
            e=e-1;
            
        }
        else if(c[(i+k)%n]==1){
            e=e-3;
        }
        i=(i+k)%n;
    };
    
    if(c[0]==0){
        e=e-1;
    }
    else{
        e=e-3;
    }
    
    printf("%d", e);
}
