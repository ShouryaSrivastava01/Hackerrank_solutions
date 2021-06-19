#include <stdio.h>


//  function to sort array from the input index
int sortFunc(int *array, int size){
    int temp;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(array[i]>array[j]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
}

int mergeSort(int array1[], int n, int array2[], int m, int *array){
        int array3[100], i, j, k = 0;

        i = 0;
        j = 0;
        while (i < n && j < m) 
        {

            if (array1[i] < array2[j]) 

            {

                array[k] = array1[i];

                i++;

            }
            else 
            {

                array[k] = array2[j];

                j++;

            }

            k++;

        }

 

        if (i >= m) 

        {

            while (j < n) 

            {

                array[k] = array2[j];

                j++;

                k++;

            }

        }

 

        if (j >= n) 

        {

            while (i < m)

            {

                array[k] = array1[i];

                i++;

                k++;

            }

        }
}
int main(){
    int n,m,j=0,p=0,num,ranking;
    scanf("%d", &n);
    int rank[n],a[n];
    for (int i=0; i<n; i++)
    {
        scanf("%d", &rank[i]);
        if(rank[i]!=p){
        a[j]=rank[i];
        p=rank[i];
        j++;
        }
        num=j;
    }

    scanf("%d", &m);
    int play[m], array[j+m];

    for (int i=0; i<m; i++)
    {
        scanf("%d", &play[i]); 
    }

    mergeSort(play, m, a,j, array);
    sortFunc(array, j+m);
   for(int i=j+m-1; i>=0; i--){
       printf("%d  ", array[i]);
   }
}
