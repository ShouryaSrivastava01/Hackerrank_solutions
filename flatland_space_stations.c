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

    if(n==m) {// if every city as a space station
        printf("0");
    }
    else
    {
    for(int i=0;i<n;i++)
    {
        min=n;     //initialize min as number of cities to find nearest space station
        for(int j=0;j<m;j++)
        {
            if(abs(i-c[j])<min){
            min=abs(i-c[j]);
            }
        }
        // max distance among all the cities
        if(min>=max){
            max=min;
        }
        
       
    }
    printf("%d ", max);
    }
}