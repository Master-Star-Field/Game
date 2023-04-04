#include <GL/glut.h>
#include <iostream>
#include <cstdlib>


void renderScene(void);

double cnvCoordX(double x);
double cnvCoordY(double y);

const int WIDTH = 600, HEIGHT = 600;

int main(int argc, char * argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutCreateWindow("Game");
    glutDisplayFunc(renderScene);
    glutMainLoop();

    return 0;
}

void renderScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glOrtho(0, WIDTH, HEIGHT, 0, -1, 1);


    glColor3ub(99, 117, 117);
    glBegin(GL_POLYGON);
       glVertex2f( (248),  (82));
       glVertex2f( (240),  (0));
       glVertex2f( (310),  (64));
       glVertex2f( (312),  (42));
       glVertex2f( (322),  (33));
       glVertex2f( (368),  (125));
       glVertex2f( (384),  (122));
       glVertex2f( (369),  (217));
       glVertex2f( (382),  (225));
       glVertex2f( (322),  (291));
       glVertex2f( (321),  (306));
       glVertex2f( (295),  (274));
       glVertex2f( (284),  (290));
       glVertex2f( (255),  (269));
       glVertex2f( (227),  (284));
       glVertex2f( (146),  (156));
       glVertex2f( (369),  (217));
       glVertex2f( (224),  (80));
       glVertex2f( (248),  (82));

    glEnd();

    glColor3ub(254,156,0);
    glBegin(GL_POLYGON);
       glVertex2f( (235),  (51));
       glVertex2f( (273),  (107));
       glVertex2f( (278),  (89));
       glVertex2f( (294),  (91));
       glVertex2f( (293),  (155));
       glVertex2f( (296),  (153));
       glVertex2f( (291),  (225));
       glVertex2f( (267),  (211));
       glVertex2f( (241),  (169));
       glVertex2f( (247),  (168));
       glVertex2f( (230),  (118));
       glVertex2f( (241),  (123));
       glVertex2f( (241),  (106));
       glVertex2f( (244),  (106));
       glVertex2f( (235),  (51));

    glEnd();
    glMatrixMode(GL_MODELVIEW);

    glEnd();
glMatrixMode(GL_MODELVIEW);
    glutSwapBuffers();
}


double cnvCoordX(double x)
{
    x = 2 * x / WIDTH - 1;
    std::cout << x << std::endl;
    return x;

}

double cnvCoordY(double y)
{
    y = 1 - 2 * y /HEIGHT;
    std::cout << y << std::endl;
    return y;

}
