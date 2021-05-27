#include "stdio.h"
int main(){
    int n,m,j=0,x,p=0, cnt=0, num=0;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        
    }
    for(int i=0; i<m; i++){
        scanf("%d", &b[i]);
        
    }
    x=a[n-1];
    while (x<=b[0]) {
        
        for (int i=0; i<n; i++) {
            if (x%a[i]==0 ) {
                p=1;
            }
            else {
                p=0;
                break;
            }
        }
    if (p==1) {
        
    for (int i=0; i<m; i++) {
            if (b[i]%x==0 ) {
                cnt=1;
            }
            else {
                cnt=0;
                break;
            }
        }
         if (cnt==1) {
     num++;
    }
    }
   
    x++;
   
    }
    printf("%d", num);
    
}