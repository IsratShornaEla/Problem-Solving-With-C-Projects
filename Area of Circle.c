#include <stdio.h>
main()
{
    float radius, area;
    printf("Enter radius of the circle (in cm):");
    scanf("%f", &radius);
    area= (22/7)*(radius*radius);
    printf("Area of the circle is: %f square cm", area);
}
