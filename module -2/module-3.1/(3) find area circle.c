#include<stdio.h>
#include<conio.h>
int main()
{
    float radius, length, breadth, base, height;
    
    printf("Enter radius: ");
    scanf("%f", &radius);
    printf("Area of circle is %f\n", 3.14 * radius * radius);

    printf("\nEnter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter breadth of rectangle: ");
    scanf("%f", &breadth);
    printf("Area of rectangle is %f", length * breadth);

    printf("\nEnter base of triangle: ");
    scanf("%f", &base);
    printf("Enter height of triangle: ");
    scanf("%f", &height);
    printf("Area of triangle is %f", 0.5 * base * height);
    
    getch();
    return 0;
}

