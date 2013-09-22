#include <cstdlib>
#include <GL\glut.h>
#include <iostream>
#include <time.h>

void myinit(void)
{

}

void display( void )
{

}

void drawRecursiveRect()
{
	
	glClearColor(1,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f,1.0f,0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.9,-0.8);
	float colour1, colour2, colour3;

	float r = 0 + (float)rand()/((float)RAND_MAX/(0.6 - 0.0)); //Random float value from 0 to 0.6
	for (float i = -.8; i < .9; i += .1)
	{
		colour1 = 0 + (float)rand()/((float)RAND_MAX/(1 - 0.0)); //random float value from 0 to 1
		colour2 = 0 + (float)rand()/((float)RAND_MAX/(1 - 0.0)); 
		colour3 = 0 + (float)rand()/((float)RAND_MAX/(1 - 0.0)); 
		glColor3f(colour1,colour2,colour3);
		glVertex2f(i, r);
		r = 0 + (float)rand()/((float)RAND_MAX/(0.6 - 0.0)); 
	}
	
	glVertex2f(0.9,-0.8);
	
	glEnd();
	glutSwapBuffers();
	glFlush();
}

void window1()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

void main(int argc, char** argv)
{
	srand((unsigned)time(0));
	glutInit(&argc, argv);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(300,300);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Window 1, Drawing Square");
	glutDisplayFunc(window1);
	glutDisplayFunc(drawRecursiveRect);
	myinit();
	glutMainLoop();
	//return;
}