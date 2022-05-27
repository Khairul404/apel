#include<stdio.h>
int main()
{
   int roll = 190624;
   char name[40] = "Khairul Basar ";
   FILE *fp;
   fp = fopen("Test.txt", "w");
   fprintf(fp, "Roll: %d\n", roll);
   fprintf(fp, "Name: %s\n", name);
   return 0;

}