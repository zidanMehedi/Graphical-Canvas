#include <windows.h>  // for MS Windows
#include <glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>>
# define PI           3.14159265358979323846


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
              

	glBegin(GL_QUADS);		//sky
    glColor3ub(51, 204, 255);
    glVertex2f(1,0.3);
    glVertex2f(1,1);
	glVertex2f(-1,1);
    glVertex2f(-1,0.3);
    glEnd();

	GLfloat x=-.7f; GLfloat y=.75f; GLfloat radius =.15f;
	int triangleAmount = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(225, 92, 64);
		glVertex2f(x, y); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	glBegin(GL_QUADS);		//grass
    glColor3ub(0, 153, 51);
    glVertex2f(1,0.3);
	glVertex2f(-1,0.3);
    glVertex2f(-1,0);
	glVertex2f(1,0);
    glEnd();

	glBegin(GL_POLYGON);		//treeLeaf
    glColor3ub(0, 87, 5);
    glVertex2f(-0.7,0.23);
	glVertex2f(-.65,0.28);
	glVertex2f(-.63,0.33);
    glVertex2f(-.65,0.38);
	glVertex2f(-.7,0.43);
	glVertex2f(-.75,0.45);
	glVertex2f(-.8,.43);
	glVertex2f(-.85,.38);
	glVertex2f(-.87,0.33);
	glVertex2f(-.85,.28);
	glVertex2f(-.8,.23);
	glVertex2f(-.75,.21);
    glEnd();

	glBegin(GL_QUADS);		//treeWood
    glColor3ub(61, 2, 0);
    glVertex2f(-.77,0);
	glVertex2f(-.77,0.23);
    glVertex2f(-.73,.23);
	glVertex2f(-.73,0);
    glEnd();

	glTranslated(0.3,0,0);
	glBegin(GL_POLYGON);		//treeLeaf
    glColor3ub(0, 87, 5);
    glVertex2f(-0.7,0.23);
	glVertex2f(-.65,0.28);
	glVertex2f(-.63,0.33);
    glVertex2f(-.65,0.38);
	glVertex2f(-.7,0.43);
	glVertex2f(-.75,0.45);
	glVertex2f(-.8,.43);
	glVertex2f(-.85,.38);
	glVertex2f(-.87,0.33);
	glVertex2f(-.85,.28);
	glVertex2f(-.8,.23);
	glVertex2f(-.75,.21);
    glEnd();

	glBegin(GL_QUADS);		//treeWood
    glColor3ub(61, 2, 0);
    glVertex2f(-.77,0);
	glVertex2f(-.77,0.23);
    glVertex2f(-.73,.23);
	glVertex2f(-.73,0);
    glEnd();

	glLoadIdentity();

	glScalef(1.5,1.5,0);
	glTranslated(1.2,0,0);
	glBegin(GL_POLYGON);		//treeLeaf
    glColor3ub(0, 87, 5);
    glVertex2f(-0.7,0.23);
	glVertex2f(-.65,0.28);
	glVertex2f(-.63,0.33);
    glVertex2f(-.65,0.38);
	glVertex2f(-.7,0.43);
	glVertex2f(-.75,0.45);
	glVertex2f(-.8,.43);
	glVertex2f(-.85,.38);
	glVertex2f(-.87,0.33);
	glVertex2f(-.85,.28);
	glVertex2f(-.8,.23);
	glVertex2f(-.75,.21);
    glEnd();

	glBegin(GL_QUADS);		//treeWood
    glColor3ub(61, 2, 0);
    glVertex2f(-.77,0);
	glVertex2f(-.77,0.23);
    glVertex2f(-.73,.23);
	glVertex2f(-.73,0);
    glEnd();

	glLoadIdentity();

	glBegin(GL_QUADS);		//road
    glColor3ub(25, 51, 77);
    glVertex2f(1,0);
	glVertex2f(-1,0);
	glVertex2f(-1,-0.3);
	glVertex2f(1,-0.3);
    glEnd();

	/*glBegin(GL_QUADS);		//road
    glColor3ub(25, 51, 77);
    glVertex2f(1,0);
	glVertex2f(-1,0);
	glVertex2f(-1,-1);
	glVertex2f(1,-);
    glEnd();*/

	glBegin(GL_QUADS);		//station room
    glColor3ub(122, 0, 0);
    glVertex2f(0.5,0);
	glVertex2f(0.5,0.4);
	glVertex2f(-0.4,0.4);
	glVertex2f(-0.4,0);
    glEnd();

	glBegin(GL_QUADS);		//station room roof
    glColor3ub(43, 0, 0);
    glVertex2f(0.4,0.4);
	glVertex2f(0.4,0.6);
	glVertex2f(-0.3,0.6);
	glVertex2f(-.3,0.4);
    glEnd();

	glBegin(GL_QUADS);		//station room roof
    glColor3ub(165, 165, 165);
    glVertex2f(0.42,0.6);
	glVertex2f(0.42,0.62);
	glVertex2f(-0.32,0.62);
	glVertex2f(-.32,0.6);
    glEnd();

	glBegin(GL_QUADS);		//station room window1
    glColor3ub(224, 199, 0);
    glVertex2f(0.4,0.1);
	glVertex2f(0.4,.3);
	glVertex2f(0.2,0.3);
	glVertex2f(0.2,0.1);
    glEnd();

	/* glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(0.6,0.3);
     glVertex2f(0.4,0.3);
	 glVertex2f(0.5,.25);
     glVertex2f(0.5,.35);
     glEnd();*/

	glBegin(GL_QUADS);		//station room window2
    glColor3ub(224, 199, 0);
    glVertex2f(-0.1,0.1);
	glVertex2f(-0.1,0.3);
	glVertex2f(-0.3,0.3);
	glVertex2f(-.3,0.1);
    glEnd();

	 /*glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(0.1,0.3);
     glVertex2f(-0.1,0.3);
	 glVertex2f(0,.25);
     glVertex2f(0,.35);
     glEnd();*/

	glBegin(GL_QUADS);		//station room door
    glColor3ub(43, 0, 0);
    glVertex2f(0.15,0);
	glVertex2f(0.15,.3);
	glVertex2f(-.05,0.3);
	glVertex2f(-0.05,0);
    glEnd();

	/*glBegin(GL_LINES);
     glColor3ub(0,0,0);
     glVertex2f(0.05,0.0);
     glVertex2f(0.05,0.3);
     glEnd();*/

	glBegin(GL_QUADS);  //signal body
	glColor3ub(160,160,160);
	glVertex2f(.95,.1);
	glVertex2f(.95,.5);
	glVertex2f(.8,.5);
	glVertex2f(.8,.1);
	glEnd();

	GLfloat x1=.87f; GLfloat y1=.2f; GLfloat radius1 =.05f;
	int triangleAmount1 = 100; 

//--------------------------Signal light--------------------

	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,204,0);
		glVertex2f(x1, y1); 
		for(int i = 0; i <= triangleAmount1;i++) {
			glVertex2f(
		            x1 + (radius1 * cos(i *  twicePi / triangleAmount1)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount1))
			);
		}
	glEnd();



	GLfloat x2=.87f; GLfloat y2=.32f; GLfloat radius2 =.05f;
	int triangleAmount2 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,255,0);
		glVertex2f(x2, y2); 
		for(int i = 0; i <= triangleAmount2;i++) {
			glVertex2f(
		            x2 + (radius2 * cos(i *  twicePi / triangleAmount2)),
			    y2 + (radius2 * sin(i * twicePi / triangleAmount2))
			);
		}
	glEnd();



	GLfloat x3=.87f; GLfloat y3=.44f; GLfloat radius3 =.05f;
	int triangleAmount3 = 100; 


	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(255,0,0);
		glVertex2f(x3, y3); 
		for(int i = 0; i <= triangleAmount3;i++) {
			glVertex2f(
		            x3 + (radius3 * cos(i *  twicePi / triangleAmount3)),
			    y3 + (radius3 * sin(i * twicePi / triangleAmount3))
			);
		}
	glEnd();



	glBegin(GL_QUADS);  //signal  stand
	glColor3ub(0,0,0);
	glVertex2f(.89,-.3);
	glVertex2f(.89,.1);
	glVertex2f(.86,.1);
	glVertex2f(.86,-.3);
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