#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
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
    glEnd();

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

	glBegin(GL_QUADS);		//railLine1
    glColor3ub(0, 0, 0);
    glVertex2f(1,-0.52);
	glVertex2f(-1,-0.52);
	glVertex2f(-1,-0.55);
	glVertex2f(1,-0.55);
    glEnd();

	glTranslated(0,-.28,0);
	glBegin(GL_QUADS);		//railLine2
    glColor3ub(0, 0, 0);
    glVertex2f(1,-0.52);
	glVertex2f(-1,-0.52);
	glVertex2f(-1,-0.55);
	glVertex2f(1,-0.55);
    glEnd();
	glLoadIdentity();

	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();

	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	//glLoadIdentity();

	glTranslated(.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	glLoadIdentity();

	glTranslated(-.2,0,0);
	glBegin(GL_QUADS);		//road
    glColor3ub(0, 0, 0);
    glVertex2f(-.8,-0.82);
	glVertex2f(-.7,-0.53);
	glVertex2f(-.8,-0.53);
	glVertex2f(-.9,-0.82);
    glEnd();
	glLoadIdentity();

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

	 glBegin(GL_LINES);
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

	 glBegin(GL_LINES);
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

	glBegin(GL_QUADS);		
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

	//glTranslated(-.07,0,0);

	glTranslated(-.07,-.18,0);
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

	//glLoadIdentity();

	glBegin(GL_QUADS);  //signal  stand
	glColor3ub(0,0,0);
	glVertex2f(.89,-.32);
	glVertex2f(.89,.1);
	glVertex2f(.86,.1);
	glVertex2f(.86,-.32);
	glEnd();

	glLoadIdentity();

	//-------Train-------

	glBegin(GL_QUADS);
	glColor3ub(53, 69, 158);
	glVertex2f(.89,-.68);
	glVertex2f(.79,-.42);
	glVertex2f(0,-.42);
	glVertex2f(0,-.68);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 0, 0);
	glVertex2f(.79,-.42);
	glVertex2f(.79,-.19);
	glVertex2f(.49,-.19);
	glVertex2f(.49,-.42);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(45, 185, 153);
	glVertex2f(.49,-.42);
	glVertex2f(.49,-.0);
	glVertex2f(.02,-.0);
	glVertex2f(.02,-.42);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(53, 69, 158);
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
	glColor3ub(53, 69, 158);
	glVertex2f(.74,.0);
	glVertex2f(.74,0.03);
	glVertex2f(.57,0.03);
	glVertex2f(.57,.0);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255, 243, 0);
	glVertex2f(.83,-.35);
	glVertex2f(.83,-0.24);
	glVertex2f(.79,-.24);
	glVertex2f(.79,-.35);
	glEnd();

	glBegin(GL_TRIANGLES);
	glColor3ub(53, 69, 158);
	glVertex2f(.89,-.19);
	glVertex2f(.79,-.19);
	glVertex2f(.79,-.27);
	glEnd();

	GLfloat x4=.65f; GLfloat y4=-.7f; GLfloat radius4 =.13f;
	int triangleAmount4 = 100; //# of triangles used to draw circle

	//GLfloat radius = 0.8f; //radius
	//GLfloat twicePi = 2.0f * PI;

	
	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(181, 181, 181);
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

	//GLfloat radius = 0.8f; //radius
	//GLfloat twicePi = 2.0f * PI;

	
	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(181, 181, 181);
		glVertex2f(x5, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x5 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(29, 174, 134);
	glVertex2f(-.10,-.68);
	glVertex2f(-.10,-0.1);
	glVertex2f(-.79,-.1);
	glVertex2f(-.79,-.68);
	glEnd();
			 
	glFlush();

	glTranslated(-.8,0,0);
	glBegin(GL_QUADS);
	glColor3ub(29, 174, 134);
	glVertex2f(-.10,-.68);
	glVertex2f(-.10,-0.1);
	glVertex2f(-.79,-.1);
	glVertex2f(-.79,-.68);
	glEnd();

	GLfloat x6=.53f;

	//GLfloat radius = 0.8f; //radius
	//GLfloat twicePi = 2.0f * PI;

	
	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(181, 181, 181);
		glVertex2f(x6, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x6 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	GLfloat x7=.18f;

	//GLfloat radius = 0.8f; //radius
	//GLfloat twicePi = 2.0f * PI;

	
	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(181, 181, 181);
		glVertex2f(x7, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x7 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();

	GLfloat x8=-.27f;

	//GLfloat radius = 0.8f; //radius
	//GLfloat twicePi = 2.0f * PI;

	
	glBegin(GL_TRIANGLE_FAN);			//sun
	glColor3ub(181, 181, 181);
		glVertex2f(x8, y4); // center of circle
		for(int i = 0; i <= triangleAmount4;i++) {
			glVertex2f(
		            x8 + (radius4 * cos(i *  twicePi / triangleAmount4)),
			    y4 + (radius4 * sin(i * twicePi / triangleAmount4))
			);
		}
	glEnd();
			 
	glFlush();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Canvas");
	glutInitWindowSize(640, 480);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}