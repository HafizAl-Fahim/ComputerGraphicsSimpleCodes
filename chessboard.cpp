#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
    //1st row
    glColor3ub(255, 255, 255);//col 1
    glBegin(GL_POLYGON);
    glVertex2d(0, 0);
    glVertex2d(0, 50);
    glVertex2d(50, 50);
    glVertex2d(50, 0);
    glEnd();

    glColor3ub(0, 0, 0);//col2
    glBegin(GL_POLYGON);
    glVertex2d(50, 0);
    glVertex2d(50, 50);
    glVertex2d(100, 50);
    glVertex2d(100, 0);
    glEnd();

    glColor3ub(255, 255, 255);//col3
    glBegin(GL_POLYGON);
    glVertex2d(100, 0);
    glVertex2d(100, 50);
    glVertex2d(150, 50);
    glVertex2d(150, 0);
    glEnd();

    glColor3ub(0, 0, 0);//col4
    glBegin(GL_POLYGON);
    glVertex2d(150, 0);
    glVertex2d(150, 50);
    glVertex2d(200, 50);
    glVertex2d(200, 0);
    glEnd();

    glColor3ub(255, 255, 255);//col5
    glBegin(GL_POLYGON);
    glVertex2d(200, 0);
    glVertex2d(200, 50);
    glVertex2d(250, 50);
    glVertex2d(250, 0);
    glEnd();

    glColor3ub(0, 0, 0);//col6
    glBegin(GL_POLYGON);
    glVertex2d(250, 0);
    glVertex2d(250, 50);
    glVertex2d(300, 50);
    glVertex2d(300, 0);
    glEnd();

    glColor3ub(255, 255, 255);//col7
    glBegin(GL_POLYGON);
    glVertex2d(300, 0);
    glVertex2d(300, 50);
    glVertex2d(350, 50);
    glVertex2d(350, 0);
    glEnd();

    glColor3ub(0, 0, 0);//col8
    glBegin(GL_POLYGON);
    glVertex2d(350, 0);
    glVertex2d(350, 50);
    glVertex2d(400, 50);
    glVertex2d(400, 0);
    glEnd();

    //2nd row
    glColor3ub(0, 0, 0);//col1
    glBegin(GL_POLYGON);
    glVertex2d(0, 50);
    glVertex2d(0, 100);
    glVertex2d(50, 100);
    glVertex2d(50, 50);
    glEnd();

    glColor3ub(255, 255, 255);//col2
    glBegin(GL_POLYGON);
    glVertex2d(50, 50);
    glVertex2d(50, 100);
    glVertex2d(100, 100);
    glVertex2d(100, 50);
    glEnd();

    glColor3ub(0, 0, 0);//col3
    glBegin(GL_POLYGON);
    glVertex2d(100, 50);
    glVertex2d(100, 100);
    glVertex2d(150, 100);
    glVertex2d(150, 50);
    glEnd();

    glColor3ub(255, 255, 255);//col4
    glBegin(GL_POLYGON);
    glVertex2d(150, 50);
    glVertex2d(150, 100);
    glVertex2d(200, 100);
    glVertex2d(200, 50);
    glEnd();

    glColor3ub(0, 0, 0);//col5
    glBegin(GL_POLYGON);
    glVertex2d(200, 50);
    glVertex2d(200, 100);
    glVertex2d(250, 100);
    glVertex2d(250, 50);
    glEnd();

    glColor3ub(255, 255, 255);//col6
    glBegin(GL_POLYGON);
    glVertex2d(250, 50);
    glVertex2d(250, 100);
    glVertex2d(300, 100);
    glVertex2d(300, 50);
    glEnd();

    glColor3ub(0, 0, 0);//col7
    glBegin(GL_POLYGON);
    glVertex2d(300, 50);
    glVertex2d(300, 100);
    glVertex2d(350, 100);
    glVertex2d(350, 50);
    glEnd();

    glColor3ub(255, 255, 255);//col8
    glBegin(GL_POLYGON);
    glVertex2d(350, 50);
    glVertex2d(350, 100);
    glVertex2d(400, 100);
    glVertex2d(400, 50);
    glEnd();

    //3rd row
    glColor3ub(255, 255, 255);//col1
    glBegin(GL_POLYGON);
    glVertex2d(0, 100);
    glVertex2d(0, 150);
    glVertex2d(50, 150);
    glVertex2d(50, 100);
    glEnd();

    glColor3ub(0, 0, 0);//col2
    glBegin(GL_POLYGON);
    glVertex2d(50, 100);
    glVertex2d(50, 150);
    glVertex2d(100, 150);
    glVertex2d(100, 100);
    glEnd();

    glColor3ub(255, 255, 255);//col3
    glBegin(GL_POLYGON);
    glVertex2d(100, 100);
    glVertex2d(100, 150);
    glVertex2d(150, 150);
    glVertex2d(150, 100);
    glEnd();

    glColor3ub(0, 0, 0);//col4
    glBegin(GL_POLYGON);
    glVertex2d(150, 100);
    glVertex2d(150, 150);
    glVertex2d(200, 150);
    glVertex2d(200, 100);
    glEnd();

    glColor3ub(255, 255, 255);//col5
    glBegin(GL_POLYGON);
    glVertex2d(200, 100);
    glVertex2d(200, 150);
    glVertex2d(250, 150);
    glVertex2d(250, 100);
    glEnd();

    glColor3ub(0, 0, 0);//col6
    glBegin(GL_POLYGON);
    glVertex2d(250, 100);
    glVertex2d(250, 150);
    glVertex2d(300, 150);
    glVertex2d(300, 100);
    glEnd();

    glColor3ub(255, 255, 255);//col7
    glBegin(GL_POLYGON);
    glVertex2d(300, 100);
    glVertex2d(300, 150);
    glVertex2d(350, 150);
    glVertex2d(350, 100);
    glEnd();

    glColor3ub(0, 0, 0);//col8
    glBegin(GL_POLYGON);
    glVertex2d(350, 100);
    glVertex2d(350, 150);
    glVertex2d(400, 150);
    glVertex2d(400, 100);
    glEnd();

    //4th row

    //4th row
    /* don't wait!
    * start processing buffered OpenGL routines
    */
    glFlush();
}
void init(void)
{
    /* select clearing (background) color */
    glClearColor(0.0, 1.0, 1.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 400, 0, 500);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(400, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("ChessBoard");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}
