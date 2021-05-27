#include <stdio.h>
#include <stdlib.h>


int main()
{
    // forming all 8 possible magic square matrice for 3*3
    int arr0[9] =   {4,9,2,3,5,7,8,1,6};
    int arr1[9] =   {2,7,6,9,5,1,4,3,8};
    int arr2[9] =   {6,1,8,7,5,3,2,9,4};
    int arr3[9] =   {2,9,4,7,5,3,6,1,8};
    int arr4[9] =   {6,7,2,1,5,9,8,3,4};
    int arr5[9] =   {8,1,6,3,5,7,4,9,2};
    int arr6[9] =   {8,3,4,1,5,9,6,7,2};
    int arr7[9] =   {4,3,8,9,5,1,2,7,6};
    int s[3][3],ans[8] = {0},index=0;   //ans array stores cost for all 8 transformation
    for (int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            scanf("%d", &s[i][j]);
            int k = s[i][j];
            // printf("%d\n", index);
            ans[0] += abs(k - arr0[index]);  // index=0 1 2 3 4 5 6 7 8 
            ans[1] += abs(k - arr1[index]);
            ans[2] += abs(k - arr2[index]);
            ans[3] += abs(k - arr3[index]);
            ans[4] += abs(k - arr4[index]);
            ans[5] += abs(k - arr5[index]);
            ans[6] += abs(k - arr7[index]);
            ans[7] += abs(k - arr6[index]);
            
            index++;
        }
    }
    
    int min =ans[0];
    // for finding minimum of all cost
    for(int i=1;i<8;i++){
        if(ans[i]<min){
            min = ans[i];
        }
    }
    printf("%d", min);
}