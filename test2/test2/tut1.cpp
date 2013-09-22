#include "GL/glut.h"


void display()
{
	
}
int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitWindowPosition(50,100);
	glutInitWindowSize(500,500);
	glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
	glutCreateWindow("Creating a window");
	glutInitWindowPosition(500,500);
	glutReshapeWindow(500,500);
	glClearColor(0.7, 0.7, 0.7, 0.0);
	//glutFullScreen();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}