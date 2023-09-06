/*

Basic use of arrays *for me*

*/

#include <stdio.h>

int main()
{
	
	int x1 = 33;
	
	int * p_x1;
	p_x1 = &x1;
	
	int ** pp_x1;
	pp_x1 = &p_x1;
	
	printf("x1   = %d \n", x1);
	printf("p_x1 = %p \n",p_x1);
	printf("p_x1 points value: %d (of x1) \n", *p_x1);
	printf("p_x1 dir: %p (&) \n", &p_x1);
	printf("x1 dir %p (&) \n", &x1);
	printf("pp_x1 = dir(p_x1) = %p \n",pp_x1);
	
	return 0;
}
