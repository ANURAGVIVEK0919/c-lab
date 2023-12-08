#include <stdio.h>
 
int main ()
{

 int i;
 float quiz[4] , midterm[2], final , witotal , avgquiz , avgmidterm;
 
 printf( "quiz scores");
 for(i=o; i<4; i++);
 {
  printf("enter score of quiz %d ,i+1);
  scanf("%f" , &quiz[i];
 }
 
  printf( "enter midtrem scores");
  
 for(i=o; i<2; i++);
 {
  printf("enter score of midterm %d ,i+1);
  scanf("%f" , &midterm[i];
 }  
 
  printf(" enter  final exam score:");
  scanf("%f" , &final);
  avgquiz = ( quiz[0] + quiz[1] + quiz[2] + quiz[3])/4
  avgmidterm= (midterm[0] + midterm[1])/2;
  
  witotal = (0.3 * avgquiz + 0.4 * avgmidterm + 0.3 * final);
   printf( "results");
   
   printf( "avgquiz = .2f" , avgquiz);
   printf("avgmidterm = .2f" , avgmidterm);
   printf("final = 0.2f" , final);
   printf("witotal = % 0.2f" , witotal); 
}

