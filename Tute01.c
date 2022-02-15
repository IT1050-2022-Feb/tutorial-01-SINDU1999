/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
   int sum,subject_one_mark,subject_two_mark;//declare variables
   float average;//declare variables
   printf("Enter the SUBJECT ONE MARK :");//display massege
   scanf("%d",&subject_one_mark);//get subject one mark
   printf("Enter the SUBJECT TWO MARK :");//display massege
   scanf("%d",&subject_two_mark);//get subject two mark
   
   sum=subject_one_mark+subject_two_mark;//get total of two marks
   average=sum/2;//get average
   
   printf("The average is : %.2f",average);//print average
   return 0;
}

