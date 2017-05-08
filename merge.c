#include<stdio.h>
#include<stdlib.h> // contains rand() function
#define MAX 50

void mergeSort(int arr[],int low,int mid,int high);
int partition(int arr[],int low,int high);

int count_merge=0;

int call_merge(){
    
    int p = rand()%1000;
    printf("%d\n", p);
    int merge[p],i,n,val;
    int a;
    printf("Before merge sorting elements are: \n");
    for(i=0; i<p; i++){
        a = rand()%1000;
        printf("%d\n", a);
        merge[i] = a;
    }
    val = partition(merge,0,p-1);

    printf("\nCount: %d\n",val);

    printf("After merge sorting elements are: \n");
    for(i=0;i<p;i++){
         printf("%d, ",merge[i]);
    }
   
   return 0;
}

int partition(int arr[],int low,int high){

    int mid;

    if(low<high){
         count_merge++;
         mid=(low+high)/2;
         partition(arr,low,mid);
         partition(arr,mid+1,high);
         mergeSort(arr,low,mid,high);
    }
}

void mergeSort(int arr[],int low,int mid,int high){

    int i,m,k,l,temp[high+1];

    l=low;
    i=low;
    m=mid+1;

    while((l<=mid)&&(m<=high)){

         if(arr[l]<=arr[m]){
             count_merge++;
             temp[i]=arr[l];
             l++;
         }
         else{
             temp[i]=arr[m];
             m++;
         }
         i++;
    }

    if(l>mid){
         count_merge++;
         for(k=m;k<=high;k++){
             temp[i]=arr[k];
             i++;
         }
    }
    else{
         for(k=l;k<=mid;k++){
             temp[i]=arr[k];
             i++;
         }
    }
   
    for(k=low;k<=high;k++){
         arr[k]=temp[k];
    }
}

