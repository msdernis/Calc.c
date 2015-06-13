#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>

using namespace std;

int process(char *inputline) {

double num1, num2;
char func;
float solved;
 sscanf(inputline, "%lf %c %lf", &num1, &func, &num2, &func2);


 if (func == '+') {
  solved = num1 + num2;
  printf ("%g", solved);
  printf ("\n");
 }

 else if (func == '-') {
  solved = num1 - num2;
  printf ("%g", solved);
  printf ("\n");
 }

 else if (func == '*') {
  solved = num1 * num2;
  printf ("%g", solved);
  printf ("\n");
 }
 else if (func == '/') {
  solved = num1 / num2;
  printf ("%g", solved);
  printf ("\n");
 }
 else if (func == '^') {
  //solved = (num1 * num1) * (num2 - 1);
  printf ("%lg",pow(num1, num2));
  printf ("\n");
 }

 else {
    printf ("What you entered is either not on equation or not yet supported");
    printf ("\n");
 }

}

int main() {

 char inputline [512];
  printf("->");
 while(fgets(inputline, sizeof(inputline)/sizeof(char), stdin)) {

  if (strncmp(inputline, "quit", sizeof("quit")/sizeof (char)-1) == 0) {
   return 0;
   }
  process(inputline);
  printf("->");
 }

}
