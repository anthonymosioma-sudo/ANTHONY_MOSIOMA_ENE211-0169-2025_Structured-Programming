#include <stdio.h>

int main(void) {
    double Surface_area;
    const double PI = 3.142;
    const double Constant = (4.000);
    double r;

    printf("Please enter sphere radius");
    scanf("%lf",&r);

    Surface_area = Constant*PI*r*r;

    printf("The surface area of your sphere is %lf",Surface_area);
    return 0;
}
