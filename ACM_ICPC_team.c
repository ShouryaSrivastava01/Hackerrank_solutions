#include<stdio.h>
#include<string.h>
int main(){
    int n, m, t=0, max=0, cnt=0;  //t=teams, max-> maximum subject known
    scanf("%d %d", &n, &m);
    char a[n][m];  //2D array of n rows and m columns
    for(int i=0; i<n; i++){
        scanf("%s", a[i]);
    }
    for(int i=0; i<(n-1); i++){     // team formation (1,2) (1,3)....
        for(int  j=i+1; j<n; j++){
            cnt =0;
            for(int k=0; k<m; k++){ // traversal of cells Of @d array
                if(a[i][k]=='1' || a[j][k]=='1'){
                    cnt++;
                }                
            }
            // to count number of teams knowing maximum subjects
            if(max==cnt){
                t++;
            }
            else if(max<cnt){
                max=cnt;
                t=1;
            }
        }
        
    }
    printf("%d", max);
    printf("%d", t);
}