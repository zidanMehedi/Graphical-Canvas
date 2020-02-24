#include<windows.h>
#include<GL/glut.h>

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


	glBegin(GL_QUADS);
	glColor3f(.5, .5, .5);
    glVertex2f(.3,-.4);
	glVertex2f(.3,-0.1);
	glVertex2f(-.3,-0.1);
	glVertex2f(-.3,-.4);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(.5, .5, .5);
    glVertex2f(-.1,-.75);
	glVertex2f(-.1,-.15);
	glVertex2f(-.3,-.15);
	glVertex2f(-.3,-.75);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(.2, .2, .2);
    glVertex2f(-.1,-.85);
	glVertex2f(-.1,-.75);
	glVertex2f(-.3,-.75);
	glVertex2f(-.3,-.85);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(-.1,-1);
	glVertex2f(-.1,-.85);
	glVertex2f(-.3,-.85);
	glVertex2f(-.3,-1);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(-.3,-1);
	glVertex2f(-.3,-.9);
	glVertex2f(-.45,-.9);
	glVertex2f(-.45,-1);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(.5, .5, .5);
    glVertex2f(.1,-.75);
	glVertex2f(.1,-.15);
	glVertex2f(.3,-.15);
	glVertex2f(.3,-.75);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(.1,-.85);
	glVertex2f(.1,-.75);
	glVertex2f(.3,-.75);
	glVertex2f(.3,-.85);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(.1,-1);
	glVertex2f(.1,-.85);
	glVertex2f(.3,-.85);
	glVertex2f(.3,-1);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(.3,-1);
	glVertex2f(.3,-.9);
	glVertex2f(.45,-.9);
	glVertex2f(.45,-1);
    glEnd();

	//body
	glTranslated(0,-.2,0);
	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(.3,0);
	glVertex2f(.3,.7);
	glVertex2f(-.3,.7);
	glVertex2f(-.3,0);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(.2,.7);
	glVertex2f(.2,.8);
	glVertex2f(-.2,.8);
	glVertex2f(-.2,.7);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
    glVertex2f(.15,.45);
	glVertex2f(.15,.55);
	glVertex2f(-.15,.55);
	glVertex2f(-.15,.45);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
    glVertex2f(.1,.4);
	glVertex2f(.1,.45);
	glVertex2f(-.1,.45);
	glVertex2f(-.1,.4);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 1);
    glVertex2f(.05,.3);
	glVertex2f(.05,.4);
	glVertex2f(-.05,.4);
	glVertex2f(-.05,.3);
    glEnd();
	glLoadIdentity();
	
	glBegin(GL_QUADS);
	glColor3f(.75, .75, .75);
    glVertex2f(.15,.35);
	glVertex2f(.15,.85);
	glVertex2f(-.15,.85);
	glVertex2f(-.15,.35);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(.75, .75, .75);
    glVertex2f(-.15,.52);
	glVertex2f(-.15,.85);
	glVertex2f(-.25,.85);
	glVertex2f(-.25,.52);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(.2,.75);
	glVertex2f(.2,.9);
	glVertex2f(-.35,.9);
	glVertex2f(-.35,.75);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(-.25,.9);
	glVertex2f(-.25,.98);
	glVertex2f(-.35,.98);
	glVertex2f(-.35,.9);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(.2,.6);
	glVertex2f(.2,.9);
	glVertex2f(.1,.9);
	glVertex2f(.1,.6);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(.1,.7);
	glVertex2f(.1,.75);
	glVertex2f(.05,.75);
	glVertex2f(.05,.7);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(.06,.5);
	glVertex2f(.06,.75);
	glVertex2f(.01,.75);
	glVertex2f(.01,.5);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(-.05,.6);
	glVertex2f(-.05,.7);
	glVertex2f(-.2,.7);
	glVertex2f(-.2,.6);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(-.25,.6);
	glVertex2f(-.25,.7);
	glVertex2f(-.35,.7);
	glVertex2f(-.35,.6);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(0, 0, 0);
    glVertex2f(-.2,.65);
	glVertex2f(-.2,.7);
	glVertex2f(-.25,.7);
	glVertex2f(-.25,.65);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(-.3,-.3);
	glVertex2f(-.3,.5);
	glVertex2f(-.4,.5);
	glVertex2f(-.4,-.3);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
    glVertex2f(-.3,-.3);
	glVertex2f(-.3,-.5);
	glVertex2f(-.4,-.5);
	glVertex2f(-.4,-.3);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 0, 0);
    glVertex2f(.3,-.3);
	glVertex2f(.3,.5);
	glVertex2f(.4,.5);
	glVertex2f(.4,-.3);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
    glVertex2f(.3,-.3);
	glVertex2f(.3,-.5);
	glVertex2f(.4,-.5);
	glVertex2f(.4,-.3);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
    glVertex2f(-.25,-.3);
	glVertex2f(-.25,-.35);
	glVertex2f(-.4,-.35);
	glVertex2f(-.4,-.3);
    glEnd();

	glBegin(GL_QUADS);
	glColor3f(1, 1, 0);
    glVertex2f(.25,-.3);
	glVertex2f(.25,-.35);
	glVertex2f(.4,-.35);
	glVertex2f(.4,-.3);
    glEnd();


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
