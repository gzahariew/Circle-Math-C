#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nHow much is the radius of the circle?");
    scanf("%lf", &radius);

    circumference = 2*PI*radius;
    area = PI * radius*radius;

    printf("\nYour circle circumference is %lf", circumference);
    printf("\nAnd the area is %lf\n", area);

    return 0;
}