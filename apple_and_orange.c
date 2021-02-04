#include "stdio.h"
#include "stdlib.h"
int main(){
int s, t, m, n, a, b;
scanf("%d  %d", &s, &t);
scanf("%d  %d", &a, &b);
scanf("%d  %d", &m, &n);
int apple[m], orange[n], d1[m], d2[n], c1=0, c2=0;
for(int i=0; i<m; i++){
    scanf("%d", &apple[i]);
    d1[i]=(a+apple[i]);
    if(d1[i]>=s && d1[i]<=t){
        c1++;
    }
}
for(int j=0; j<n;j++){
    scanf("%d", &orange[j]);
    d2[j]=(b+orange[j]);
    if(d2[j]>=s && d2[j]<=t){
        c2++;
    }
}

printf("%d\n", c1);
printf("%d\n", c2);
}
