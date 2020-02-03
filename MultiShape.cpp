#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
              glBegin(GL_LINES);
              glColor3f(0.3,0.3,0.7);
			  glVertex2f(-1,0);
              glVertex2f(1,0);
			  glColor3f(0.7,0.6,0);
              glVertex2f(0,1);
              glVertex2f(0,-1);
              glEnd();
			  glBegin(GL_TRIANGLES);
              glColor3f(0.3,0.1,0.1);
			  glVertex2f(-0.25,0.25);
              glVertex2f(-.5,.75);
              glVertex2f(-.75,.25);
              //glVertex2f(0,-1);
              glEnd();
			  glBegin(GL_QUADS);
              glColor3f(1,0.3,0.2);
			  glVertex2f(0.75,0.25);
              glVertex2f(.75,.75);
              glVertex2f(.25,.75);
              glVertex2f(.25,.25);
              glEnd();
			  glBegin(GL_POLYGON);
              glColor3f(0.1,0.5,0.7);
			  glVertex2f(-0.25,-0.45);
              glVertex2f(-.25,-.25);
              glVertex2f(-.35,-.05);
              glVertex2f(-.65,-.05);
			  glVertex2f(-.75,-.25);
			  glVertex2f(-.75,-.45);
			  glVertex2f(-.65,-.65);
			  glVertex2f(-.35,-.65);
              glEnd();
			  glBegin(GL_LINES);
              glColor3f(0.1,0.7,0);
			  glVertex2f(.5,-0.75);
              glVertex2f(.75,-0.25);
			  glVertex2f(.75,-0.25);
			  glVertex2f(0.25,-.25);
              glVertex2f(0.25,-.25);
              glVertex2f(.5,-0.75);
              glEnd();


	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Test");
	glutInitWindowSize(320, 320);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
