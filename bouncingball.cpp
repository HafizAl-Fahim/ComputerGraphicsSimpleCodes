#include <iostream>
#include<windows.h>
#include<stdio.h>
#include<GL/glut.h>
#include<math.h>
#define pi 3.142857
#include<iostream>
using namespace std;
int x = 100;
int y = 250;
int increment = 1;
void myInit()
{
    //glClearColor(0.0, 1.0, 0.0, 0.0);
    //glClearColor(184.0f/255.0f, 213.0f/255.0f, 238.0f/255.0f, 1.0f);
    //glColor3f(0.0, 0.2, 0.0);
    glClearColor(128.0f / 255.0f, 0, 0, 1.0f);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // setting window dimension in X- and Y- direction
    glOrtho(0, 500, 0, 500, -10.0, 10.0);
}
void circle(float x, float y)
{
    float x1, y1, x2, y2;
    float radius = 100;
    x1 = x;
    y1 = y;
    glBegin(GL_TRIANGLE_FAN);
    glColor3ub(253, 253, 229);
    glVertex2f(x1, y1);
    float angle;
    for (angle = 0;angle <= 360;angle += 0.5)
    {
        x2 = x1 + sin((angle * 3.1416) / 180) * radius;
        y2 = y1 + cos((angle * 3.1416) / 180) * radius;
        glVertex2f(x2, y2);
    }
    glEnd();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_QUADS);
    glColor3ub(0, 0, 0);
    glVertex2d(0, 0);
    glColor3ub(114, 0, 119);
    glVertex2d(500, 0);
    glColor3ub(100, 170, 240);
    glVertex2d(500, 500);
    glVertex2d(0, 500);
    glEnd();
    // if (x == 500) {
    //     increment = -1;
    // }
    // else if (x == 0) {
    //     increment = 1;
    // }
    // x += increment;
    circle(x, y);
    glFlush();
}
void update(int val) {
    glutPostRedisplay();
    glutTimerFunc(20, update, 0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // giving window size in X- and Y- direction
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 0);
    // Giving name to window
    glutCreateWindow("Bouncing Ball");
    myInit();
    glutDisplayFunc(display);
    glutTimerFunc(25, update, 0);
    update(0);
    glutMainLoop();
}
