#include <stdio.h>
#include <stdlib.h>

int main(){
    char* s = (char *)malloc(100 * sizeof(char));
    scanf("%s",s);
    int ls = strlen(s); //ls: size of s string
    char* t = (char *)malloc(100 * sizeof(char));
    scanf("%s",t);
    int lt = strlen(t); // lt: size of t string
    int k;
    scanf("%d",&k);
    
    int size = 0;
    
    // to check similar character from start 
    while (s[size] == t[size] && size < ls && size < lt) {
        size++;
    }
    
    int diff = k - ls - lt + 2*size;
    if (diff < 0) {
        printf("No\n");
    } else if (k >= ls + lt) { // deletion can be performed on an empty string
        printf("Yes\n");
    } else if (diff % 2 == 0) { //after minimum step, next possible step is minimum+2..
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    return 0;
}
