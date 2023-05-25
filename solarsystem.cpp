#include <GL/gl.h> 
#include<GL\glut.h> 
#include <stdlib.h> 
#include <math.h> 
#include <windows.h> 
void init(void)
{
    glClearColor(0.0, 0.0, 1.0, 0.0);
    gluOrtho2D(0, 500, 0, 500);
}



void circle_kon(int h, int k, int rx, int ry)    //Works 
{
    //glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer with current clearing color 
   //glColor3f(1.0, .60, 0.0); 
   //glPointSize(4); 
     //glBegin(GL_POINTS); 
    glBegin(GL_POLYGON);
    for (int i = 1;i <= 360;i++)     //360 kon 
    {                //(x=position+radius x(150))    (y=position+radius y(150))   //// y point=sin main point ; x point=cos main point 
        glVertex2f(h + rx * cos(3.14159 * i / 180), k + ry * sin(3.14159 * i / 180));       //main point + radius 
    }                                                                      //3.14159*i/180   convert degree to radian 
    glEnd();

    glFlush();

}


void buildHouse(void)
{
    glColor3ub(0, 25, 51);
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(500, 0);
    glVertex2d(500, 500);
    glVertex2d(0, 500);
    glEnd();
    //1 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 202, 202);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 200, 200);
    glEnd();

    //2 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 190, 190);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 188, 188);
    glEnd();
    //3 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 180, 180);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 178, 178);
    glEnd();

    //4 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 170, 170);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 168, 168);
    glEnd();

    //5 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 160, 160);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 158, 158);
    glEnd();
    //6 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 145, 145);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 143, 143);
    glEnd();
    //7 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 131, 131);
    glEnd();


    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 129, 129);
    glEnd();
    //8 
    glColor3ub(255, 255, 130);
    circle_kon(250, 250, 119, 119);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(250, 250, 117, 117);
    glEnd();

    //sun 
    glColor3ub(204, 20, 30);
    circle_kon(250, 250, 70, 80);
    glEnd();
    //neptune 
    glColor3ub(110, 51, 102);
    circle_kon(390, 105, 10, 10);
    glEnd();
    //uranus 
    glColor3ub(0, 128, 255);
    circle_kon(60, 250, 9, 9);
    glEnd();

    //saturn 
    glColor3ub(255, 153, 51);
    circle_kon(400, 350, 9, 9);
    glEnd();

    glColor3ub(0, 0, 0);
    circle_kon(400, 350, 8, 8);
    glEnd();
    glColor3ub(255, 153, 51);
    circle_kon(400, 350, 6, 6);
    glEnd();


    //jupitar 

    glColor3ub(153, 76, 0);
    circle_kon(122, 360, 9, 9);
    glEnd();
    //mars 
    glColor3ub(102, 0, 0);
    circle_kon(409, 250, 9, 9);
    glEnd();
    //earth 
    glColor3ub(0, 51, 0);
    circle_kon(150, 150, 9, 9);
    glEnd();
    //venus 
    glColor3ub(153, 153, 0);
    circle_kon(220, 375, 9, 9);
    glEnd();
    //mercury 

    glColor3ub(153, 153, 255);
    circle_kon(250, 135, 9, 9);
    glEnd();

    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(60, 60);
    glEnd();


    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(430, 300);
    glEnd();




    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(60, 60);
    glEnd();





    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(460, 460);
    glEnd();




    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(160, 160);
    glEnd();



    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(190, 200);
    glEnd();

    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(360, 160);
    glEnd();


    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(310, 300);
    glEnd();


    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(160, 460);
    glEnd();


    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(400, 60);
    glEnd();


    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(460, 460);
    glEnd();

    glColor3ub(255, 255, 255);
    glPointSize(2);
    glBegin(GL_POINTS);
    glVertex2d(69, 260);
    glEnd();

    glColor3ub(255, 255, 255);
    glPointSize(20.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(10, 23);
    glVertex2d(12, 28);
    glVertex2d(14, 23);
    glEnd();


    glColor3ub(255, 255, 255);
    glPointSize(20.0);
    glBegin(GL_TRIANGLES);
    glVertex2d(10, 23);
    glVertex2d(12, 19);
    glVertex2d(14, 23);
    glEnd();





    glFlush();

}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0, 0);
    glutInitWindowSize(500, 500);
    glutCreateWindow("House Section OpenGL");
    init();
    glutDisplayFunc(buildHouse);
    glutMainLoop();
}