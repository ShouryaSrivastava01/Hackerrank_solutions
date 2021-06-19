#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


// function to find out grid dimensions
void minimum(int length, int *minr, int *minc){   //minr-> minimum required row   minc-> minimum required column
  int r,c, area=0;    // r-> row  c-> column
    r=floor(sqrt(length));
   c=ceil(sqrt(length));
   area=r*c;
  while(c>=floor(sqrt(length))){
        r=floor(sqrt(length));
      while(r<=ceil(sqrt(length))){
        if(c>=r && r*c>=length && r*c <=area){     //row* column >= length
        *minr=r;
        *minc=c;
        area=r*c;
        r++;
        }
        else if(r*c<length){
          area=++r*c;
        }
        else{
        r++;
        }
      }
    c--;
  }
}

int main() {
    char str[100]="";
    fgets(str,100, stdin);  
    int j=0, l, row, col;
    l=strlen(str);
    // function call to find minimum dimension for the grid
    minimum(l, &row, &col );
   
    for(int i=0;i<col;i++){
        j=i;
     while(j<l){
        printf("%c", str[j]);
        j+=col;          
        }
        printf(" ");
    }
    return 0;
}