#include <stdio.h>
int main(){
    long long int b, w, bc, wc, z;
    int t;                              //t-> number of test cases
    scanf("%d", &t);
    for(int i=0; i<t; i++){
        
        long long int sum=0;
        scanf("%lld %lld", &b, &w);
        scanf("%lld %lld %lld", &bc, &wc, &z);
        if(bc>wc+z){
            sum=b*(wc+z)+ w*(wc);
        }
        else if(wc>bc+z){
            sum=b*(bc)+ w*(bc+z);
        }
        else{
            sum=b*bc+ w*wc;
        }
        printf("%lld\n", sum);
        
    }
}