/*
 Write a program to take marks of 5 subjects from the user. Assume marks are given
 out of 100 and passing marks is 33. Now display whether the candidate passed the
 examination or failed
*/
#include <stdio.h>
int main()
{
  float subject_marks1, subject_marks2, subject_marks3, subject_marks4, subject_marks5;
  float total_marks, marks_average, marks_pass;

  printf("A program to display whether a student has passed an exam or failed.....\n");
  printf("Please enter marks obtained in all the 5 subjects\n");
  scanf("%f%f%f%f%f", &subject_marks1, &subject_marks2, &subject_marks3, &subject_marks4, &subject_marks5);
  total_marks = (subject_marks1 + subject_marks2 + subject_marks3 + subject_marks4 + subject_marks5);
  marks_average = (total_marks / 500) * 100;
  marks_pass = 33;
  printf("Your total marks are: %f\n", total_marks);
  printf("Average marks of your 5 subjects is: %f\n", marks_average);

  if (marks_average > marks_pass)
  {
    printf("You have passed. Welldone on your fine achievement");
  }
  else
  {
    printf("You have failed. Study hard");
  }
  return 0;
}