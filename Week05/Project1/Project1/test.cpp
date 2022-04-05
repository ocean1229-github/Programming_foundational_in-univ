#include <stdio.h>

int main()
{
	float u, a, t, v, s;

	printf("Enter the velocity, acceleration, time :\n");

	scanf_s("%f %f %f", &u, &a, &t);
	printf("\n\n");

	v = u + a * t;

	s = u * t + 0.5 * a * t * t;

	printf("The final velocity is %f", v);
	printf("\n");
	printf("The final distance is %f", s);

	return 0;
}