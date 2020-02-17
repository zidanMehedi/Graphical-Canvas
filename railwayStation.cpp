#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
# define PI           3.14159265358979323846


void Idle()
{
	glutPostRedisplay();
}
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

	/*glBegin(GL_QUADS);		//treeWood
    glColor3ub(61, 2, 0);
    glVertex2f(-.77,0);
	glVertex2f(-.77,0.23);
    glVertex2f(-.73,.23);
	glVertex2f(-.73,0);
    glEnd();


	glTranslated(0.27,0,0);
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
    glEnd();*/

	glBegin(GL_QUADS);		//treeWood
    glColor3ub(61, 2, 0);
    glVertex2f(-.77,0);
	glVertex2f(-.77,0.23);
    glVertex2f(-.73,.23);
	glVertex2f(-.73,0);
    glEnd();

	glLoadIdentity();

	glTranslated(-0.27,0,0);
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

	glTranslated(1.7,0,0);
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
	glVertex2f(-1,-0.35);
	glVertex2f(1,-0.35);
    glEnd();

	glBegin(GL_QUADS);		//walkWay
    glColor3ub(215, 215, 215);
    glVertex2f(.26,-0.35);
	glVertex2f(.15,0);
	glVertex2f(-.05,0);
	glVertex2f(-.20,-0.35);
    glEnd();

	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
    glEnd();

	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glTranslated(.21,0,0);
	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
	//glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glLoadIdentity();

	glTranslated(.42,0,0);
	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
    glEnd();

	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glLoadIdentity();

	glTranslated(.63,0,0);
	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
    glEnd();

	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glLoadIdentity();

	glTranslated(-.51,0,0);
	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
	//glVertex2f(.26,-0.35);
    glEnd();

	glTranslated(-.21,0,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glLoadIdentity();

	glTranslated(-.72,0,0);
	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
	//glVertex2f(.26,-0.35);
    glEnd();

	glTranslated(-.21,0,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glLoadIdentity();

	glTranslated(-.94,0,0);
	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
    glEnd();

	glTranslated(-.21,0,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glLoadIdentity();

	glTranslated(-1.16,0,0);
	glBegin(GL_QUADS);		//barrierStand
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.35);
	glVertex2f(.31,-.1);
	glVertex2f(.26,-.10);
	glVertex2f(.26,-0.35);
    glEnd();

	glBegin(GL_TRIANGLES);		//barrierStandPeak
    glColor3ub(142, 79, 0);
    glVertex2f(.31,-0.1);
	glVertex2f(.283,-.04);
	glVertex2f(.26,-0.1);
    glEnd();

	glTranslated(-.21,0,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();

	glTranslated(0,.12,0);
	glBegin(GL_QUADS);		//barriers
    glColor3ub(142, 79, 0);
    glVertex2f(.5,-0.3);
	glVertex2f(.5,-.25);
	glVertex2f(.26,-.25);
	glVertex2f(.26,-0.3);
    glEnd();
	glLoadIdentity();

	glLoadIdentity();

	glBegin(GL_QUADS);		//muddyRoad
    glColor3ub(82, 15, 0);
    glVertex2f(1,-0.35);
	glVertex2f(-1,-0.35);
	glVertex2f(-1,-0.5);
	glVertex2f(1,-0.5);
    glEnd();
	glLoadIdentity();

	glTranslated(0,-.5,0);
	glBegin(GL_QUADS);		//muddyRoad
    glColor3ub(82, 15, 0);
    glVertex2f(1,-0.35);
	glVertex2f(-1,-0.35);
	glVertex2f(-1,-0.5);
	glVertex2f(1,-0.5);
    glEnd();
	glLoadIdentity();

	//-----Train Line-----

	glBegin(GL_QUADS);		//lineJoints
    glColor3ub(191, 128, 38);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//lineJoints
    glColor3ub(191, 128, 38);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(191, 128, 38);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(191, 128, 38);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(191, 128, 38);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(141, 94, 26);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(141, 94, 26);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(141, 94, 26);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(141, 94, 26);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(141, 94, 26);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	glLoadIdentity();

	glTranslated(-.2,0,0);
	glBegin(GL_QUADS);		////lineJoints
    glColor3ub(141, 94, 26);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);		//railLine1
    glColor3ub(150, 150, 150);
    glVertex2f(1,-0.52);
	glVertex2f(-1,-0.52);
	glVertex2f(-1,-0.55);
	glVertex2f(1,-0.55);
    glEnd();

	glTranslated(0,-.28,0);
	glBegin(GL_QUADS);		//railLine2
    glColor3ub(150, 150, 150);
    glVertex2f(1,-0.52);
	glVertex2f(-1,-0.52);
	glVertex2f(-1,-0.55);
	glVertex2f(1,-0.55);
    glEnd();
	glLoadIdentity();


	glTranslated(-.07,-.18,0);
	glBegin(GL_QUADS);			//signal body
	glColor3ub(160,160,160);
	glVertex2f(.95,.1);
	glVertex2f(.95,.5);
	glVertex2f(.8,.5);
	glVertex2f(.8,.1);
	glEnd();

     //------Signal light------

	GLfloat x1=.87f; GLfloat y1=.2f; GLfloat radius1 =.05f;
	int triangleAmount1 = 100; 

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
	glVertex2f(.89,-.32);
	glVertex2f(.89,.1);
	glVertex2f(.86,.1);
	glVertex2f(.86,-.32);
	glEnd();

	glLoadIdentity();

	//-------Train-------

	glBegin(GL_QUADS); //Train Body Joint
	glColor3ub(43, 0, 0);
	glVertex2f(0.01,-.62);
	glVertex2f(0.01,-.57);
	glVertex2f(-.1,-.57);
	glVertex2f(-.1,-.62);
	glEnd();

	glTranslated(-.8,0,0); ////Train Body Joint
	glBegin(GL_QUADS);
	glColor3ub(43, 0, 0);
	glVertex2f(0.01,-.62);
	glVertex2f(0.01,-.57);
	glVertex2f(-.1,-.57);
	glVertex2f(-.1,-.62);
	glEnd();
	glLoadIdentity();

	//----- Train Bodies-----

	glBegin(GL_QUADS);
	glColor3ub(0, 9, 30);
	glVertex2f(.89,-.68);
	glVertex2f(.79,-.42);
	glVertex2f(0,-.42);
	glVertex2f(0,-.68);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(122, 0, 0);
	glVertex2f(.79,-.42);
	glVertex2f(.79,-.19);
	glVertex2f(.49,-.19);
	glVertex2f(.49,-.42);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 9, 30);
	glVertex2f(.77,-.42);
	glVertex2f(.77,-.19);
	glVertex2f(.74,-.19);
	glVertex2f(.74,-.42);
	glEnd();

	glTranslated(-.18,0,0);
	glBegin(GL_QUADS);
	glColor3ub(0, 9, 30);
	glVertex2f(.77,-.42);
	glVertex2f(.77,-.19);
	glVertex2f(.74,-.19);
	glVertex2f(.74,-.42);
	glEnd();
	glLoadIdentity();

	glTranslated(-.225,0,0);
	glBegin(GL_QUADS);
	glColor3ub(0, 9, 30);
	glVertex2f(.77,-.42);
	glVertex2f(.77,-.19);
	glVertex2f(.74,-.19);
	glVertex2f(.74,-.42);
	glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);
	glColor3ub(28, 90, 86);
	glVertex2f(.49,-.42);
	glVertex2f(.49,-.0);
	glVertex2f(.02,-.0);
	glVertex2f(.02,-.42);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0, 9, 30);
	glVertex2f(.51,.0);
	glVertex2f(.51,0.03);
	glVertex2f(.0,0.03);
	glVertex2f(.0,.0);
	glEnd();


	glBegin(GL_QUADS);
	glColor3ub(0,0,0);
	glVertex2f(.72,-.19);
	glVertex2f(.72,0);
	glVertex2f(.58,0);
	glVertex2f(.58,-.19);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 9, 30);
	glVertex2f(.74,.0);
	glVertex2f(.74,0.03);
	glVertex2f(.57,0.03);
	glVertex2f(.57,.0);
	glEnd();

	glBegin(GL_QUADS); //Train Light
	glColor3ub(255, 243, 0);
	glVertex2f(.83,-.35);
	glVertex2f(.83,-0.24);
	glVertex2f(.79,-.24);
	glVertex2f(.79,-.35);
	glEnd();

	glBegin(GL_TRIANGLES); //Train Light Shelter
	glColor3ub(0, 9, 30);
	glVertex2f(.89,-.19);
	glVertex2f(.79,-.19);
	glVertex2f(.79,-.27);
	glEnd();

	GLfloat x4=.65f; GLfloat y4=-.7f; GLfloat radius4 =.13f;
	int triangleAmount4 = 100; //# of triangles used to draw circle
	
	glBegin(GL_TRIANGLE_FAN);			//tarinWheel
	glColor3ub(62, 61, 59);
		glVertex2f(x4, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x4 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();
			 
	glFlush();

	GLfloat x5=.20f;

	glBegin(GL_TRIANGLE_FAN);			//tarinWheel
	glColor3ub(62, 61, 59);
		glVertex2f(x5, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x5 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(28, 90, 86); //Train Body
	glVertex2f(-.10,-.68);
	glVertex2f(-.10,-0.1);
	glVertex2f(-.79,-.1);
	glVertex2f(-.79,-.68);
	glEnd();
			 
	glFlush();

	glTranslated(-.8,0,0); //Train Body
	glBegin(GL_QUADS);
	glColor3ub(28, 90, 86);
	glVertex2f(-.10,-.68);
	glVertex2f(-.10,-0.1);
	glVertex2f(-.79,-.1);
	glVertex2f(-.79,-.68);
	glEnd();


	GLfloat x6=.53f;

	
	glBegin(GL_TRIANGLE_FAN);			//tarinWheel
	glColor3ub(62, 61, 59);
		glVertex2f(x6, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x6 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	GLfloat x7=.18f;

	glBegin(GL_TRIANGLE_FAN);			//tarinWheel
	glColor3ub(62, 61, 59);
		glVertex2f(x7, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x7 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	GLfloat x8=-.27f;

	glBegin(GL_TRIANGLE_FAN);			//tarinWheel
	glColor3ub(62, 61, 59);
		glVertex2f(x8, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x8 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	//-----Train Windows-----

	glScalef(1.3,1,0);
	glTranslated(-.15,-.53,0);
	glBegin(GL_QUADS);
    glColor3ub(224, 199, 0);
    glVertex2f(0.4,0.1);
	glVertex2f(0.4,.3);
	glVertex2f(0.2,0.3);
	glVertex2f(0.2,0.1);
    glEnd();

	glTranslated(.25,0,0);
	glBegin(GL_QUADS);
    glColor3ub(224, 199, 0);
    glVertex2f(0.4,0.1);
	glVertex2f(0.4,.3);
	glVertex2f(0.2,0.3);
	glVertex2f(0.2,0.1);
    glEnd();
	glLoadIdentity();

	glScalef(1.3,1,0);
	glTranslated(-1.13,-.53,0);
	glBegin(GL_QUADS);
    glColor3ub(224, 199, 0);
    glVertex2f(0.4,0.1);
	glVertex2f(0.4,.3);
	glVertex2f(0.2,0.3);
	glVertex2f(0.2,0.1);
    glEnd();
	glLoadIdentity();

	glScalef(1.94,1.5,0);
	glTranslated(-.17,-.34,0);
	glBegin(GL_QUADS);
    glColor3ub(224, 199, 0);
    glVertex2f(0.4,0.1);
	glVertex2f(0.4,.3);
	glVertex2f(0.2,0.3);
	glVertex2f(0.2,0.1);
    glEnd();
	glLoadIdentity();

	//-----Train Window Grill-----

	glScalef(1.3,1,0);
	glTranslated(-.516,-.59,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();

	glTranslated(0,.056,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
    
	glTranslated(0,.056,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
	glLoadIdentity();

	glScalef(1.94,1.5,0);
	glTranslated(-.17,-.34,0);
	glBegin(GL_QUADS);
    glColor3ub(224, 199, 0);
    glVertex2f(0.4,0.1);
	glVertex2f(0.4,.3);
	glVertex2f(0.2,0.3);
	glVertex2f(0.2,0.1);
    glEnd();
	glLoadIdentity();

	glScalef(1.304,1,0);
	glTranslated(-.762,-.59,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
	glLoadIdentity();

	glScalef(1.304,1,0);
	glTranslated(-.762,-.53,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
    glLoadIdentity();

	glScalef(1.304,1,0);
	glTranslated(-.762,-.47,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
    glLoadIdentity();

	glScalef(1.304,1,0);
	glTranslated(-1.125,-.47,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
    glLoadIdentity();

	glScalef(1.304,1,0);
	glTranslated(-1.125,-.53,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
    glLoadIdentity();

	glScalef(1.304,1,0);
	glTranslated(-1.125,-.59,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
    glLoadIdentity();

	glScalef(1.922,1.5,0);
	glTranslated(-.167,-.34,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
	glLoadIdentity();

	glScalef(1.922,1.5,0);
	glTranslated(-.167,-.38,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
	glLoadIdentity();

	glScalef(1.922,1.5,0);
	glTranslated(-.167,-.415,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
	glLoadIdentity();

	glScalef(1.92,1.5,0);
	glTranslated(-.167,-.305,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();

	glScalef(1,1,0);
	glTranslated(0,.035,0);
	glBegin(GL_LINES);
    glColor3ub(0,0,0);
	glVertex2f(0.2,.2);
    glVertex2f(0.4,.2);
    glEnd();
	glLoadIdentity();

	

	glBegin(GL_QUADS);		//treeWood
    glColor3ub(255, 2, 0);
    glVertex2f(-.45,0);
	glVertex2f(-.48,0.48);
    glVertex2f(-.51,.48);
	glVertex2f(-.55,0);
    glEnd();

	/*GLfloat i = 0;
	glPushMatrix();
	glRotatef(i,0.0,0.0,1.0);*/
	
	glBegin(GL_TRIANGLES);		//treeWood
    glColor3ub(229, 229, 229);
    glVertex2f(-.495,.5);
	glVertex2f(-.45,.86);
    glVertex2f(-.56,.86);
    glEnd();

	glBegin(GL_TRIANGLES);		//treeWood
    glColor3ub(229, 229, 229);
    glVertex2f(-.495,.5);
	glVertex2f(-.85,.55);
    glVertex2f(-.85,.45);
    glEnd();

	glBegin(GL_TRIANGLES);		//treeWood
    glColor3ub(229, 229, 229);
    glVertex2f(-.495,.5);
	glVertex2f(-.45,.12);
    glVertex2f(-.55,0.12);
    glEnd();

	glBegin(GL_TRIANGLES);		//treeWood
    glColor3ub(229, 229, 229);
    glVertex2f(-.495,.5);
	glVertex2f(-.13,.55);
    glVertex2f(-.13,.45);
    glEnd();

	//glPopMatrix();
	//i+=.1;

	GLfloat x9=-.496f; GLfloat y9=.5f; GLfloat radius9 =.05f;
	int triangleAmount9 = 100; //# of triangles used to draw circle

	//GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(225, 92, 64);
		glVertex2f(x9, y9); // center of circle
		for(int i = 0; i <= triangleAmount9;i++) {
			glVertex2f(
		            x9 + (radius9 * cos(i *  twicePi / triangleAmount9)),
			    y9 + (radius9 * sin(i * twicePi / triangleAmount9))
			);
		}
	glEnd();

	
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

	 glBegin(GL_LINES); //station window1 grill
     glColor3ub(0,0,0);
     glVertex2f(0.3,0.1);
     glVertex2f(0.3,0.3);
	 glVertex2f(0.2,.2);
     glVertex2f(0.4,.2);
     glEnd();

	glBegin(GL_QUADS);		//station room window2
    glColor3ub(224, 199, 0);
    glVertex2f(-0.1,0.1);
	glVertex2f(-0.1,0.3);
	glVertex2f(-0.3,0.3);
	glVertex2f(-.3,0.1);
    glEnd();

	 glBegin(GL_LINES); //station window2 grill
     glColor3ub(0,0,0);
     glVertex2f(-0.2,0.1);
     glVertex2f(-0.2,0.3);
	 glVertex2f(-0.1,.2);
     glVertex2f(-0.3,.2);
     glEnd();

	glBegin(GL_QUADS);		//station room door
    glColor3ub(43, 0, 0);
    glVertex2f(0.15,0);
	glVertex2f(0.15,.3);
	glVertex2f(-.05,0.3);
	glVertex2f(-0.05,0);
    glEnd();


	/*glBegin(GL_QUADS);		//treeWood
    glColor3ub(61, 2, 0);
    glVertex2f(-.77,0);
	glVertex2f(-.77,0.23);
    glVertex2f(-.73,.23);
	glVertex2f(-.73,0);
    glEnd();*/



	glFlush();
}
//-----Main Function Start-----
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Canvas");
	glutInitWindowSize(640, 480);
	glutDisplayFunc(display);
	//glutIdleFunc(Idle);
	glutMainLoop();
	return 0;
}