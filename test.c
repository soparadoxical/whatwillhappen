#include <stdio.h>
#include "vector2.h"

int main()
{
	Vector2* vector = new_Vector2(2.3, -5.6);
	Vector2* vector2 = new_Vector2(-2.3, 5.6);
	printf("v1: %.1lf, %.1lf\n", Vector2_getX(vector), Vector2_getY(vector));
	printf("v2: %.1lf, %.1lf\n", Vector2_getX(vector2), Vector2_getY(vector2));
	delete_Vector2(vector);
	delete_Vector2(vector2);
	return 0;
}