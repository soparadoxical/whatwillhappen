#ifndef VECTOR2_H
#define VECTOR2_H
typedef struct vector2 Vector2;

Vector2* new_Vector2(double x, double y);
void delete_Vector2(Vector2* vector);
double Vector2_getX(Vector2* vector);
double Vector2_getY(Vector2* vector);
double Vector2_setX(Vector2* vector, double x);
double Vector2_setY(Vector2* vector, double y);
#endif