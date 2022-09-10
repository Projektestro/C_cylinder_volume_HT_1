#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 

{
	const float pi = 3.14159;
	float r = 0;
	float h = 0;
	
	float v = 0; 
	
	int cmd = 0;
	
	do
	{
		printf("What to do?\n");
		printf("1. Calculate the cylinder volume\n");
		printf("0. Exit\n");
		
		scanf("%i", &cmd);
			
		switch(cmd)
		{
			case 1:
			{
				printf("Enter r\n");
				scanf("%f", &r);	

				printf("Enter h\n");
				scanf("%f", &h);	
		
				float v = pi * r * r * h; //	V = π·r²·h, где: r - радиус основания, h - высота цилиндра, π - число Пи (π≈3,14159...)
				printf("The cylinder volume is %f\n", v);
			}
				break;			
			default:
				break;
		}	
	}
	while(cmd);
	
	return 0;
}