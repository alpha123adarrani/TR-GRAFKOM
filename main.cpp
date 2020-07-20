#include <windows.h>
#include <gl/glut.h>
#include <math.h>
#include <stdio.h>
#include <GL/glut.h>

double rx = 1.0;
double ry = 1.0;
GLUquadricObj* qobj;
float n[] = { 0.0,  -1.0, 0.0 }; //menentukan vektor normal bidang
float e[] = { 50.0, -50.0, 50.0 }; //menentukan titik bidang
void init(void);
void tampil(void);
void keyboard(unsigned char, int, int);
void mouse (int button, int state, int x, int y);
void ukuran (int, int);
void mouseMotion(int x, int y);

float xrot = 0.0f;
float yrot = 0.0f;
float xdiff = 0.0f;
float ydiff = 0.0f;
bool mouseDown = false;
int is_depth;

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_LIGHT0);
    glEnable(GL_DEPTH_TEST);
    is_depth = 1;
    glMatrixMode(GL_MODELVIEW);
    glPointSize(9.0);
    glLineWidth(10.0f);

}

void draw()// obyek yang akan digambar
{
    qobj = gluNewQuadric();
    gluQuadricDrawStyle(qobj, GLU_FILL);

    gluCylinder(qobj, 20, 20, 50, 55, 50);
}
void idle(){
    if(!mouseDown){
        xrot += 0.3f;
        yrot += 0.4f;
    }
glutPostRedisplay();
}

void mouse(int button, int state, int x, int y){
    if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN){
        mouseDown = true;
        xdiff = x - yrot;
        ydiff = -y + xrot;
    }
    else
        mouseDown = false;
}

void mouseMotion(int x, int y){
    if(mouseDown){
        yrot = x - xdiff;
        xrot = y + ydiff;

        glutPostRedisplay();
    }
}

void tampil()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glClearColor(0.0, 1.0, 1.0, 1.0); //warna background atas;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    gluLookAt(0.0f,-25.0f,300.0f,0.0f,0.0f,0.0f,0.0f,1.0f,0.0f);
    glRotatef(xrot, 1.0f, 0.0f, 0.0f);
    glRotatef(yrot, 0.0f, 1.0f, 0.0f);
    glPushMatrix();
    glDisable(GL_CULL_FACE);
    glDisable(GL_LIGHTING);
    glEnd();
    glPushMatrix();
    glRotatef(45, 45, 0, 0);
    glRotatef(45, 45, 0, 0);
    draw();
    glPopMatrix();
    if (is_depth)
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    else
        //kaca tembok kiri gede kebawah
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -150.0);
	glVertex3f(-80.0, -28.0, -150.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -147.0);
	glVertex3f(-80.0, -28.0, -147.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -144.0);
	glVertex3f(-80.0, -28.0, -144.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -141.0);
	glVertex3f(-80.0, -28.0, -141.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -138.0);
	glVertex3f(-80.0, -28.0, -138.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -135.0);
	glVertex3f(-80.0, -28.0, -135.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -132.0);
	glVertex3f(-80.0, -28.0, -132.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -129.0);
	glVertex3f(-80.0, -28.0, -129.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -126.0);
	glVertex3f(-80.0, -28.0, -126.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -123.0);
	glVertex3f(-80.0, -28.0, -123.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -120.0);
	glVertex3f(-80.0, -28.0, -120.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -117.0);
	glVertex3f(-80.0, -28.0, -117.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -114.0);
	glVertex3f(-80.0, -28.0, -114.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -111.0);
	glVertex3f(-80.0, -28.0, -111.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -108.0);
	glVertex3f(-80.0, -28.0, -108.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -105.0);
	glVertex3f(-80.0, -28.0, -105.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -102.0);
	glVertex3f(-80.0, -28.0, -102.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -99.0);
	glVertex3f(-80.0, -28.0, -99.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -96.0);
	glVertex3f(-80.0, -28.0, -96.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -93.0);
	glVertex3f(-80.0, -28.0, -93.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -90.0);
	glVertex3f(-80.0, -28.0, -90.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -87.0);
	glVertex3f(-80.0, -28.0, -87.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -84.0);
	glVertex3f(-80.0, -28.0, -84.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -81.0);
	glVertex3f(-80.0, -28.0, -81.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -78.0);
	glVertex3f(-80.0, -28.0, -78.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -75.0);
	glVertex3f(-80.0, -28.0, -75.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -72.0);
	glVertex3f(-80.0, -28.0, -72.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -69.0);
	glVertex3f(-80.0, -28.0, -69.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -66.0);
	glVertex3f(-80.0, -28.0, -66.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -63.0);
	glVertex3f(-80.0, -28.0, -63.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -60.0);
	glVertex3f(-80.0, -28.0, -60.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -57.0);
	glVertex3f(-80.0, -28.0, -57.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -54.0);
	glVertex3f(-80.0, -28.0, -54.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -51.0);
	glVertex3f(-80.0, -28.0, -51.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -48.0);
	glVertex3f(-80.0, -28.0, -48.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -45.0);
	glVertex3f(-80.0, -28.0, -45.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -42.0);
	glVertex3f(-80.0, -28.0, -42.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -39.0);
	glVertex3f(-80.0, -28.0, -39.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -36.0);
	glVertex3f(-80.0, -28.0, -36.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -33.0);
	glVertex3f(-80.0, -28.0, -33.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -30.0);
	glVertex3f(-80.0, -28.0, -30.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -27.0);
	glVertex3f(-80.0, -28.0, -27.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -24.0);
	glVertex3f(-80.0, -28.0, -24.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -21.0);
	glVertex3f(-80.0, -28.0, -21.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -18.0);
	glVertex3f(-80.0, -28.0, -18.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -15.0);
	glVertex3f(-80.0, -28.0, -15.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -12.0);
	glVertex3f(-80.0, -28.0, -12.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -9.0);
	glVertex3f(-80.0, -28.0, -9.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -6.0);
	glVertex3f(-80.0, -28.0, -6.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -3.0);
	glVertex3f(-80.0, -28.0, -3.0);
	glEnd();

	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, 0.0);
	glVertex3f(-80.0, -28.0, 0.0);
	glEnd();
	//kaca pintu depan kesamping
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-10.0, -36.0, 25.1);
	glVertex3f(10.0, -36.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-10.0, -37.0, 25.1);
	glVertex3f(10.0, -37.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-10.0, -38.0, 25.1);
	glVertex3f(10.0, -38.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-10.0, -39.0, 25.1);
	glVertex3f(10.0, -39.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-10.0, -40.0, 25.1);
	glVertex3f(10.0, -40.0, 25.1);
	glEnd();
	//kaca pintu depan kebawah
	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-10.0, -35.0, 25.1);
	glVertex3f(-10.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-9.0, -35.0, 25.1);
	glVertex3f(-9.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-8.0, -35.0, 25.1);
	glVertex3f(-8.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-7.0, -35.0, 25.1);
	glVertex3f(-7.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-6.0, -35.0, 25.1);
	glVertex3f(-6.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-5.0, -35.0, 25.1);
	glVertex3f(-5.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-4.0, -35.0, 25.1);
	glVertex3f(-4.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(0.0, -35.0, 25.1);
	glVertex3f(0.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(4.0, -35.0, 25.1);
	glVertex3f(4.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(5.0, -35.0, 25.1);
	glVertex3f(5.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(6.0, -35.0, 25.1);
	glVertex3f(6.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(7.0, -35.0, 25.1);
	glVertex3f(7.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(8.0, -35.0, 25.1);
	glVertex3f(8.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(9.0, -35.0, 25.1);
	glVertex3f(9.0, -50.0, 25.1);
	glEnd();

	glLineWidth(2.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(10.0, -35.0, 25.1);
	glVertex3f(10.0, -50.0, 25.1);
	glEnd();
	//kaca tembok kiri gede
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -0.1, 0.0);
	glVertex3f(-80.0, -0.1, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -3.0, 0.0);
	glVertex3f(-80.0, -3.0, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -6.0, 0.0);
	glVertex3f(-80.0, -6.0, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -9.0, 0.0);
	glVertex3f(-80.0, -9.0, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -12.0, 0.0);
	glVertex3f(-80.0, -12.0, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -15.0, 0.0);
	glVertex3f(-80.0, -15.0, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -18.0, 0.0);
	glVertex3f(-80.0, -18.0, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -21.0, 0.0);
	glVertex3f(-80.0, -21.0, -150.0);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -24.0, 0.0);
	glVertex3f(-80.0, -24.0, -150.0);
	glEnd();
	//frame tembok kecil kiri depan
	glLineWidth(10.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-40.0, -25.0, 10.0);
	glVertex3f(-11.0, -25.0, 10.0);
	glEnd();
	glLineWidth(10.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-40.0, -25.0, 10.0);
	glVertex3f(-40.0, -25.0, 0.0);
	glEnd();
	//kaca tembok depan kanan
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -0.1, 0.1);
	glVertex3f(80.0, -0.1, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -3.0, 0.1);
	glVertex3f(80.0, -3.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -6.0, 0.1);
	glVertex3f(80.0, -6.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -9.0, 0.1);
	glVertex3f(80.0, -9.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -12.0, 0.1);
	glVertex3f(80.0, -12.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -15.0, 0.1);
	glVertex3f(80.0, -15.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -18.0, 0.1);
	glVertex3f(80.0, -18.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -21.0, 0.1);
	glVertex3f(80.0, -21.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(20.0, -24.0, 0.1);
	glVertex3f(80.0, -24.0, 0.1);
	glEnd();

	//kaca tembok depan kiri kebawah
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, 0.1);
	glVertex3f(-80.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-77.0, 0.0, 0.1);
	glVertex3f(-77.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-74.0, 0.0, 0.1);
	glVertex3f(-74.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-71.0, 0.0, 0.1);
	glVertex3f(-71.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-68.0, 0.0, 0.1);
	glVertex3f(-68.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-65.0, 0.0, 0.1);
	glVertex3f(-65.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-62.0, 0.0, 0.1);
	glVertex3f(-62.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-59.0, 0.0, 0.1);
	glVertex3f(-59.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-56.0, 0.0, 0.1);
	glVertex3f(-56.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-53.0, 0.0, 0.1);
	glVertex3f(-53.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-50.0, 0.0, 0.1);
	glVertex3f(-50.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-47.0, 0.0, 0.1);
	glVertex3f(-47.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-44.0, 0.0, 0.1);
	glVertex3f(-44.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-41.0, 0.0, 0.1);
	glVertex3f(-41.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-38.0, 0.0, 0.1);
	glVertex3f(-38.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-35.0, 0.0, 0.1);
	glVertex3f(-35.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-32.0, 0.0, 0.1);
	glVertex3f(-32.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-29.0, 0.0, 0.1);
	glVertex3f(-29.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-26.0, 0.0, 0.1);
	glVertex3f(-26.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-23.0, 0.0, 0.1);
	glVertex3f(-23.0, -28.0, 0.1);
	glEnd();

	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-20.0, 0.0, 0.1);
	glVertex3f(-20.0, -28.0, 0.1);
	glEnd();
	//kaca tembok depan kiri kesamping
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -0.1, 0.1);
	glVertex3f(-20.0, -0.1, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -3.0, 0.1);
	glVertex3f(-20.0, -3.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -6.0, 0.1);
	glVertex3f(-20.0, -6.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -9.0, 0.1);
	glVertex3f(-20.0, -9.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -12.0, 0.1);
	glVertex3f(-20.0, -12.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -15.0, 0.1);
	glVertex3f(-20.0, -15.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -15.0, 0.1);
	glVertex3f(-20.0, -15.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -18.0, 0.1);
	glVertex3f(-20.0, -18.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -21.0, 0.1);
	glVertex3f(-20.0, -21.0, 0.1);
	glEnd();
	glLineWidth(3.0f);
	glBegin(GL_LINE_STRIP);
	glColor3f(0.0f, 0.0, 0.0);
	glVertex3f(-80.0, -24.0, 0.1);
	glVertex3f(-20.0, -24.0, 0.1);
	glEnd();
	//tembok kanan depan atas
	glBegin(GL_QUADS);
	glColor3f(0.06, 0.41, 0.48);
	glVertex3f(20.0, -28.0, 0.0);
	glVertex3f(20.0, 0.0, 0.0);
	glVertex3f(80.0, 0.0, 0.0);
	glVertex3f(80.0, -28.0, 0.0);
	//atap setengah bawah kanan
	glBegin(GL_QUADS);
	glColor3f(0.15, 0.41, 0.46);
	glVertex3f(80.0, -28.0, 0.0);
	glVertex3f(80.0, -28.0, -5.0);
	glVertex3f(20.0, -28.0, -5.0);
	glVertex3f(20.0, -28.0, 0.0);
	//tembok kanan setengah bawah
	glBegin(GL_QUADS);
	glColor3f(0.22, 0.66, 0.75);
	glVertex3f(75.0, -28.0, -5.0);
	glVertex3f(75.0, -50.0, -5.0);
	glVertex3f(20.0, -50.0, -5.0);
	glVertex3f(20.0, -28.0, -5.0);
	//tembok gede kanan atas
	glBegin(GL_QUADS);
	glColor3f(0.06, 0.41, 0.48);
	glVertex3f(80.0, -28.0, 0.0);
	glVertex3f(80.0, 0.0, 0.0);
	glVertex3f(80.0, 0.0, -150.0);
	glVertex3f(80.0, -28.0, -150.0);
	//atap tembok kanan yg gede setengah
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(80.0, -28.0, 0.0);
	glVertex3f(75.0, -28.0, 0.0);
	glVertex3f(75.0, -28.0, -150.0);
	glVertex3f(80.0, -28.0, -150.0);
	//tembok kanan yg gede bawah
	glColor3f(0.22, 0.66, 0.75);
	glVertex3f(75.0, -50.0, -5.0);
	glVertex3f(75.0, -28.0, -5.0);
	glVertex3f(75.0, -28.0, -150.0);
	glVertex3f(75.0, -50.0, -150.0);
	//tembok kiri setengah atas
	glBegin(GL_QUADS);
	glColor3f(0.06, 0.41, 0.48);
	glVertex3f(-20.0, -28.0, 0.0);
	glVertex3f(-20.0, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, 0.0);
	glVertex3f(-80.0, -28.0, 0.0);
	//atep setengah bawah
	glBegin(GL_QUADS);
	glColor3f(0.15, 0.41, 0.46);
	glVertex3f(-80.0, -28.0, 0.0);
	glVertex3f(-80.0, -28.0, -5.0);
	glVertex3f(-40.0, -28.0, -5.0);
	glVertex3f(-40.0, -28.0, 0.0);
	//tembok kiri setengah bawah
	glBegin(GL_QUADS);
	glColor3f(0.22, 0.66, 0.75);
	glVertex3f(-75.0, -28.0, -5.0);
	glVertex3f(-75.0, -50.0, -5.0);
	glVertex3f(-40.0, -50.0, -5.0);
	glVertex3f(-40.0, -28.0, -5.0);
	//tembok kiri yg gede atas
	glBegin(GL_QUADS);
	glColor3f(0.06, 0.41, 0.48);
	glVertex3f(-80.0, -28.0, 0.0);
	glVertex3f(-80.0, 0.0, 0.0);
	glVertex3f(-80.0, 0.0, -150.0);
	glVertex3f(-80.0, -28.0, -150.0);
	//atap tembok kiri yg gede setengah
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-80.0, -28.0, 0.0);
	glVertex3f(-75.0, -28.0, 0.0);
	glVertex3f(-75.0, -28.0, -150.0);
	glVertex3f(-80.0, -28.0, -150.0);
	//tembok kiri yg gede bawah
	glColor3f(0.22, 0.66, 0.75);
	glVertex3f(-75.0, -50.0, -5.0);
	glVertex3f(-75.0, -28.0, -5.0);
	glVertex3f(-75.0, -28.0, -150.0);
	glVertex3f(-75.0, -50.0, -150.0);
	//pintu masuk depan
	glBegin(GL_QUADS);
	glColor3f(0.22, 0.66, 0.75);
	glVertex3f(-10.0, -35.0, 25.0);
	glVertex3f(10.0, -35.0, 25.0);
	glVertex3f(10.0, -50.0, 25.0);
	glVertex3f(-10.0, -50.0, 25.0);
	//pintu masuk atap kotak bawah
	glBegin(GL_QUADS);
	glColor3f(0.82, 0.85, 0.86);
	glVertex3f(-12.0, -35.0, 28.0);
	glVertex3f(12.0, -35.0, 28.0);
	glVertex3f(12.0, -35.0, 17.0);
	glVertex3f(-12.0, -35.0, 17.0);
	//pintu masuk atap kotak atas
	glBegin(GL_QUADS);
	glColor3f(0.82, 0.85, 0.86);
	glVertex3f(-12.0, -33.0, 28.0);
	glVertex3f(12.0, -33.0, 28.0);
	glVertex3f(12.0, -33.0, 17.0);
	glVertex3f(-12.0, -33.0, 17.0);
	//pintu masuk atap kotak kiri
	glColor3f(0.82, 0.85, 0.86);
	glVertex3f(-12.0, -33.0, 28.0);
	glVertex3f(-12.0, -35.0, 28.0);
	glVertex3f(-12.0, -35.0, 17.0);
	glVertex3f(-12.0, -33.0, 17.0);
	//pintu masuk atap kotak kanan
	glColor3f(0.82, 0.85, 0.86);
	glVertex3f(12.0, -33.0, 28.0);
	glVertex3f(12.0, -35.0, 28.0);
	glVertex3f(12.0, -35.0, 17.0);
	glVertex3f(12.0, -33.0, 17.0);
	//pintu masuk atap kotak depan
	glColor3f(0.82, 0.85, 0.86);
	glVertex3f(-12.0, -33.0, 28.0);
	glVertex3f(12.0, -33.0, 28.0);
	glVertex3f(12.0, -35.0, 28.0);
	glVertex3f(-12.0, -35.0, 28.0);
	//pintu masuk kiri
	glBegin(GL_QUADS);
	glColor3f(0.22, 0.66, 0.75);
	glVertex3f(-10.0, -35.0, 25.0);
	glVertex3f(-10.0, -50.0, 25.0);
	glVertex3f(-10.0, -50.0, 17.0);
	glVertex3f(-10.0, -35.0, 17.0);
	//pintu masuk kanan
	glBegin(GL_QUADS);
	glColor3f(0.22, 0.66, 0.75);
	glVertex3f(10.0, -35.0, 25.0);
	glVertex3f(10.0, -50.0, 25.0);
	glVertex3f(10.0, -50.0, 17.0);
	glVertex3f(10.0, -35.0, 17.0);
	//tembok kecil kiri atap
	glBegin(GL_QUADS);
	glColor3f(0.11, 0.46, 0.52);
	glVertex3f(-40.0, -25.0, 10.0);
	glVertex3f(-11.0, -25.0, 10.0);
	glVertex3f(-11.0, -25.0, -5.0);
	glVertex3f(-40.0, -25.0, -5.0);
	//tembok kecil kiri depan
	glBegin(GL_QUADS);
	glColor3f(0.11, 0.46, 0.52);
	glVertex3f(-11.0, -50.0, 10.0);
	glVertex3f(-11.0, -25.0, 10.0);
	glVertex3f(-40.0, -25.0, 10.0);
	glVertex3f(-40.0, -50.0, 10.0);
	//tembok kecil kiri kiri
	glBegin(GL_QUADS);
	glColor3f(0.11,0.46,0.52);
	glVertex3f(-40.0, -50.0, 10.0);
	glVertex3f(-40.0, -25.0, 10.0);
	glVertex3f(-40.0, -25.0, -5.0);
	glVertex3f(-40.0, -50.0, -5.0);
	//bendera indonesia
	//gagang depan
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-40.0, -10.0, 15.0);
	glVertex3f(-39.0, -10.0, 15.0);
	glVertex3f(-39.0, -50.0, 15.0);
	glVertex3f(-40.0, -50.0, 15.0);
	//gagang kiri
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-40.0, -10.0, 15.0);
	glVertex3f(-40.0, -10.0, 14.0);
	glVertex3f(-40.0, -50.0, 14.0);
	glVertex3f(-40.0, -50.0, 15.0);
	//gagang kanan
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-39.0, -10.0, 15.0);
	glVertex3f(-39.0, -10.0, 14.0);
	glVertex3f(-39.0, -50.0, 14.0);
	glVertex3f(-39.0, -50.0, 15.0);
	//gagang belakang
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-40.0, -10.0, 14.0);
	glVertex3f(-39.0, -10.0, 14.0);
	glVertex3f(-39.0, -50.0, 14.0);
	glVertex3f(-40.0, -50.0, 14.0);
	//merah depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-50.0, -10.0, 15.0);
	glVertex3f(-40.0, -10.0, 15.0);
	glVertex3f(-40.0, -15.0, 15.0);
	glVertex3f(-50.0, -15.0, 15.0);
	//merah belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-50.0, -10.0, 14.0);
	glVertex3f(-40.0, -10.0, 14.0);
	glVertex3f(-40.0, -15.0, 14.0);
	glVertex3f(-50.0, -15.0, 14.0);
	//merah kiri
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-50.0, -10.0, 15.0);
	glVertex3f(-50.0, -10.0, 14.0);
	glVertex3f(-50.0, -15.0, 14.0);
	glVertex3f(-50.0, -15.0, 15.0);
	//merah atas
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-40.0, -10.0, 15.0);
	glVertex3f(-40.0, -10.0, 14.0);
	glVertex3f(-50.0, -10.0, 14.0);
	glVertex3f(-50.0, -10.0, 15.0);
	//putih depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, -15.0, 15.0);
	glVertex3f(-40.0, -15.0, 15.0);
	glVertex3f(-40.0, -20.0, 15.0);
	glVertex3f(-50.0, -20.0, 15.0);
	//putih belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, -15.0, 14.0);
	glVertex3f(-40.0, -15.0, 14.0);
	glVertex3f(-40.0, -20.0, 14.0);
	glVertex3f(-50.0, -20.0, 14.0);
	//putih kiri
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, -15.0, 15.0);
	glVertex3f(-50.0, -15.0, 14.0);
	glVertex3f(-50.0, -20.0, 14.0);
	glVertex3f(-50.0, -20.0, 15.0);
	//putih bawah
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-40.0, -20.0, 15.0);
	glVertex3f(-40.0, -20.0, 14.0);
	glVertex3f(-50.0, -20.0, 14.0);
	glVertex3f(-50.0, -20.0, 15.0);

	//bendera indonesia 2
	//gagang depan
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-60.0, -10.0, 15.0);
	glVertex3f(-59.0, -10.0, 15.0);
	glVertex3f(-59.0, -50.0, 15.0);
	glVertex3f(-60.0, -50.0, 15.0);
	//gagang kiri
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-60.0, -10.0, 15.0);
	glVertex3f(-60.0, -10.0, 14.0);
	glVertex3f(-60.0, -50.0, 14.0);
	glVertex3f(-60.0, -50.0, 15.0);
	//gagang kanan
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-59.0, -10.0, 15.0);
	glVertex3f(-59.0, -10.0, 14.0);
	glVertex3f(-59.0, -50.0, 14.0);
	glVertex3f(-59.0, -50.0, 15.0);
	//gagang belakang
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.0, 0.0);
	glVertex3f(-60.0, -10.0, 14.0);
	glVertex3f(-59.0, -10.0, 14.0);
	glVertex3f(-59.0, -50.0, 14.0);
	glVertex3f(-60.0, -50.0, 14.0);
	//merah depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-70.0, -10.0, 15.0);
	glVertex3f(-60.0, -10.0, 15.0);
	glVertex3f(-60.0, -15.0, 15.0);
	glVertex3f(-70.0, -15.0, 15.0);
	//merah belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-70.0, -10.0, 14.0);
	glVertex3f(-60.0, -10.0, 14.0);
	glVertex3f(-60.0, -15.0, 14.0);
	glVertex3f(-70.0, -15.0, 14.0);
	//merah kiri
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-70.0, -10.0, 15.0);
	glVertex3f(-70.0, -10.0, 14.0);
	glVertex3f(-70.0, -15.0, 14.0);
	glVertex3f(-70.0, -15.0, 15.0);
	//merah atas
	glBegin(GL_QUADS);
	glColor3f(1.0, 0.0, 1.0);
	glVertex3f(-60.0, -10.0, 15.0);
	glVertex3f(-60.0, -10.0, 14.0);
	glVertex3f(-70.0, -10.0, 14.0);
	glVertex3f(-70.0, -10.0, 15.0);
	//putih depan
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, -15.0, 15.0);
	glVertex3f(-60.0, -15.0, 15.0);
	glVertex3f(-60.0, -20.0, 15.0);
	glVertex3f(-70.0, -20.0, 15.0);
	//putih belakang
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, -15.0, 14.0);
	glVertex3f(-60.0, -15.0, 14.0);
	glVertex3f(-60.0, -20.0, 14.0);
	glVertex3f(-70.0, -20.0, 14.0);
	//putih kiri
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, -15.0, 15.0);
	glVertex3f(-70.0, -15.0, 14.0);
	glVertex3f(-70.0, -20.0, 14.0);
	glVertex3f(-70.0, -20.0, 15.0);
	//putih bawah
	glBegin(GL_QUADS);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-60.0, -20.0, 15.0);
	glVertex3f(-60.0, -20.0, 14.0);
	glVertex3f(-70.0, -20.0, 14.0);
	glVertex3f(-70.0, -20.0, 15.0);
	// tembok belakang
	glColor3f(0.06, 0.41, 0.48);
	glVertex3f(-75.0, -50.0, -150.0);
	glVertex3f(-75.0, 0.0, -150.0);
	glVertex3f(75.0, 0.0, -150.0);
	glVertex3f(75.0, -50.0, -150.0);
	// atap
	glColor3f(0.24, 0.64, 0.72);
	glVertex3f(-80.0, 0.0, 0.0);
	glVertex3f(80.0, 0.0, 0.0);
	glVertex3f(80.0, 0.0, -150.0);
	glVertex3f(-80.0, 0.0, -150.0);
	//bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-80.0, -50.0, 0.0);
	glVertex3f(80.0, -50.0, 0.0);
	glVertex3f(80.0, -50.0, -150.0);
	glVertex3f(-80.0, -50.0, -150.0);
	//atap tulisan coex
	glColor3f(0.15, 0.54, 0.62);
	glVertex3f(-80.0, -50.0, 0.0);
	glVertex3f(80.0, -50.0, 0.0);
	glVertex3f(80.0, -50.0, -150.0);
	glVertex3f(-80.0, -50.0, -150.0);
	glEnd();

    glBegin(GL_QUADS);//tembok kananluar
    glColor3f(0.9,0.9,0.9);
    glVertex3f(20.0, -50.0, 0.0);
    glVertex3f(20.0, 0.0, 0.0);
    glVertex3f(80.0, 0.0, 0.0);
    glVertex3f(80.0, -50.0, 0.0);

    glBegin(GL_QUADS);//tembok kanan dalam
    glColor3f(0.9,0.9,0.9);
    glVertex3f(80.0, -50.0, 0.0);
    glVertex3f(80.0, 0.0, 0.0);
    glVertex3f(80.0, 0.0, -150.0);
    glVertex3f(80.0, -50.0, -150.0);

    glBegin(GL_QUADS);//tembok kiri
    glColor3f(1.0, 1.0, .0);
    glVertex3f(-20.0, -50.0, 0.0);
    glVertex3f(-20.0, 0.0, 0.0);
    glVertex3f(-80.0, 0.0, 0.0);
    glVertex3f(-80.0, -50.0, 0.0);

    glBegin(GL_QUADS);//dalam kiri
    glColor3f(0.9,0.9,0.9);
    glVertex3f(-80.0, -50.0, 0.0);
    glVertex3f(-80.0, 0.0, 0.0);
    glVertex3f(-80.0, 0.0, -150.0);
    glVertex3f(-80.0, -50.0, -150.0);

    glBegin(GL_QUADS);//tembok kecil kiri
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-11.0, -50.0, 10.0);
    glVertex3f(-11.0, -25.0, 10.0);
    glVertex3f(-40.0, -25.0, 10.0);
    glVertex3f(-40.0, -50.0, 10.0);
    glBegin(GL_QUADS);
    glColor3f(0.75, 0.75, 0.75);
    glVertex3f(-40.0, -50.0, 10.0);
    glVertex3f(-40.0, -25.0, 10.0);
    glVertex3f(-40.0, -25.0, 0.0);
    glVertex3f(-40.0, -50.0, 0.0);

    glColor3f(0.8,0.8,0.8);// tembok belakang
    glVertex3f(-80.0, -50.0, -150.0);
    glVertex3f(-80.0, 0.0, -150.0);
    glVertex3f(80.0, 0.0, -150.0);
    glVertex3f(80.0, -50.0, -150.0);

    glColor3f(0.9,0.9,0.9);// atap
    glVertex3f(-80.0, 0.0, 0.0);
    glVertex3f(80.0, 0.0, 0.0);
    glVertex3f(80.0, 0.0, -150.0);
    glVertex3f(-80.0, 0.0, -150.0);

    glColor3f(0,0,0);//bawah
    glVertex3f(-80.0, -50.0, 0.0);
    glVertex3f(80.0, -50.0, 0.0);
    glVertex3f(80.0, -50.0, -150.0);
    glVertex3f(-80.0, -50.0, -150.0);

    glColor3f(0.95,0.95,0.95);//lantai & tulisan coex
    glVertex3f(-80.0, -50.0, 0.0);
    glVertex3f(80.0, -50.0, 0.0);
    glVertex3f(80.0, -50.0, -150.0);
    glVertex3f(-80.0, -50.0, -150.0);
    glEnd();

    glLineWidth(2.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-80.0, -50.0, 0.0);
    glVertex3f(-80.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-70.0, -50.0, 0.0);
    glVertex3f(-70.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-60.0, -50.0, 0.0);
    glVertex3f(-60.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-50.0, -50.0, 0.0);
    glVertex3f(-50.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-40.0, -50.0, 0.0);
    glVertex3f(-40.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-30.0, -50.0, 0.0);
    glVertex3f(-30.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-20.0, -50.0, 0.0);
    glVertex3f(-20.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(-10.0, -50.0, 0.0);
    glVertex3f(-10.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(0.0, -50.0, 0.0);
    glVertex3f(0.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(10.0, -50.0, 0.0);
    glVertex3f(10.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(20.0, -50.0, 0.0);
    glVertex3f(20.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(30.0, -50.0, 0.0);
    glVertex3f(30.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(40.0, -50.0, 0.0);
    glVertex3f(40.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(50.0, -50.0, 0.0);
    glVertex3f(50.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(60.0, -50.0, 0.0);
    glVertex3f(60.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(70.0, -50.0, 0.0);
    glVertex3f(70.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, 0.0);
    glVertex3f(80.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -150.0);
    glVertex3f(-80.0, -50.0, -150.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -140.0);
    glVertex3f(-80.0, -50.0, -140.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -130.0);
    glVertex3f(-80.0, -50.0, -130.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -120.0);
    glVertex3f(-80.0, -50.0, -120.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -110.0);
    glVertex3f(-80.0, -50.0, -110.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -100.0);
    glVertex3f(-80.0, -50.0, -100.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -90.0);
    glVertex3f(-80.0, -50.0, -90.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -80.0);
    glVertex3f(-80.0, -50.0, -80.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -70.0);
    glVertex3f(-80.0, -50.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -60.0);
    glVertex3f(-80.0, -50.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -50.0);
    glVertex3f(-80.0, -50.0, -50.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -40.0);
    glVertex3f(-80.0, -50.0, -40.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -30.0);
    glVertex3f(-80.0, -50.0, -30.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -20.0);
    glVertex3f(-80.0, -50.0, -20.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, -10.0);
    glVertex3f(-80.0, -50.0, -10.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(0.6, 0.6, 0.6);
    glVertex3f(80.0, -50.0, 0.0);
    glVertex3f(-80.0, -50.0, 0.0);
    glEnd();

    //perpustakaan
    glBegin(GL_QUADS);//belakang
    glColor3f(0.62,0.44,0);
    glVertex3f(50.0, -50.0, -70);
    glVertex3f(50.0, 0.0, -70);
    glVertex3f(80.0, 0.0, -70);
    glVertex3f(80.0, -50.0, -70);
     glBegin(GL_QUADS);//samping
    glColor3f(0.62,0.44,0);
    glVertex3f(50.0, -50.0, -70);
    glVertex3f(50.0, 0.0, -70);
    glVertex3f(40.0, 0.0, -60);
    glVertex3f(40.0, -50.0, -60);
    glBegin(GL_QUADS);//depan
    glColor3f(0.62,0.44,0);
    glVertex3f(40.0, -50.0, -60);
    glVertex3f(40.0, 0.0, -60);
    glVertex3f(30.0, 0.0, 0);
    glVertex3f(30.0, -50.0, 0);
    glBegin(GL_QUADS);//atas1
    glColor3f(0.62,0.44,0);
    glVertex3f(30.0, 0.0, 0);
    glVertex3f(40.0, 0.0, -60);
    glVertex3f(50.0, 0.0, -70);
    glVertex3f(80.0, 0.0, -70);
    glBegin(GL_QUADS);//atas2
    glColor3f(0.62,0.44,0);
    glVertex3f(30.0, 0.0, 0);
    glVertex3f(80.0, 0.0, -70);
    glVertex3f(80.0, 0.0, 0);
    glVertex3f(30.0, 0.0, 0);
    glBegin(GL_QUADS);//dindingdpn
    glColor3f(0.62,0.44,0);
    glVertex3f(30.0, -50.0, 0);
    glVertex3f(30.0, 0.0, 0);
    glVertex3f(80.0, 0.0, 0);
    glVertex3f(80.0, -50.0, 0);
    glBegin(GL_QUADS);//dindingsamping
    glColor3f(0.62,0.44,0);
    glVertex3f(80.0, -50.0, -70);
    glVertex3f(80.0, 0.0, -70);
    glVertex3f(80.0, 0.0, 0);
    glVertex3f(80.0, -50.0, 0);
    glEnd();

    //perpustakaan2
    glBegin(GL_QUADS);//belakang
    glColor3f(0.62,0.44,0);
    glVertex3f(-50.0, -50.0, -70);
    glVertex3f(-50.0, 0.0, -70);
    glVertex3f(-80.0, 0.0, -70);
    glVertex3f(-80.0, -50.0, -70);
     glBegin(GL_QUADS);//samping
    glColor3f(0.62,0.44,0);
    glVertex3f(-50.0, -50.0, -70);
    glVertex3f(-50.0, 0.0, -70);
    glVertex3f(-40.0, 0.0, -60);
    glVertex3f(-40.0, -50.0, -60);
    glBegin(GL_QUADS);//depan
    glColor3f(0.62,0.44,0);
    glVertex3f(-40.0, -50.0, -60);
    glVertex3f(-40.0, 0.0, -60);
    glVertex3f(-30.0, 0.0, 0);
    glVertex3f(-30.0, -50.0, 0);
    glBegin(GL_QUADS);//atas1
    glColor3f(0.62,0.44,0);
    glVertex3f(-30.0, 0.0, 0);
    glVertex3f(-40.0, 0.0, -60);
    glVertex3f(-50.0, 0.0, -70);
    glVertex3f(-80.0, 0.0, -70);
    glBegin(GL_QUADS);//atas2
    glColor3f(0.62,0.44,0);
    glVertex3f(-30.0, 0.0, 0);
    glVertex3f(-80.0, 0.0, -70);
    glVertex3f(-80.0, 0.0, 0);
    glVertex3f(-30.0, 0.0, 0);
    glBegin(GL_QUADS);//dindingdpn
    glColor3f(0.62,0.44,0);
    glVertex3f(-30.0, -50.0, 0);
    glVertex3f(-30.0, 0.0, 0);
    glVertex3f(-80.0, 0.0, 0);
    glVertex3f(-80.0, -50.0, 0);
    glBegin(GL_QUADS);//dindingsamping
    glColor3f(0.62,0.44,0);
    glVertex3f(-80.0, -50.0, -70);
    glVertex3f(-80.0, 0.0, -70);
    glVertex3f(-80.0, 0.0, 0);
    glVertex3f(-80.0, -50.0, 0);
    glEnd();

    //garisperpus
    glLineWidth(4.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -50.0, 0.0);
    glVertex3f(40.0, -50.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -45.0, 0.0);
    glVertex3f(40.0, -45.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -40.0, 0.0);
    glVertex3f(40.0, -40.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -35.0, 0.0);
    glVertex3f(40.0, -35.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -30.0, 0.0);
    glVertex3f(40.0, -30.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -25.0, 0.0);
    glVertex3f(40.0, -25.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -20.0, 0.0);
    glVertex3f(40.0, -20.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -15.0, 0.0);
    glVertex3f(40.0, -15.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -10.0, 0.0);
    glVertex3f(40.0, -10.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, -5.0, 0.0);
    glVertex3f(40.0, -5.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(30.0, 0.0, 0.0);
    glVertex3f(40.0, 0.0, -60.0);
    glEnd();
    //
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -50.0, -70.0);
    glVertex3f(40.0, -50.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -45.0, -70.0);
    glVertex3f(40.0, -45.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -40.0, -70.0);
    glVertex3f(40.0, -40.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -35.0, -70.0);
    glVertex3f(40.0, -35.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -30.0, -70.0);
    glVertex3f(40.0, -30.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -25.0, -70.0);
    glVertex3f(40.0, -25.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -20.0, -70.0);
    glVertex3f(40.0, -20.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -15.0, -70.0);
    glVertex3f(40.0, -15.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -10.0, -70.0);
    glVertex3f(40.0, -10.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -5.0, -70.0);
    glVertex3f(40.0, -5.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, 0.0, -70.0);
    glVertex3f(40.0, 0.0, -60.0);
    glEnd();
    //
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -50.0, -70.0);
    glVertex3f(80.0, -50.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -45.0, -70.0);
    glVertex3f(80.0, -45.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -40.0, -70.0);
    glVertex3f(80.0, -40.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -35.0, -70.0);
    glVertex3f(80.0, -35.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -30.0, -70.0);
    glVertex3f(80.0, -30.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -25.0, -70.0);
    glVertex3f(80.0, -25.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -20.0, -70.0);
    glVertex3f(80.0, -20.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -15.0, -70.0);
    glVertex3f(80.0, -15.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -10.0, -70.0);
    glVertex3f(80.0, -10.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, -5.0, -70.0);
    glVertex3f(80.0, -5.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(50.0, 0.0, -70.0);
    glVertex3f(80.0, 0.0, -70.0);
    glEnd();

    //garisperpus2
    glLineWidth(4.0f);
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -50.0, 0.0);
    glVertex3f(-40.0, -50.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -45.0, 0.0);
    glVertex3f(-40.0, -45.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -40.0, 0.0);
    glVertex3f(-40.0, -40.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -35.0, 0.0);
    glVertex3f(-40.0, -35.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -30.0, 0.0);
    glVertex3f(-40.0, -30.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -25.0, 0.0);
    glVertex3f(-40.0, -25.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -20.0, 0.0);
    glVertex3f(-40.0, -20.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -15.0, 0.0);
    glVertex3f(-40.0, -15.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -10.0, 0.0);
    glVertex3f(-40.0, -10.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, -5.0, 0.0);
    glVertex3f(-40.0, -5.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-30.0, 0.0, 0.0);
    glVertex3f(-40.0, 0.0, -60.0);
    glEnd();
    //
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -50.0, -70.0);
    glVertex3f(-40.0, -50.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -45.0, -70.0);
    glVertex3f(-40.0, -45.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -40.0, -70.0);
    glVertex3f(-40.0, -40.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -35.0, -70.0);
    glVertex3f(-40.0, -35.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -30.0, -70.0);
    glVertex3f(-40.0, -30.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -25.0, -70.0);
    glVertex3f(-40.0, -25.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -20.0, -70.0);
    glVertex3f(-40.0, -20.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -15.0, -70.0);
    glVertex3f(-40.0, -15.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -10.0, -70.0);
    glVertex3f(-40.0, -10.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -5.0, -70.0);
    glVertex3f(-40.0, -5.0, -60.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, 0.0, -70.0);
    glVertex3f(-40.0, 0.0, -60.0);
    glEnd();
    //
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -50.0, -70.0);
    glVertex3f(-80.0, -50.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -45.0, -70.0);
    glVertex3f(-80.0, -45.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -40.0, -70.0);
    glVertex3f(-80.0, -40.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -35.0, -70.0);
    glVertex3f(-80.0, -35.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -30.0, -70.0);
    glVertex3f(-80.0, -30.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -25.0, -70.0);
    glVertex3f(-80.0, -25.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -20.0, -70.0);
    glVertex3f(-80.0, -20.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -15.0, -70.0);
    glVertex3f(-80.0, -15.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -10.0, -70.0);
    glVertex3f(-80.0, -10.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, -5.0, -70.0);
    glVertex3f(-80.0, -5.0, -70.0);
    glEnd();
    glBegin(GL_LINE_STRIP);
    glColor3f(1,1,0);
    glVertex3f(-50.0, 0.0, -70.0);
    glVertex3f(-80.0, 0.0, -70.0);
    glEnd();

    //lantai2
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.0, -23.0, -30.0);
    glVertex3f(-30.0, -23.0, 0.0);
    glVertex3f(30.0, -23.0, 0.0);
    glVertex3f(35.0, -23.0, -30.0);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-50.0, -23.0, -70.0);
    glVertex3f(-50.0, -23.0, -120.0);
    glVertex3f(-80.0, -23.0, -120.0);
    glVertex3f(-80.0, -23.0, -70.0);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-80.0, -23.0, -120.0);
    glVertex3f(80.0, -23.0, -120.0);
    glVertex3f(80.0, -23.0, -150.0);
    glVertex3f(-80.0, -23.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(50.0, -23.0, -120.0);
    glVertex3f(80.0, -23.0, -120.0);
    glVertex3f(80.0, -23.0, -70.0);
    glVertex3f(50.0, -23.0, -70.0);

    glEnd();
    //lantai2atas
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-35.0, -27.0, -30.0);
    glVertex3f(-30.0, -27.0, 0.0);
    glVertex3f(30.0, -27.0, 0.0);
    glVertex3f(35.0, -27.0, -30.0);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-50.0, -27.0, -70.0);
    glVertex3f(-50.0, -27.0, -120.0);
    glVertex3f(-80.0, -27.0, -120.0);
    glVertex3f(-80.0, -27.0, -70.0);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(-80.0, -27.0, -120.0);
    glVertex3f(80.0, -27.0, -120.0);
    glVertex3f(80.0, -27.0, -150.0);
    glVertex3f(-80.0, -27.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(1,1,1);
    glVertex3f(50.0, -27.0, -120.0);
    glVertex3f(80.0, -27.0, -120.0);
    glVertex3f(80.0, -27.0, -70.0);
    glVertex3f(50.0, -27.0, -70.0);
    glEnd();
    //lantai2tebal
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(-35.0, -23.0, -30.0);
    glVertex3f(-35.0, -27.0, -30.0);
    glVertex3f(35.0, -27.0, -30.0);
    glVertex3f(35.0, -23.0, -30.0);
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(-50.0, -23.0, -70.0);
    glVertex3f(-50.0, -27.0, -70.0);
    glVertex3f(-50.0, -27.0, -120.0);
    glVertex3f(-50.0, -23.0, -120.0);
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(-50.0, -23.0, -120.0);
    glVertex3f(50.0, -23.0, -120.0);
    glVertex3f(50.0, -27.0, -120.0);
    glVertex3f(-50.0, -27.0, -120.0);
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(50.0, -23.0, -120.0);
    glVertex3f(50.0, -27.0, -120.0);
    glVertex3f(50.0, -27.0, -70.0);
    glVertex3f(50.0, -23.0, -70.0);
    glEnd();
    //lantai2tebal2
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(-30.0, -23.0, 0.0);
    glVertex3f(-30.0, -27.0, 0.0);
    glVertex3f(30.0, -27.0, 0.0);
    glVertex3f(30.0, -23.0, 0.0);
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(-80.0, -23.0, -70.0);
    glVertex3f(-80.0, -27.0, -70.0);
    glVertex3f(-80.0, -27.0, -150.0);
    glVertex3f(-80.0, -23.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(-80.0, -23.0, -150.0);
    glVertex3f(80.0, -23.0, -150.0);
    glVertex3f(80.0, -27.0, -150.0);
    glVertex3f(-80.0, -27.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.96,0.96,0.96);
    glVertex3f(80.0, -23.0, -150.0);
    glVertex3f(80.0, -27.0, -150.0);
    glVertex3f(80.0, -27.0, -70.0);
    glVertex3f(80.0, -23.0, -70.0);
    glEnd();

    //pagar lantai 2
    glBegin(GL_QUADS);
    glColor3f(0.81,0.93,1);
    glVertex3f(-35.0, -23.0, -30.0);
    glVertex3f(-35.0, -10.0, -30.0);
    glVertex3f(35.0, -10.0, -30.0);
    glVertex3f(35.0, -23.0, -30.0);
    glBegin(GL_QUADS);
    glColor3f(0.81,0.93,1);
    glVertex3f(-50.0, -23.0, -70.0);
    glVertex3f(-50.0, -10.0, -70.0);
    glVertex3f(-50.0, -10.0, -120.0);
    glVertex3f(-50.0, -23.0, -120.0);
    glBegin(GL_QUADS);
    glColor3f(0.81,0.93,1);
    glVertex3f(-50.0, -23.0, -120.0);
    glVertex3f(50.0, -23.0, -120.0);
    glVertex3f(50.0, -10.0, -120.0);
    glVertex3f(-50.0, -10.0, -120.0);
    glBegin(GL_QUADS);
    glColor3f(0.81,0.93,1);
    glVertex3f(50.0, -23.0, -120.0);
    glVertex3f(50.0, -10.0, -120.0);
    glVertex3f(50.0, -10.0, -90.0);
    glVertex3f(50.0, -23.0, -90.0);
    glEnd();
    //tangga
    /*glBegin(GL_QUADS);//dasar
    glColor3f(1,0.9,0.67);
    glVertex3f(15.0, -50.0, -70.0);
    glVertex3f(15.0, -50.0, -90.0);
    glVertex3f(50.0, -23.0, -90.0);
    glVertex3f(50.0, -23.0, -70.0);*/
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(15.0, -50.0, -70.0);
    glVertex3f(15.0, -50.0, -90.0);
    glVertex3f(15.0, -46.0, -90.0);
    glVertex3f(15.0, -46.0, -70.0);
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(20.0, -42.0, -70.0);
    glVertex3f(20.0, -42.0, -90.0);
    glVertex3f(20.0, -45.0, -90.0);
    glVertex3f(20.0, -45.0, -70.0);
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(25.0, -42.0, -70.0);
    glVertex3f(25.0, -42.0, -90.0);
    glVertex3f(25.0, -39.0, -90.0);
    glVertex3f(25.0, -39.0, -70.0);
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(30.0, -39.0, -70.0);
    glVertex3f(30.0, -39.0, -90.0);
    glVertex3f(30.0, -36.0, -90.0);
    glVertex3f(30.0, -36.0, -70.0);
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(35.0, -36.0, -70.0);
    glVertex3f(35.0, -36.0, -90.0);
    glVertex3f(35.0, -33.0, -90.0);
    glVertex3f(35.0, -33.0, -70.0);
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(40.0, -33.0, -70.0);
    glVertex3f(40.0, -33.0, -90.0);
    glVertex3f(40.0, -30.0, -90.0);
    glVertex3f(40.0, -30.0, -70.0);
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(45.0, -27.0, -70.0);
    glVertex3f(45.0, -27.0, -90.0);
    glVertex3f(45.0, -30.0, -90.0);
    glVertex3f(45.0, -30.0, -70.0);
    glBegin(GL_QUADS);//miring
    glColor3f(0.77,0.73,0.64);
    glVertex3f(50.0, -27.0, -70.0);
    glVertex3f(50.0, -27.0, -90.0);
    glVertex3f(50.0, -23.0, -90.0);
    glVertex3f(50.0, -23.0, -70.0);
    glBegin(GL_QUADS);//datar
    glColor3f(0.66,0.63,0.56);
    glVertex3f(15.0, -46.0, -70.0);
    glVertex3f(15.0, -46.0, -90.0);
    glVertex3f(20.0, -45.0, -90.0);
    glVertex3f(20.0, -45.0, -70.0);
    glBegin(GL_QUADS);//datar
    glColor3f(0.66,0.63,0.56);
    glVertex3f(25.0, -42.0, -70.0);
    glVertex3f(25.0, -42.0, -90.0);
    glVertex3f(20.0, -42.0, -90.0);
    glVertex3f(20.0, -42.0, -70.0);
    glBegin(GL_QUADS);//datar
    glColor3f(0.66,0.63,0.56);
    glVertex3f(25.0, -39.0, -70.0);
    glVertex3f(25.0, -39.0, -90.0);
    glVertex3f(30.0, -39.0, -90.0);
    glVertex3f(30.0, -39.0, -70.0);
    glBegin(GL_QUADS);//datar
    glColor3f(0.66,0.63,0.56);
    glVertex3f(35.0, -36.0, -70.0);
    glVertex3f(35.0, -36.0, -90.0);
    glVertex3f(30.0, -36.0, -90.0);
    glVertex3f(30.0, -36.0, -70.0);
    glBegin(GL_QUADS);//datar
    glColor3f(0.66,0.63,0.56);
    glVertex3f(35.0, -33.0, -70.0);
    glVertex3f(35.0, -33.0, -90.0);
    glVertex3f(40.0, -33.0, -90.0);
    glVertex3f(40.0, -33.0, -70.0);
    glBegin(GL_QUADS);//datar
    glColor3f(0.66,0.63,0.56);
    glVertex3f(45.0, -30.0, -70.0);
    glVertex3f(45.0, -30.0, -90.0);
    glVertex3f(40.0, -30.0, -90.0);
    glVertex3f(40.0, -30.0, -70.0);
    glBegin(GL_QUADS);//datar
    glColor3f(0.66,0.63,0.56);
    glVertex3f(45.0, -27.0, -70.0);
    glVertex3f(45.0, -27.0, -90.0);
    glVertex3f(50.0, -27.0, -90.0);
    glVertex3f(50.0, -27.0, -70.0);
    glBegin(GL_QUADS);//pagar
    glColor3f(0.81,0.93,1);
    glVertex3f(10.0, -50.0, -70.0);
    glVertex3f(17.0, -50.0, -70.0);
    glVertex3f(50.0, -27.0, -70.0);
    glVertex3f(50.0, -20.0, -70.0);
    glBegin(GL_QUADS);//pagar
    glColor3f(0.81,0.93,1);
    glVertex3f(10.0, -50.0, -90.0);
    glVertex3f(17.0, -50.0, -90.0);
    glVertex3f(50.0, -27.0, -90.0);
    glVertex3f(50.0, -20.0, -90.0);
    glEnd();

    //kios
    glBegin(GL_QUADS);//1
    glColor3f(0.85,0.61,0.28);
    glVertex3f(50.0, -50.0, -95.0);
    glVertex3f(80.0, -50.0, -95.0);
    glVertex3f(80.0, -27.0, -95.0);
    glVertex3f(50.0, -27.0, -95.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(50.0, -50.0, -92.0);
    glVertex3f(80.0, -50.0, -92.0);
    glVertex3f(80.0, -27.0, -92.0);
    glVertex3f(50.0, -27.0, -92.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(50.0, -50.0, -95.0);
    glVertex3f(50.0, -27.0, -95.0);
    glVertex3f(50.0, -27.0, -92.0);
    glVertex3f(50.0, -50.0, -92.0);
    glBegin(GL_QUADS);//2
    glColor3f(0.85,0.61,0.28);
    glVertex3f(50.0, -50.0, -120.0);
    glVertex3f(80.0, -50.0, -120.0);
    glVertex3f(80.0, -27.0, -120.0);
    glVertex3f(50.0, -27.0, -120.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(50.0, -50.0, -122.0);
    glVertex3f(80.0, -50.0, -122.0);
    glVertex3f(80.0, -27.0, -122.0);
    glVertex3f(50.0, -27.0, -122.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(50.0, -50.0, -120.0);
    glVertex3f(50.0, -27.0, -120.0);
    glVertex3f(50.0, -27.0, -122.0);
    glVertex3f(50.0, -50.0, -122.0);
    glBegin(GL_QUADS);//3
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-50.0, -50.0, -95.0);
    glVertex3f(-80.0, -50.0, -95.0);
    glVertex3f(-80.0, -27.0, -95.0);
    glVertex3f(-50.0, -27.0, -95.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-50.0, -50.0, -97.0);
    glVertex3f(-80.0, -50.0, -97.0);
    glVertex3f(-80.0, -27.0, -97.0);
    glVertex3f(-50.0, -27.0, -97.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-50.0, -50.0, -95.0);
    glVertex3f(-50.0, -27.0, -95.0);
    glVertex3f(-50.0, -27.0, -97.0);
    glVertex3f(-50.0, -50.0, -97.0);
    glBegin(GL_QUADS);//4
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-50.0, -50.0, -120.0);
    glVertex3f(-80.0, -50.0, -120.0);
    glVertex3f(-80.0, -27.0, -120.0);
    glVertex3f(-50.0, -27.0, -120.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-50.0, -50.0, -122.0);
    glVertex3f(-80.0, -50.0, -122.0);
    glVertex3f(-80.0, -27.0, -122.0);
    glVertex3f(-50.0, -27.0, -122.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-50.0, -50.0, -120.0);
    glVertex3f(-50.0, -27.0, -120.0);
    glVertex3f(-50.0, -27.0, -122.0);
    glVertex3f(-50.0, -50.0, -122.0);
    glBegin(GL_QUADS);//5
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-40.0, -50.0, -120.0);
    glVertex3f(-40.0, -27.0, -120.0);
    glVertex3f(-40.0, -27.0, -150.0);
    glVertex3f(-40.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-38.0, -50.0, -120.0);
    glVertex3f(-38.0, -27.0, -120.0);
    glVertex3f(-38.0, -27.0, -150.0);
    glVertex3f(-38.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-38.0, -50.0, -120.0);
    glVertex3f(-38.0, -27.0, -120.0);
    glVertex3f(-40.0, -27.0, -120.0);
    glVertex3f(-40.0, -50.0, -120.0);
    glBegin(GL_QUADS);//6
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-15.0, -50.0, -120.0);
    glVertex3f(-15.0, -27.0, -120.0);
    glVertex3f(-15.0, -27.0, -150.0);
    glVertex3f(-15.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-13.0, -50.0, -120.0);
    glVertex3f(-13.0, -27.0, -120.0);
    glVertex3f(-13.0, -27.0, -150.0);
    glVertex3f(-13.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(-13.0, -50.0, -120.0);
    glVertex3f(-13.0, -27.0, -120.0);
    glVertex3f(-15.0, -27.0, -120.0);
    glVertex3f(-15.0, -50.0, -120.0);
    glBegin(GL_QUADS);//7
    glColor3f(0.85,0.61,0.28);
    glVertex3f(40.0, -50.0, -120.0);
    glVertex3f(40.0, -27.0, -120.0);
    glVertex3f(40.0, -27.0, -150.0);
    glVertex3f(40.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(38.0, -50.0, -120.0);
    glVertex3f(38.0, -27.0, -120.0);
    glVertex3f(38.0, -27.0, -150.0);
    glVertex3f(38.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(38.0, -50.0, -120.0);
    glVertex3f(38.0, -27.0, -120.0);
    glVertex3f(40.0, -27.0, -120.0);
    glVertex3f(40.0, -50.0, -120.0);
    glBegin(GL_QUADS);//8
    glColor3f(0.85,0.61,0.28);
    glVertex3f(15.0, -50.0, -120.0);
    glVertex3f(15.0, -27.0, -120.0);
    glVertex3f(15.0, -27.0, -150.0);
    glVertex3f(15.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(13.0, -50.0, -120.0);
    glVertex3f(13.0, -27.0, -120.0);
    glVertex3f(13.0, -27.0, -150.0);
    glVertex3f(13.0, -50.0, -150.0);
    glBegin(GL_QUADS);
    glColor3f(0.85,0.61,0.28);
    glVertex3f(13.0, -50.0, -120.0);
    glVertex3f(13.0, -27.0, -120.0);
    glVertex3f(15.0, -27.0, -120.0);
    glVertex3f(15.0, -50.0, -120.0);
    glEnd();

    glutSwapBuffers();
}

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case '5':
        if (is_depth)
        {
            is_depth = 0;
            glDisable(GL_DEPTH_TEST);
        }
        else
        {
            is_depth = 1;
            glEnable(GL_DEPTH_TEST);
        }
    }
    tampil();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("TR");
    glutReshapeWindow(1080, 720);
    glutDisplayFunc(tampil);
    glutKeyboardFunc(keyboard);
    glutMouseFunc(mouse);
    glutMotionFunc(mouseMotion);
    glutIdleFunc(tampil);
    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);
    glEnable(GL_COLOR_MATERIAL);
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);
    glEnable(GL_TEXTURE_2D);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(60.0f, 1.0, 2.0, 500.0);

    // Reset koordinat  sebelum dimodifikasi/diubah
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(1.0, 1.0, -150.0);

    glutMainLoop();
    return 0;
}
