#include <GL/glut.h>
#include <GL/GL.h>
#include <GL/GLU.h>

void triangle(GLfloat *a, GLfloat *b, GLfloat *c, int type)
{
	glBegin(GL_POLYGON);
		switch(type)
		{
		case(2):
		case(4):
		case(6):
		case(7):