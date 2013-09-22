#include <GL/glut.h>
#include <GL/GL.h>
#include <GL/GLU.h>

void display()
{
	glClear(GL_COLOR_BUFFER_BIT); //Default colors are black background and white drawing

	glBegin(GL_POLYGON); //Drawing 4 vertices of square
		glVertex2f(-.5, -.5);
		glVertex2f(-.5, .5);
		glVertex2f(.5, .5);
		glVertex2f(.5, -.5);
	glEnd();
	glFlush();
}

void init()
{
	glClearColor(0,0,0,0); //Sets clear color to black

	glColor3f(1,1,1); //Sets fillcolor to white


	//Set up standard orthogonal view with clipping
	//Box as cube of side 2 centered at origin
	//This is default view and these statements could be removed
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-1.0,1.0,-1.0,1.0);
}

void main(int argc, char** argv)
{
	//Initialize mode and open a window in upper-left corner of screen
	//Window title is name of program(arg[0]);

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(500,500);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Chapter 2");
	glutDisplayFunc(display);
	glutMainLoop();
}