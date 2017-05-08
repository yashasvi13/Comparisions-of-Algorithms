 #include<stdio.h>
#include<stdlib.h> // contains rand() function

int call_selection(){

  int p = rand()%1000;
  int i,j,s,temp,a[p],count=0;

    for(i=0; i<p; i++){;
        a[i] = rand()%1000;
    }

  for(i=0;i<p;i++){
      for(j=i+1;j<p;j++){
           if(a[i]>a[j]){
              count++;
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
           }
      }
  }

printf("\nCount: %d\n",count);

  printf("After sorting is: ");
  for(i=0;i<p;i++)
      printf(" %d",a[i]);

  return 0;
}