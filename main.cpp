#include<windows.h>
#include <GL/glut.h>
#include <stdio.h>
#include <GL/gl.h>
#include<math.h>
void myMouse();
GLfloat p=-100,q=130,r=0.01;
float p1 = 0,q1=0,r1=1,flag = 1;//flag=1 for green light
GLint traffic_regulator=1;

void circle(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 0; i <= 100; i++)
    {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}
void circle2(GLfloat rx, GLfloat ry, GLfloat cx, GLfloat cy)
{
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(cx, cy);
    for (int i = 25; i <= 75; i++)
    {
        float angle = 2.0f * 3.1416f * i / 100;
        float x = rx * cosf(angle);
        float y = ry * sinf(angle);
        glVertex2f((x + cx), (y + cy));
    }
    glEnd();
}
void init(void)
{
    glClearColor(0.0,0.0,0.0,0.0); //GLfloat red,green,blue,alpha initial value 0 alpha values used by glclear to clear the color buffers
    glMatrixMode(GL_PROJECTION);  // To specify which matrix is the current matrix & projection applies subsequent matrix to projecton matrix stack
    glLoadIdentity();
    glOrtho(-100, 100, -50, 50, -100, 100);
}
void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glPushMatrix();

//linedevider1
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(-100,-9);
    glVertex2i(-100,-11);
    glVertex2i(-90,-11);
    glVertex2i(-90,-9);
    glEnd();
//linedevider2
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(-80,-9);
    glVertex2i(-80,-11);
    glVertex2i(-70,-11);
    glVertex2i(-70,-9);
    glEnd();
//linedevider3
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(-60,-9);
    glVertex2i(-60,-11);
    glVertex2i(-50,-11);
    glVertex2i(-50,-9);
    glEnd();
//linedevider4
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(-40,-9);
    glVertex2i(-40,-11);
    glVertex2i(-30,-11);
    glVertex2i(-30,-9);
    glEnd();
//linedevider5
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(-20,-9);
    glVertex2i(-20,-11);
    glVertex2i(-10,-11);
    glVertex2i(-10,-9);
    glEnd();
//linedevider6
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(0,-9);
    glVertex2i(0,-11);
    glVertex2i(10,-11);
    glVertex2i(10,-9);
    glEnd();
//linedevider7
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(20,-9);
    glVertex2i(20,-11);
    glVertex2i(30,-11);
    glVertex2i(30,-9);
    glEnd();
//linedevider8
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(40,-9);
    glVertex2i(40,-11);
    glVertex2i(50,-11);
    glVertex2i(50,-9);
    glEnd();
//linedevider9
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(60,-9);
    glVertex2i(60,-11);
    glVertex2i(70,-11);
    glVertex2i(70,-9);
    glEnd();
//linedevider10
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2i(80,-9);
    glVertex2i(80,-11);
    glVertex2i(90,-11);
    glVertex2i(90,-9);
    glEnd();
//grassupperleft
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2i(-100,30);
    glVertex2i(-100,10);
    glVertex2i(10,10);
    glVertex2i(-30,30);
    glEnd();
//grassUpR
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2i(10,30);
    glVertex2i(50,10);
    glVertex2i(100,10);
    glVertex2i(100,30);
    glEnd();
//sky
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.7,1.0);
    glVertex2i(-100,50);
    glVertex2i(-100,30);
    glVertex2i(100,30);
    glVertex2i(100,50);
    glEnd();
//grassLow
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2i(-100,-30);
    glVertex2i(-100,-50);
    glVertex2i(100,-500);
    glVertex2i(100,-30);
    glEnd();

//BUS
    if(flag == 1)
    {
        q=q-0.01;
        glBegin(GL_POLYGON);
        glColor3f(0.0,1.0,0.0);
        glVertex2i(28,9);
        glVertex2i(28,7);
        glVertex2i(32,7);
        glVertex2i(32,9);
        glEnd();
    }
    else
        q=120;
    glutPostRedisplay();

//whitebus
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(q-70,20);
    glVertex2f(q-70,0);
    glVertex2f(q,0);
    glVertex2f(q,20);
    glEnd();
    //front
    glBegin(GL_POLYGON);
    glColor3f(0.5,0.5,0.5);
    glVertex2f(q-70,20);
    glVertex2f(q-80,12);
    glVertex2f(q-80,0);
    glVertex2f(q-70,0);
    glEnd();
    //window
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(q-70,20);
    glVertex2f(q-80,12);
    glVertex2f(q-70,12);
    glEnd();
    //handle
    glColor3f(0.0,0.0,0.0);
    circle(2,2,q-70,8);
    glColor3f(1.0,1.0,1.0);
    circle2(1.8,1.8,q-70,8);
    //gate
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(q-68,18);
    glVertex2f(q-68,2);
    glVertex2f(q-60,2);
    glVertex2f(q-60,18);
    glEnd();
    //window1
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(q-57,18);
    glVertex2f(q-57,12);
    glVertex2f(q-50,12);
    glVertex2f(q-50,18);
    glEnd();
    //window2
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(q-50,18);
    glVertex2f(q-50,12);
    glVertex2f(q-43,12);
    glVertex2f(q-43,18);
    glEnd();
    //window3
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(q-43,18);
    glVertex2f(q-43,12);
    glVertex2f(q-36,12);
    glVertex2f(q-36,18);
    glEnd();
    //window4
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(q-36,18);
    glVertex2f(q-36,12);
    glVertex2f(q-29,12);
    glVertex2f(q-29,18);
    glEnd();
    //window5
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(q-29,18);
    glVertex2f(q-29,12);
    glVertex2f(q-22,12);
    glVertex2f(q-22,18);
    glEnd();
    //window6
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(q-22,18);
    glVertex2f(q-22,12);
    glVertex2f(q-15,12);
    glVertex2f(q-15,18);
    glEnd();
    //window7
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(q-15,18);
    glVertex2f(q-15,12);
    glVertex2f(q-8,12);
    glVertex2f(q-8,18);
    glEnd();
    //window8
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(q-8,18);
    glVertex2f(q-8,12);
    glVertex2f(q-1,12);
    glVertex2f(q-1,18);
    glEnd();
    //buswheel
    glColor3f(1.0,1.0,1.0);
    circle(3,3,q-55,0);
    glColor3f(0.1,0.0,0.0);
    circle(2.8,2.8,q-55,0);
    glColor3f(1.0,1.0,1.0);
    circle(1,1,q-55,0);

    glColor3f(1.0,1.0,1.0);
    circle(3,3,q-10,0);
    glColor3f(0.1,0.0,0.0);
    circle(2.8,2.8,q-10,0);
    glColor3f(1.0,1.0,1.0);
    circle(1,1,q-10,0);
//LightPost
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.5,0.0);
    glVertex2i(20,-10);
    glVertex2i(20,-15);
    glVertex2i(40,-15);
    glVertex2i(40,-10);
    glEnd();
//LightPost2
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.5,0.0);
    glVertex2i(28,5);
    glVertex2i(28,-10);
    glVertex2i(32,-10);
    glVertex2i(32,5);
    glEnd();
//LightPost3
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.5,0.0);
    glVertex2i(26,20);
    glVertex2i(26,5);
    glVertex2i(34,5);
    glVertex2i(34,20);
    glEnd();
//redlight
    glBegin(GL_POLYGON);
    glColor3f(p1,0.0,0.0);
    glVertex2i(28,17);
    glVertex2i(28,15);
    glVertex2i(32,15);
    glVertex2i(32,17);
    glEnd();

//YellowLight
    glBegin(GL_POLYGON);
    glColor3f(q1,q1,0.0);
    glVertex2i(28,13);
    glVertex2i(28,11);
    glVertex2i(32,11);
    glVertex2i(32,13);
    glEnd();
//GreenLight
    glBegin(GL_POLYGON);
    glColor3f(0.0,r1,0.0);
    glVertex2i(28,9);
    glVertex2i(28,7);
    glVertex2i(32,7);
    glVertex2i(32,9);
    glEnd();
    //glutPostRedisplay();
//carRED
    if(flag == 1)
        p = p + 0.01;
    else
        p=-100;
    glutPostRedisplay();


    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(p,-18);
    glVertex2f(p,-25);
    glVertex2f(p+25,-25);
    glVertex2f(p+25,-18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(p+7,-13);
    glVertex2f(p+4,-18);
    glVertex2f(p+21,-18);
    glVertex2f(p+18,-13);
    glEnd();
    //glass
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(p+7.5,-13.5);
    glVertex2f(p+5.5,-17.5);
    glVertex2f(p+19.5,-17.5);
    glVertex2f(p+17.5,-13.5);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2d(p+7.5,-13.5);
    glVertex2d(p+7.5,-17.5);
    glEnd();

    glColor3f(0.0,0.0,0.0);
    glBegin(GL_LINES);
    glVertex2d(p+17.5,-13.5);
    glVertex2d(p+17.5,-17.5);
    glEnd();
    //wheel
    glColor3f(1.0,1.0,1.0);
    circle(3,3,p+6,-25);
    glColor3f(0.1,0.0,0.0);
    circle(2.8,2.8,p+6,-25);
    glColor3f(1.0,1.0,1.0);
    circle(1,1,p+6,-25);
    //wheel2
    glColor3f(1.0,1.0,1.0);
    circle(3,3,p+19,-25);
    glColor3f(0.1,0.0,0.0);
    circle(2.8,2.8,p+19,-25);
    glColor3f(1.0,1.0,1.0);
    circle(1,1,p+19,-25);
//TREE1
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-80,35);
    glVertex2f(-80,25);
    glVertex2f(-78,35);
    glVertex2f(-78,25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-79,40);
    glVertex2f(-82,35);
    glVertex2f(-76,35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-79,43);
    glVertex2f(-82,38);
    glVertex2f(-76,38);
    glEnd();

    //TREE2
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-70,35);
    glVertex2f(-70,25);
    glVertex2f(-68,35);
    glVertex2f(-68,25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-69,40);
    glVertex2f(-72,35);
    glVertex2f(-66,35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-69,43);
    glVertex2f(-72,38);
    glVertex2f(-66,38);
    glEnd();
    //TREE3
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-60,35);
    glVertex2f(-60,25);
    glVertex2f(-58,35);
    glVertex2f(-58,25);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-59,40);
    glVertex2f(-62,35);
    glVertex2f(-56,35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-59,43);
    glVertex2f(-62,38);
    glVertex2f(-56,38);
    glEnd();
    //TREE4
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-50,35);
    glVertex2f(-50,25);
    glVertex2f(-48,35);
    glVertex2f(-48,25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-49,40);
    glVertex2f(-52,35);
    glVertex2f(-46,35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-49,43);
    glVertex2f(-52,38);
    glVertex2f(-46,38);
    glEnd();
    //TREE5
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(-40,35);
    glVertex2f(-40,25);
    glVertex2f(-38,35);
    glVertex2f(-38,25);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0f, 0.5f, 0.0f);
    glVertex2f(-39,40);
    glVertex2f(-42,35);
    glVertex2f(-36,35);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0f, 1.0f, 0.0f);
    glVertex2f(-39,43);
    glVertex2f(-42,38);
    glVertex2f(-36,38);
    glEnd();

//Sun
    glColor3f(1.0f, 0.5f, 0.0f);
    circle(5,5,30,40);
//cloud
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,45,40);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,48,40);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,47,42);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,35,40);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,38,40);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,37,42);

    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,42,40);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,39,40);
    glColor3f(1.0f, 1.0f, 1.0f);
    circle(2,2,40,42);

//building
    glBegin(GL_POLYGON);
    glColor3f(0.5f, 0.0f, 0.0f);
    glVertex2f(70,48);
    glVertex2f(70,20);
    glVertex2f(96,20);
    glVertex2f(96,48);
    glEnd();
//buildingWindow1
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(76,46);
    glVertex2f(76,42);
    glVertex2f(72,42);
    glVertex2f(72,46);
    glEnd();
//buildingWindow2
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(80,46);
    glVertex2f(80,42);
    glVertex2f(84,42);
    glVertex2f(84,46);
    glEnd();
//buildingWindow3
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(88,46);
    glVertex2f(88,42);
    glVertex2f(92,42);
    glVertex2f(92,46);
    glEnd();
//buildingWindow4
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(76,38);
    glVertex2f(76,34);
    glVertex2f(72,34);
    glVertex2f(72,38);
    glEnd();
//buildingWindow5
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(80,38);
    glVertex2f(80,34);
    glVertex2f(84,34);
    glVertex2f(84,38);
    glEnd();
//buildingWindow6
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(88,38);
    glVertex2f(88,34);
    glVertex2f(92,34);
    glVertex2f(92,38);
    glEnd();
//buildingWindow7
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(76,30);
    glVertex2f(76,26);
    glVertex2f(72,26);
    glVertex2f(72,30);
    glEnd();
//buildingWindow8
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(80,30);
    glVertex2f(80,26);
    glVertex2f(84,26);
    glVertex2f(84,30);
    glEnd();
//buildingWindow9
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(88,30);
    glVertex2f(88,26);
    glVertex2f(92,26);
    glVertex2f(92,30);
    glEnd();


    glutSwapBuffers();
}
void myMouse(int button,int state,int x,int y)
{
    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
    {
        flag=0;
        p1=1;
        q1=0;
        r1=0;
    }

    if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
    {
        flag=0;
        p1=0;
        q1=1;
        r1=0;
    }
    if(button==GLUT_RIGHT_BUTTON && state==GLUT_UP)
    {
        flag=1;
        p1=0;
        q1=0;
        r1=1;
    }
    glutPostRedisplay();
}
int main(int argc,char **argv)
{

    glutInit(&argc,argv);
    glutInitDisplayMode ( GLUT_RGB | GLUT_DOUBLE );
    glutInitWindowPosition(150,150);
    glutInitWindowSize(900,500);
    glutCreateWindow("Labproject");

    init();

    glutDisplayFunc(Draw);
    glutMouseFunc(myMouse);
    glutMainLoop();

    return 0;
}
