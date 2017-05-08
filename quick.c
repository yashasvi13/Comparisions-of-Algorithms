 #include<stdio.h>
#include<stdlib.h> // contains rand() function

int quicksort(int [1000],int,int);

int call_quick(){

  int p = rand()%1000;
  int i,j,s,temp,a[p],size, val;

    for(i=0; i<p; i++){;
        a[i] = rand()%1000;
    }

  val = quicksort(a,0,p-1);
 
  printf("\nCount: %d\n",val);

  printf("Sorted elements: ");
  for(i=0;i<p;i++)
    printf(" %d",a[i]);

  

  return 0;
}
//global
int count=0;

int quicksort(int x[1000],int first,int last){
    int pivot,j,temp,i;
     if(first<last){
         pivot=first;
         i=first;
         j=last;

         while(i<j){
             while(x[i]<=x[pivot]&&i<last)
                 i++;
             while(x[j]>x[pivot])
                 j--;
             if(i<j){
                 count++; // checking the count
                 temp=x[i];
                  x[i]=x[j];
                  x[j]=temp;
             }
         }

         temp=x[pivot];
         x[pivot]=x[j];
         x[j]=temp;
         quicksort(x,first,j-1);
         quicksort(x,j+1,last);

    }
    return count;
}

