//To find the area nd perimeter of a circle


#include <stdio.h>
void main()
{
    int r;
    printf("\nEnter Radius: ");
    scanf("%d",&r);

    int area= 3.14*r*r;
    printf("\nArea of the Circle is: %.2d");

    int perimeter= 2*3.14*r;
    printf("\nPerimeter of the Circle is: %.2d");
}