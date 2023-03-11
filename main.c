#include <stdio.h>
#include <stdlib.h>

//Write a program that checks the grades of students based on the mark entered by user

int main(void) 
{
  int grade;

  printf("Please enter your mark:\t");
  scanf("%d", &grade);

  if (grade > 100)
    printf("Wrong input\n");

  else if (grade >= 80)
    printf("Your grade is A\n");

  else if (grade >= 70)
    printf("Your grade is B\n");

  else if (grade >= 60)
    printf("Your grade is C\n");

  else if (grade >= 50)
    printf("Your grade is D\n");

  else
    printf("Your grade is E, please do better\n");

  printf("\nEnd of program\n");
  sleep(5);
  system("clear");
  printf("Welcome User");
  
  return 0;
}