#include<stdio.h>
int main()
{
    int c,r,Row;
    printf("Enter the Row:");
    scanf("%d",&Row);
    for(c=1;c<=Row;c++){
        for(r=1;r<=c;r++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
