#include<stdio.h>
int main()
{
    float display,height,width,depth;
    printf("Enter Height = ");
    scanf("%f",&height);
    printf("Enter Width = ");
    scanf("%f",&width);
    printf("Enter Depth = ");
    scanf("%f",&depth);
    display = height*width*depth;
    printf("Display the volume of a CUBE = %f\n",display);
}
