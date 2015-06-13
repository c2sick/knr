#include <stdio.h>

#define PI 3.14159

float process(float radius);                /* function prototype */

int main()
{
       float radius, area;                                /* variable declaration */
       int count;                                                /* variable declaration */
       
       printf("To STOP, enter 0 for the radius\n");
       printf("\nRadius = ? ");
       scanf("%f", &radius);
       
      for (count = 1; radius != 0; ++count)        
       {
       
            if (radius < 0 )
               {
                   area = 0; 
               }
            
            else
               {
                   area = process(radius);
               }
            
            printf("Area = %f\n", area);
            printf("\nRadius = ? ");
            scanf("%f", &radius);
       }
}

float process(float r)                                 /* function defintion */

{
    float a;                                                /* local variable declaration */
       
    a = PI * r * r;
    return(a);
}
 