#include<windows.h>
#include<GL/glut.h>

#include<math.h>
# define PI           3.14159265358979323846

GLfloat twicePi = 2.0f * PI;
void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);



	glTranslated(0,.2,0);

	glBegin(GL_QUADS);
    glColor3ub(129, 127, 127);
    glVertex2f(-1,-.55);
	glVertex2f(-1,-1.5);
	glVertex2f(1,-1.5);
	glVertex2f(1,-.55);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(138, 218, 255);
    glVertex2f(-1,1);
	glVertex2f(-1,-.55);
	glVertex2f(1,-.55);
	glVertex2f(1,1);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(.7,-.6);
    glVertex2f(.7,-.4);
    glVertex2f(-.4,-.4);
    glVertex2f(-.4,-.6);
    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(.7,-.4);
    glVertex2f(.7,-.3);
    glVertex2f(-.4,-.3);
    glVertex2f(-.4,-.4);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(.7,-.3);
    glVertex2f(.7,-.1);
    glVertex2f(-.4,-.1);
    glVertex2f(-.4,-.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(.7,-.1);
    glVertex2f(.7,0);
    glVertex2f(-.4,0);
    glVertex2f(-.4,-.1);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(.7,0);
    glVertex2f(.7,.2);
    glVertex2f(-.4,.2);
    glVertex2f(-.4,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(.7,.2);
    glVertex2f(.7,.3);
    glVertex2f(-.4,.3);
    glVertex2f(-.4,.2);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(.7,.3);
    glVertex2f(.7,.5);
    glVertex2f(-.4,.5);
    glVertex2f(-.4,.3);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(.7,.5);
    glVertex2f(.7,.6);
    glVertex2f(-.4,.6);
    glVertex2f(-.4,.5);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(.9,-.6);
    glVertex2f(.9,.6);
    glVertex2f(.9,.6);
    glVertex2f(.9,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(.750,-.750);
    glVertex2f(.750,.6);
    glVertex2f(.7,.6);
    glVertex2f(.7,-.750);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(.7,-.750);
    glVertex2f(.7,-.6);
    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.750);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(-.4,-.6);
    glVertex2f(-.4,.6);
    glVertex2f(-.5,.6);
    glVertex2f(-.5,-.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(112, 128, 144);
    glVertex2f(.750,-.750);
    glVertex2f(.9,-.6);
    glVertex2f(.9,.775);
    glVertex2f(.750,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(192,192,192);
    glVertex2f(.9,.775);
    glVertex2f(-.85,.775);
    glVertex2f(-.5,.6);
    glVertex2f(.750,.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(-.8,-.6);
    glVertex2f(-.5,-.750);
    glVertex2f(-.5,-.6);
    glVertex2f(-.8,-.40);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(-.5,-.6);
    glVertex2f(-.5,-.1);
    glVertex2f(-.8,.1);
    glVertex2f(-.8,-.45);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(-.5,-.1);
    glVertex2f(-.5,0);
    glVertex2f(-.8,.15);
    glVertex2f(-.8,.05);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(-.5,.6);
    glVertex2f(-.8,.75);
    glVertex2f(-.8,.65);
    glVertex2f(-.5,.5);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(-.5,0);
    glVertex2f(-.5,.5);
    glVertex2f(-.8,.65);
    glVertex2f(-.8,.15);
    glEnd();


    glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(-.8,.75);
    glVertex2f(-.85,.775);
    glVertex2f(-.85,-.57);
    glVertex2f(-.8,-.6);
    glEnd();

   /* glBegin(GL_QUADS);
    glColor3ub(47,79,79);
    glVertex2f(-.4,-.750);
    glVertex2f(-.4,-.8);
    glVertex2f(.3,-.8);
    glVertex2f(.3,-.750);
    glEnd();*/

    /*glBegin(GL_QUADS);
    glColor3ub(105,105,105);
    glVertex2f(-.4,-.8);
    glVertex2f(-.350,-.850);
    glVertex2f(.4,-.850);
    glVertex2f(.3,-.8);
    glEnd();*/

	glBegin(GL_QUADS);
    glColor3ub(192, 192 , 192);
    glVertex2f(-.5,-.750);
    glVertex2f(-.52,-.8);
    glVertex2f(.77,-.8);
    glVertex2f(.75,-.750);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(192, 192 , 192);
    glVertex2f(.77,-.8);
	glVertex2f(.93,-.61);
    glVertex2f(.9,-.57);
    glVertex2f(.75,-.750);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(192, 192 , 192);
    glVertex2f(-.5,-.750);
    glVertex2f(-.52,-.8);
    glVertex2f(-.88,-.6);
    glVertex2f(-.86,-.56);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(105, 105 , 105);
    glVertex2f(-.52,-1.1);
    glVertex2f(-.52,-.8);
    glVertex2f(.77,-.8);
    glVertex2f(.77,-1.1);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(105, 105 , 105);
    glVertex2f(.77,-1.1);
	glVertex2f(.93,-.9);
	glVertex2f(.93,-.61);
	glVertex2f(.77,-.8);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(105, 105 , 105);
    glVertex2f(-.52,-.8);
	glVertex2f(-.88,-.6);
	glVertex2f(-.88,-.9);
	glVertex2f(-.52,-1.1);
    glEnd();

	

	glBegin(GL_QUADS);
    glColor3ub(17, 15, 90);
    glVertex2f(-.2,-1.05);
    glVertex2f(-.18,-1);
    glVertex2f(.48,-1);
    glVertex2f(.5,-1.05);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(192, 192 , 192);
    glVertex2f(-.2,-1.05);
    glVertex2f(-.2,-1.1);
    glVertex2f(.5,-1.1);
    glVertex2f(.5,-1.05);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(192, 192 , 192);
    glVertex2f(-.18,-1);
    glVertex2f(-.18,-.96);
    glVertex2f(.48,-.96);
    glVertex2f(.48,-1);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(17, 15, 90);
    glVertex2f(-.18,-.96);
    glVertex2f(-.16,-.92);
    glVertex2f(.46,-.92);
    glVertex2f(.48,-.96);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(192, 192 , 192);
    glVertex2f(-.16,-.88);
    glVertex2f(-.16,-.92);
    glVertex2f(.46,-.92);
    glVertex2f(.46,-.88);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(17, 15, 90);
    glVertex2f(-.16,-.88);
    glVertex2f(-.14,-.84);
    glVertex2f(.44,-.84);
    glVertex2f(.46,-.88);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(192, 192 , 192);
    glVertex2f(-.14,-.8);
    glVertex2f(-.14,-.84);
    glVertex2f(.44,-.84);
    glVertex2f(.44,-.8);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(17, 15, 90);
    glVertex2f(-.14,-.8);
    glVertex2f(-.12,-.75);
    glVertex2f(.42,-.75);
    glVertex2f(.44,-.8);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(-.03,-.75);
    glVertex2f(.12,-.75);
    glVertex2f(.12,-.63);
    glVertex2f(-.03,-.63);
    glEnd();

	glBegin(GL_LINES);
    glColor3ub(17, 15, 90);
    glVertex2f(0.045,-.635);
    glVertex2f(0.045,-.76);
    glEnd();

	glBegin(GL_QUADS);
    glColor3ub(100,149,237);
    glVertex2f(.2,-.75);
    glVertex2f(.355,-.75);
    glVertex2f(.355,-.63);
    glVertex2f(.2,-.63);
    glEnd();

	glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2f(.28,-.635);
    glVertex2f(.28,-.76);
    glEnd();

	//glLoadIdentity();

    //


    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,-.167);
    glVertex2f(-.4,-.167);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,-.240);
    glVertex2f(-.4,-.240);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,.147);
    glVertex2f(-.4,.147);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,.067);
    glVertex2f(-.4,.067);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,.447);
    glVertex2f(-.4,.447);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,.367);
    glVertex2f(-.4,.367);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,-.467);
    glVertex2f(-.4,-.467);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(.7,-.540);
    glVertex2f(-.4,-.540);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-.8,-.100);
    glVertex2f(-.5,-.250);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-.8,-.350);
    glVertex2f(-.5,-.500);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-.8,.500);
    glVertex2f(-.5,.350);
    glEnd();
    glBegin(GL_LINES);
    glColor3f(0, 0, 0);
    glVertex2f(-.8,.250);
    glVertex2f(-.5,.100);
    glEnd();

	
	glLoadIdentity();

	glTranslated(.1,0,0);
	glBegin(GL_QUADS);
	glColor3ub(75, 75, 75);
    glVertex2f(-0.9,-0.05);
    glVertex2f(-0.95,-0.05);
	glVertex2f(-0.95,-0.9);
    glVertex2f(-0.9,-0.9);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(68, 68, 68);
    glVertex2f(-0.86,-0.9);
    glVertex2f(-0.99,-0.9);
	glVertex2f(-0.99,-0.99);
    glVertex2f(-0.86,-0.99);
    glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 102, 0);
    glVertex2f(-0.9,-0.1);
    glVertex2f(-0.3,-0.1);
	glVertex2f(-0.3,-0.5);
    glVertex2f(-0.9,-0.5);
    glEnd();
	
	GLfloat x1=-.6f; GLfloat y1=-.3f; GLfloat radius1 =.10f;
	int triangleAmount1 = 100; //# of triangles used to draw circle
	glBegin(GL_TRIANGLE_FAN);		
	glColor3ub(255, 0, 0);
	glVertex2f(x1, y1); // center of circle
	for(int i = 0; i <= triangleAmount1;i++) 
	{
		glVertex2f(
				x1 + (radius1 * cos(i *  twicePi / triangleAmount1)),
			    y1 + (radius1 * sin(i * twicePi / triangleAmount1))
		);
	}
	glEnd();

	glLoadIdentity();

    glFlush();



}
int main(int argc, char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("OpenGL Setup Test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
