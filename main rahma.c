#include <stdio.h>
#include <stdlib.h>


int sum (int array[]){
int sum1 = 0;
int number= 0;
for(number<0 ; number<20; number++)
{
    sum1+=array[number];
    printf("\n %d", sum1);
    return sum;}

}

int main( )
{
   int number=0;
    int array[20];
    int r;

printf("please enter the number %d \n");
    for(number<0 ; number<20; number++){

        scanf("%d",&array[number]);}

   for(number=0 ; number<20; number++){

    for (int r=number+1 ; r<20; r++){
        if (array[number]==array[r]){
                array[r]='\o';}}
for (int r=number+1 ; r<20; r++){
                printf("%d \t \n the sum =", array[number]);}

   }
 }
