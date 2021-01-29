#include<stdio.h>
  
int main(){
    int n, min=1001, maximum=0, cnt=0, k=1, max=0;
    scanf("%d", &n);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
        
        if(arr[i]<min)
            min=arr[i];
    }
    maximum=arr[0];
    for (int i=1; i<n; i++) {
        if(arr[i]>maximum){
            maximum=arr[i];
            max=i;
        }
            
    }
    while(arr[max]!=0){
        cnt=0;
        for(int j=0; j<n; j++){
            if(arr[j]>=min){
                arr[j]=arr[j]-min;
                cnt++;
                
            }
        }
        printf("%d\n", cnt);
        min=1001;
        for (int i=0; i<n; i++) {
        if(arr[i]<=min && arr[i]!=0)
            min=arr[i];
       }
  
    }
}
