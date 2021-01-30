#include<stdio.h>
int main(){
    int n, l=0, pos=0,cnt=0;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
       scanf("%d", &a[i]);

    }
    while(pos!=(n-1)){
        if(a[pos+2]==1 || pos==n-2){
            cnt++;
            pos++;
        }
        else{
            cnt++;
            pos+=2;
        }
    }
    printf("%d", cnt);
}