#include<stdio.h>
int main()
{
    char name[40] = "Khairul Basar";
    int roll = 190624;
    FILE *fp;
    fp = fopen("Test1.txt", "w");
    fprintf(fp, "Name = %s\n", name);
    fprintf(fp, "Roll = %d\n", roll);
    fclose(fp);
    fp = fopen("Test1.txt", "r");
    fgets(name, 40, fp);
    fscanf(fp, "%d", &roll);
    printf("Name = %s", name);
    printf("Roll = %d", roll);
    return 0;


}