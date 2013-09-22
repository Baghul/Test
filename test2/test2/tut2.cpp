#include <cstdlib>
#include <GL\glut.h>



void window1()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

void window2()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

void window3()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

void window4()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

void window5()
{
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glutSwapBuffers();
}

void drawSquare()
{
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.3,-0.3);
	glVertex2f(-0.3,0.3);
	glVertex2f(0.3,0.3);
	glVertex2f(0.3,-0.3);
	glEnd();
	glutSwapBuffers();
	glFlush();
}

void drawTriangle()
{
	glClearColor(1,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f,1.0f,0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4,-0.3);
	glVertex2f(-0.0,0.3);
	//glVertex2f(0.3,0.3);
	glVertex2f(0.4,-0.3);
	glEnd();
	glutSwapBuffers();
	glFlush();
}

void drawTriangleDot()
{
	glClearColor(1,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f,1.0f,0.0f);
	glPointSize(5);
	glBegin(GL_POINTS);

	for (float u = 0; u <.5; u += 0.01)
	{
		glVertex2f(u,-u);
		glVertex2f(- .5 + (2 * u), -.5);
		glVertex2f(-u, -u);
	}

	glEnd();
	glutSwapBuffers();
	glFlush();
}

void drawTriangleDupe()
{
	glClearColor(1,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0f,0.0f,0.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.4,-0.3);
	glVertex2f(-0.0,0.3);
	glVertex2f(0.4,-0.3);
	glEnd();
	
	glColor3f(0.5f,0.5f,0.5f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.3,-0.25);
	glVertex2f(-0.0,0.2);
	glVertex2f(0.3,-0.25);
	glEnd();

	glColor3f(1.0f,0.0f,1.0f);
	glBegin(GL_POLYGON);
	glVertex2f(-0.2,-0.2);
	glVertex2f(-0.0,0.1);
	glVertex2f(0.2,-0.2);
	glEnd();

	glutSwapBuffers();
	glFlush();
}

void drawTriangleFan()
{

}

void drawRandom()
{

}

void drawPoints()
{
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(1.0f,1.0f,1.0f);
	glBegin(GL_POINTS);
	for (float i = -0.7; i < 0.7; i += 0.01)
	{
		for (float o = -0.7; o < 0.7; o += 0.01)
		{
			glVertex2f(i,o);
		}
	}

	glEnd();
	glutSwapBuffers();
	glFlush();
}

void myinit(void)
{

}

void display( void )
{

}

void main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowPosition(100,100);
	glutInitWindowSize(300,300);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Window 1, Drawing Square");
	glutDisplayFunc(window1);
	glutDisplayFunc(drawSquare);
	myinit();

	glutInitWindowPosition(450,100);
	glutInitWindowSize(300,300);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Window 2, Drawing Triangle");
	glutDisplayFunc(window2);
	glutDisplayFunc(drawTriangle);
	myinit();

	glutInitWindowPosition(800,100);
	glutInitWindowSize(300,300);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Window 3, This is for Mike!");
	glutDisplayFunc(window3);
	glutDisplayFunc(drawPoints);
	myinit();

	glutInitWindowPosition(275,450);
	glutInitWindowSize(300,300);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Window 4, Triangleception!");
	glutDisplayFunc(window4);
	glutDisplayFunc(drawTriangleDupe);
	myinit();

	glutInitWindowPosition(625,450);
	glutInitWindowSize(300,300);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Window 5, Dotception!");
	glutDisplayFunc(window5);
	glutDisplayFunc(drawTriangleDot);
	myinit();

	glutMainLoop();
	//return;
}