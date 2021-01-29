#include<stdio.h>
int main(){
    int t, n,k, count;
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        count=0;
        scanf("%d  %d", &n, &k);
        int arr[n];
        
        for(int j=0; j<n; j++){
        scanf("%d", &arr[j]);
            if(arr[j]<=0){
                count++;
            }
        }
        
       if(count<k){
           printf("YES\n");
       }
       else{
            printf("NO\n");
       }
       count=0;
       n=0;
       k=0;
    }
    
      
          
    
}
