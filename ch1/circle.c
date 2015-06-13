#include <stdio.h>                                                                     
//#include <math.h>
int main()                                                                                    
{
       float radius, area;// we want a radius and area                              
       
       printf("Radius = ?\n");// output a simple prompt.              
       scanf("%f", &radius);// let user input "radius value", as float.                                   
       area = PI * radius * radius;// calc area.                
       printf("Area = %f\n", area);// output result. 
}