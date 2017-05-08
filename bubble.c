#include<stdlib.h> // contains rand() function
#include<stdio.h>
int call_bubble(){
  int p = rand()%1000;
  int i,j,s,temp,a[p],count=0;

    for(i=0; i<p; i++){;
        a[i] = rand()%1000;
    }

  //Bubble sorting algorithm
  for(i=p-2;i>=0;i--){
      for(j=0;j<=i;j++){
           if(a[j]>a[j+1]){
           	  count++;
              temp=a[j];
              a[j]=a[j+1];
              a[j+1]=temp;
           }
      }
  }

  printf("\nCount: %d\n",count);

  printf("After sorting: ");
  for(i=0;i<p;i++)
      printf(" %d",a[i]);

  return 0;
}