#include "stdio.h"
int main(){
    int n,p=1;
    scanf("%d", &n);
    int a[n], y[n];
    for (int i=1; i<=n; i++) {
        scanf("%d", &a[i]);
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(a[j]==i){
                while(a[p]!=j){
                    p++;
                }
                printf("%d\n", p);
                p=1;
            }
            
           
        }
    }
    
}
