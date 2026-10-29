#include <stdio.h>
int main()
{
	float length, width, radius, base, height;
	float area, perimeter;
	const float PI = 3.14159f;
	printf("enter rectangular lenght and width:");
	scanf("%f %f", &length, &width);
	printf("rectangele area=%.2f\n",length*width);
	printf("rectangleperimeter=%.2f\n",
	         2*(length +width));
	         printf("enter circle radius:");
	         scanf("%f", &radius);
	         printf("circle area= %.2f\n",PI*radius*radius);
	         printf("circle circumference=%.2f\n",2*PI*radius);
			 printf("enter triangle base and height:");
			 scanf("%f%f",&base,&height);
			 area = 0.5f * base * height;
			 printf("triangle area =%.2f\n",area);
			 return 0;
			 }