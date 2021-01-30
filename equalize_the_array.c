#include<stdio.h>
int main(){
    int n, max;
    scanf("%d", &n);
    int a[n], fr[101]={0};
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        fr[a[i]]++;
    }
    max=fr[0];
    for(int i=1; i<101; i++){
        if(fr[i]>max){
            max=fr[i];
        }
     
    }
    printf("%d", n-max);
}