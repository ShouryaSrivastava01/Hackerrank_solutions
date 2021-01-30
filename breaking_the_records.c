#include "stdio.h"
int main(){
    int n, cmax=0, cmin=0;
    scanf("%d", &n);
    int score[n];
    for(int i=0; i<n; i++){
        scanf("%d", &score[i]);
    }
    int max=score[0];
    int min=score[0];
    for (int i=1; i<n; i++) {
        if(score[i]>max){
            max=score[i];
            cmax++;
        }
        else if(score[i]<min){
            min=score[i];
            cmin++;
     }
    }
    printf("%d %d", cmax, cmin);
    
}
