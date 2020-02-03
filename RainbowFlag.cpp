#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
              glClear(GL_COLOR_BUFFER_BIT);
              glEnd();
			  glBegin(GL_QUADS);
              glColor3ub(255,252,51);
			  glVertex2f(0.65,0);
              glVertex2f(.65,.13);
              glVertex2f(-.65,.13);
              glVertex2f(-.65,.0);
             // glEnd();
			 // glBegin(GL_QUADS);
              glColor3ub(255, 119, 51 );
			  glVertex2f(0.65,0.13);
              glVertex2f(.65,.26);
              glVertex2f(-.65,.26);
              glVertex2f(-.65,.13);
             // glEnd();
			 // glBegin(GL_QUADS);
              glColor3ub(255, 51, 51 );
			  glVertex2f(0.65,0.26);
              glVertex2f(.65,.39);
              glVertex2f(-.65,.39);
              glVertex2f(-.65,.26);
              //glEnd();
			 // glBegin(GL_QUADS);
              glColor3ub(0, 143, 56 );
			  glVertex2f(0.65,0);
              glVertex2f(.65,-.13);
              glVertex2f(-.65,-.13);
              glVertex2f(-.65,.0);
             // glEnd();
			  //glBegin(GL_QUADS);
              glColor3ub(0, 16, 209 );
			  glVertex2f(0.65,-0.13);
              glVertex2f(.65,-.26);
              glVertex2f(-.65,-.26);
              glVertex2f(-.65,-.13);
             // glEnd();
			  //glBegin(GL_QUADS);
              glColor3ub(111, 0, 209 );
			  glVertex2f(0.65,-0.26);
              glVertex2f(.65,-.39);
              glVertex2f(-.65,-.39);
              glVertex2f(-.65,-.26);
             // glEnd();

			  glColor3ub(82, 0, 0 );
			  glVertex2f(-0.65,-.70);
              glVertex2f(-.65,.39);
              glVertex2f(-.70,.39);
              glVertex2f(-.70,-.70);

			  glColor3ub(82, 0, 0 );
			  glVertex2f(-0.55,-.80);
              glVertex2f(-.55,-.70);
              glVertex2f(-.80,-.70);
              glVertex2f(-.80,-.80);
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
