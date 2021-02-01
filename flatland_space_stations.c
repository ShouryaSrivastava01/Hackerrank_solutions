#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,m,min=0,max=0;
    scanf("%d%d",&n,&m);
    int c[m];
    for(int i=0;i<m;i++){
    scanf("%d",&c[i]);
    }
    if(n==m)
    printf("0");
    else
    {
    for(int i=0;i<n;i++)
    {
        min=n;
        for(int j=0;j<m;j++)
        {
            if(abs(i-c[j])<min){
            min=abs(i-c[j]);
            }
        }
        printf("%d ", min);
        if(min>=max){
            max=min;
        }
        
       
    }
    printf("\n%d ", max);
    //printf("%d",max);
    }//min stores the nearest space station of a city and max stores the maximum distance to the nearest space station
}