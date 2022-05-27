#include<stdio.h>
int main()
{
    char name[25];
    int roll;
    FILE *fp;
    fp = fopen("Input.txt", "r");
    fgets(name, 25, fp);
    fscanf(fp, "%d", &roll);
    printf("Name = %s", name);
    printf("Roll = %d", roll);
    return 0;

}