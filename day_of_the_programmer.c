#include "stdio.h"
int main(){
    int y;
    scanf("%d", &y);
    int date;
    if(y<1918){
        if (y%4==0) {
            date= 256-244;
        }
        else  {
            date = 256-243;
        }
    }
    else if (y==1918){
        date = 26;
    }
    else{
        if(y%400==0 || (y%4==0 && y%100 !=0)){
            date =256-244;
        }
        else {
            date = 256-243;
        }
    }
    printf("%d.09.%d", date, y);
}
