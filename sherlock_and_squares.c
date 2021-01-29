#include "stdio.h"
#include "math.h"
int main(){
    int n;
    scanf("%d", &n);
    for (int i=0; i<n; i++) {
        int a, b, x=0, cnt =0, y=0;
        scanf("%d %d", &a, &b);
        x=sqrt(a);
        while(x<=sqrt(b)){
            y=x*x;
            if(y>=a && y<=b ){
                cnt++;
            }
            x++;
        }
    printf("%d\n", cnt);
    }
}
