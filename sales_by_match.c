#include<stdio.h>
int main(){
    int size,i,p=0;
    scanf("%d",&size);
    int arr[size];
    int freq[101]={0};
    for(i=0;i<size;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]+=1;      
    }
    for(i=1;i<101;i++){
        p+= freq[i]/2;
    }
    printf("%d",p);
}
