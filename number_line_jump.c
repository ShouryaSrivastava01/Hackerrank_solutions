#include "stdio.h"
#include "stdlib.h"
int main(){
    int x1, v1, x2, v2, i=1, p=0;
    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);
    while(i<1000000){
        if (x1>x2 && v1>v2||x2>x1 && v2>v1) {
            break;
        }
        else if((x1>x2 || x2>x1) && abs(v1-v2)==0){
            break;
        }
        x1+=v1;
        x2+=v2;
        if (x1==x2){
            p=1;
        break;}
        i++;
    }
    if (p==1) 
        printf("YES");
    else
        printf("NO");
    
}
