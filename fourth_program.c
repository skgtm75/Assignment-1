#include<stdio.h>

int main(int argc, char const *argv[])
{
    //  WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format
    // Expected output format – “Area of circle is A having the radius R”. Replace A with area & R with radius.
    
    float radius, area ; 
    printf ("Enter a radius of the circle: ");
    scanf ("%f",&radius );
    area=3.14159 * radius * radius;
    printf("\"Area of circle is %.2f having the radius %.3f\"", area, radius);
    return 0;
}
