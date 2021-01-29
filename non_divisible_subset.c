#include "stdio.h"
int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    long int a, b[k];
    for(int i=0; i<k; i++){
        b[i]=0;
    }
    for(int i=0; i<n; i++){
        scanf("%ld", &a);
        b[a%k]+=1;
    }
    int sum=0;
    for(int i=0; i<=k/2; i++){
        if(i==0){
            if(b[i]>0)
            sum++;
        }
        else if(i==(k-i)){
            if(b[i]>0)
            sum++;
        }
        else{
            if(b[i]>=b[k-i])
                sum+=b[i];
            else 
                sum+=b[k-i];
        }
        
    }
    
    printf("%d", sum);
    return 0;
}
