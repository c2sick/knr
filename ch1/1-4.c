#include <stdio.h> 

main()
{//f==fahrenheit, c==celsius
	float f, c; 
	int start, stop, move;
	start = 0;
	move = 20;
	stop = 100;

	/*f = start; //start at f.*/
	c = start; 

	while (f <= stop) 
	{
		/*c = (5 / 9) * (f- 32);	//f to c, do vise-versa. */
		f = c * (9/5) + 32; 
		/*printf("%d\t%d\n", f, c);
		f = f + move;*/
		printf("%.0f\t %.1f\n", c, f);
		c += move;
	}
}