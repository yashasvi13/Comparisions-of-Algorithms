#include<stdio.h>
#include<stdlib.h> // contains rand() function

int call_insertion(){

  int p = rand()%1000;
  int i,j,s,temp,a[p],count=0;

    for(i=0; i<p; i++){;
        a[i] = rand()%1000;
    }

  for(i=1;i<p;i++){
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0)){
        count++;
      a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
  }

  printf("\nCount: %d\n",count);
  printf("After sorting: ");
  for(i=0;i<p;i++)
      printf(" %d",a[i]);

  return 0;
}