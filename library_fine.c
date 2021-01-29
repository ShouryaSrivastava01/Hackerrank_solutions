#include "stdio.h"
int main(){
    int fine =0, d1, d2, m1, m2, y1, y2;
    scanf("%d %d %d", &d1, &m1, &y1);
    scanf("%d %d %d", &d2, &m2, &y2);
    if(y2>y1 || y2==y1 && m2>m1 || y2==y1 && m2==m1 && d2>d1){
        fine =0;
    }
    else if(m1==m2 && y1==y2){
        fine = (d1-d2)*15;
    }
    else if(m1!=m2 && y1==y2){
        fine =(m1-m2)*500;
    }
    else{
        fine =10000;
    }
    printf("%d", fine);
}
