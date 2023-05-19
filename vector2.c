#include "vector2.h"
#include <stdlib.h>

struct vector2
{
	double x;
	double y;	
};

Vector2* new_Vector2(double X, double Y)
{
	Vector2* v = malloc(sizeof(Vector2));
	v->x = X;
	v->y = Y;
}

void delete_Vector2(Vector2* vector)
{
	free(vector);
}

double Vector2_getX(Vector2* vector)
{
	return vector->x;
}

double Vector2_getY(Vector2* vector)
{
	return vector->y;
}

double Vector2_setX(Vector2* vector, double X)
{
	vector->x = X;
	return vector->x;
}

double Vector2_setY(Vector2* vector, double Y)
{
	vector->y = Y;
	return vector->y;
}