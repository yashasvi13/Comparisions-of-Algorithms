#include<stdio.h>
#include<stdlib.h> // contains rand() function
#include "bubble.h"
#include "insertion.h"
#include "merge.h"
#include "quick.h"
#include "selection.h"

int main(){
   
   int sort_type;
   //sort_type = atoi(argv[1]);
   //printf("%d\n", sort_type);
   printf("\nBubble sort (1)");
   printf("\nmerge sort (2)");
   printf("\nselection sort (3)");
   printf("\nquick sort (4)");
   printf("\ninsertion sort (5)");

   scanf("%d", &sort_type);
   if (sort_type == 1){
   	call_bubble();
   }
   else if (sort_type == 2){
    call_merge();
   }
   else if (sort_type == 3){
   	call_selection();
   }
   else if (sort_type == 4){
   	call_quick();
   }
   else if (sort_type == 5){
   	call_insertion();
   }
   else{
   	printf("All\n");
   	call_bubble();
   	call_merge();
   	call_quick();
   	call_selection();
   	call_insertion();
   }

}