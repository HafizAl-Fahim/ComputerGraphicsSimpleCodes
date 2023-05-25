#include<windows.h>
#include <GL/glut.h>

void init(void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);

    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 800.0, 0.0, 800.0);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

    bool f = false;

    for (int x = 0;x <= 800;x += 100) {

        for (int y = 0;y <= 800;y += 100) {

            if (f) {

                glColor3f(1.0, 1.0, 1.0);
                f = !f;

            }
            else {

                glColor3f(0.0, 0.0, 0.0);
                f = !f;

            }
            glBegin(GL_QUADS);
            glVertex2i(x, y);
            glVertex2i(x, y + 100);
            glVertex2i(x + 100, y + 100);
            glVertex2i(x + 100, y);

            glEnd();

            glFlush();
        }
    }

}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(300, 50);
    glutInitWindowSize(700, 700);
    glutCreateWindow("chessboard");

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}