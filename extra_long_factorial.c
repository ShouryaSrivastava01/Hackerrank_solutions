#include<stdio.h>
int main(){
    int n, m, dig, c, size=1, arr[1000]={0};
    arr[0]=1;
    scanf("%d", &n);
    for(int i=2; i<=n; i++){
        for(int j=0; j<size; j++){
            m= i*arr[j]+ c;
            dig = m%10;
            arr[j]= dig;
            c= m/10;
        }
        while(c){
            dig= c%10;
            arr[size]= dig;
            size++;
            c= c/10;
        }
    }
   for(int i = size-1; i>=0; i--){
        printf("%d", arr[i]);
    }
}
