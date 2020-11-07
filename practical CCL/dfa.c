/*************************************************************************

Title:Implimantation of Deterministic Automata


***********************************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main (int argc, char **argv)
{
 
 int a, b, s, x, i, len, Q[100][100], initial, final;
 char str[100], c[2];
 
 printf("\nEnter total no. of inputs: ");
 scanf("%d", &i);
 
 printf("\nEnter total no. of states: ");
 scanf("%d", &s);
 
 printf("\nEnter initial state for DFA: ");
 scanf("%d", &initial);
 
 printf("\nEnter final state for DFA: ");
 scanf("%d", &final);
 
 printf("\n\n Initial State: {Q%d}", initial);
 printf("\n Final State: {Q%d}", final);
 printf("\n Set of Finite States: {");
 for (a = 0; a < s; a++)
 {
  printf("Q%d", a);
  if(a <  s-1) printf(", ");
 }
 printf("}");
 printf("\n Set of Inputs : {"); 
 for(a = 0; a < i; a++)
 {
  printf("%d ",a);
  if(a < i-1) printf(", ");
 }
 printf("}\n\n");
 printf(" Enter the transition table INPUT:\n");
 printf("Transition-> state");
 for(a = 0; a < s; a++)
 {
  for(b = 0; b < i; b++)
  {
   printf("\n Q%d, %d    ->  ", a, b);
   scanf("%d", &Q[a][b]); 
  }
 }
 do
 {

  printf("\nEnter the string to check: ");
  scanf("%s", str);
  len = strlen(str);
 
  c[1] = '\0';
  x = initial;
  printf("\n -> Q0");
  for(a = 0; a < len; a++)
  { 
   c[0] = str[a];
   x = Q[x][atoi(c)];
   printf(" --%d--> Q%d", atoi(c), x);
  }
  if(x == final) printf("\n\nString Accepted for this grammar\n\n");
  else printf("\n\nString Not Accepted\n\n");
  printf("Do you want to check another string [Yes = 1 / No = 0]: ");
  scanf("%d", &a);
 } while(a); 
 return 0;

}

/*****************************output********************************************
PS F:\Shreyas\College Academic\CC> gcc dfa.c
PS F:\Shreyas\College Academic\CC> ./a.exe

Enter total no. of inputs: 2

Enter total no. of states: 3

Enter initial state for DFA: 0

Enter final state for DFA: 2


 Initial State: {Q0}
 Final State: {Q2}
 Set of Finite States: {Q0, Q1, Q2}
 Set of Inputs : {0 , 1 }

 Enter the transition table INPUT:
Transition-> state
 Q0, 0    ->  1

 Q0, 1    ->  2

 Q1, 0    ->  1

 Q1, 1    ->  2

 Q2, 0    ->  1

 Q2, 1    ->  2

Enter the string to check: 001011

 -> Q0 --0--> Q1 --0--> Q1 --1--> Q2 --0--> Q1 --1--> Q2 --1--> Q2

String Accepted for this grammar

Do you want to check another string [Yes = 1 / No = 0]: 1

Enter the string to check: 0010

 -> Q0 --0--> Q1 --0--> Q1 --1--> Q2 --0--> Q1

String Not Accepted

Do you want to check another string [Yes = 1 / No = 0]: 0
PS F:\Shreyas\College Academic\CC>

***************************************************************************/
