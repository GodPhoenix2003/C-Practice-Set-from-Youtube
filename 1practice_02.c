# include<math.h>
# include<stdio.h>

int main(){
    float r, h, area, pi=3.1416;
    printf("Enter the radius of the circle/cylinder(in m): ");
    scanf("%f", &r);
    area = pi * pow(r, 2);
    printf("Area of the circle(in m^2): %f\n", area);
    printf("Enter the height of the cylinder(in m): ");
    scanf("%f", &h);
    printf("Volume of the cylinder(in m^3): %f", area*h);
    return 0;
}
