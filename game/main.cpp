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

    //туловище
    glColor3ub(130,106,0);
    glBegin(GL_QUADS);
    glVertex2f(cnvCoordX(238), cnvCoordY(272));
    glVertex2f(cnvCoordX(268), cnvCoordY(386));
    glVertex2f(cnvCoordX(293), cnvCoordY(379));
    glVertex2f(cnvCoordX(288), cnvCoordY(282));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(277), cnvCoordY(304));
    glVertex2f(cnvCoordX(297), cnvCoordY(354));
    glVertex2f(cnvCoordX(304), cnvCoordY(352));
    glVertex2f(cnvCoordX(322), cnvCoordY(329));
    glVertex2f(cnvCoordX(317), cnvCoordY(291));
    glEnd();

    //летающий хвост

    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(296), cnvCoordY(367));
    glVertex2f(cnvCoordX(308), cnvCoordY(370));
    glVertex2f(cnvCoordX(308), cnvCoordY(425));
    glVertex2f(cnvCoordX(295), cnvCoordY(419));
    glVertex2f(cnvCoordX(297), cnvCoordY(367));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(295), cnvCoordY(419));
    glVertex2f(cnvCoordX(284), cnvCoordY(410));
    glVertex2f(cnvCoordX(282), cnvCoordY(390));
    glVertex2f(cnvCoordX(282), cnvCoordY(411));
    glVertex2f(cnvCoordX(284), cnvCoordY(390));
    glVertex2f(cnvCoordX(298), cnvCoordY(395));
    glEnd();

    glColor3ub(65,77,77);
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(236), cnvCoordY(265));
    glVertex2f(cnvCoordX(271), cnvCoordY(318));
    glVertex2f(cnvCoordX(303), cnvCoordY(273));

    glVertex2f(cnvCoordX(304), cnvCoordY(327));
    glVertex2f(cnvCoordX(339), cnvCoordY(315));
    glVertex2f(cnvCoordX(347), cnvCoordY(213));

    glVertex2f(cnvCoordX(279), cnvCoordY(300));
    glVertex2f(cnvCoordX(329), cnvCoordY(204));
    glVertex2f(cnvCoordX(312), cnvCoordY(314));

    glEnd();



    //туловище - левая рука
    glColor3ub(65,77,77);
    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(163), cnvCoordY(177));
    glVertex2f(cnvCoordX(228), cnvCoordY(265));
    glVertex2f(cnvCoordX(196), cnvCoordY(271));
    glVertex2f(cnvCoordX(172), cnvCoordY(255));
    glVertex2f(cnvCoordX(149), cnvCoordY(189));
    glVertex2f(cnvCoordX(164), cnvCoordY(175));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(159), cnvCoordY(207));
    glVertex2f(cnvCoordX(172), cnvCoordY(255));
    glVertex2f(cnvCoordX(144), cnvCoordY(229));
    glVertex2f(cnvCoordX(136), cnvCoordY(213));
    glVertex2f(cnvCoordX(143), cnvCoordY(203));
    glVertex2f(cnvCoordX(156), cnvCoordY(210));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(146), cnvCoordY(228));
    glVertex2f(cnvCoordX(132), cnvCoordY(229));
    glVertex2f(cnvCoordX(130), cnvCoordY(239));
    glVertex2f(cnvCoordX(155), cnvCoordY(269));
    glVertex2f(cnvCoordX(169), cnvCoordY(265));
    glVertex2f(cnvCoordX(170), cnvCoordY(254));
    glEnd();


    //туловище - правая рука
    glColor3ub(65,77,77);
    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(378), cnvCoordY(162));
    glVertex2f(cnvCoordX(392), cnvCoordY(172));
    glVertex2f(cnvCoordX(398), cnvCoordY(178));
    glVertex2f(cnvCoordX(400), cnvCoordY(195));
    glVertex2f(cnvCoordX(391), cnvCoordY(236));
    glVertex2f(cnvCoordX(375), cnvCoordY(252));
    glVertex2f(cnvCoordX(354), cnvCoordY(249));
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(cnvCoordX(407), cnvCoordY(184));
    glVertex2f(cnvCoordX(386), cnvCoordY(210));
    glVertex2f(cnvCoordX(399), cnvCoordY(249));
    glVertex2f(cnvCoordX(415), cnvCoordY(239));
    glVertex2f(cnvCoordX(391), cnvCoordY(236));
    glVertex2f(cnvCoordX(411), cnvCoordY(211));
    glVertex2f(cnvCoordX(419), cnvCoordY(189));
    glEnd();

    //воротник
    glColor3ub(99, 117, 117);
    glBegin(GL_TRIANGLE_FAN);
       glVertex2f(cnvCoordX(285), cnvCoordY(152));
       glVertex2f(cnvCoordX(248), cnvCoordY(82));
       glVertex2f(cnvCoordX(240), cnvCoordY(0));
       glVertex2f(cnvCoordX(310), cnvCoordY(64));
       glVertex2f(cnvCoordX(312), cnvCoordY(42));
       glVertex2f(cnvCoordX(322), cnvCoordY(33));
       glVertex2f(cnvCoordX(368), cnvCoordY(125));
       glVertex2f(cnvCoordX(384), cnvCoordY(122));
       glVertex2f(cnvCoordX(369), cnvCoordY(217));
       glVertex2f(cnvCoordX(382), cnvCoordY(225));
       glVertex2f(cnvCoordX(322), cnvCoordY(291));
       glVertex2f(cnvCoordX(321), cnvCoordY(306));
       glVertex2f(cnvCoordX(295), cnvCoordY(274));
       glVertex2f(cnvCoordX(284), cnvCoordY(290));
       glVertex2f(cnvCoordX(255), cnvCoordY(269));
       glVertex2f(cnvCoordX(227), cnvCoordY(284));
       glVertex2f(cnvCoordX(146), cnvCoordY(156));
       glVertex2f(cnvCoordX(369), cnvCoordY(217));
       glVertex2f(cnvCoordX(224), cnvCoordY(80));
       glVertex2f(cnvCoordX(248), cnvCoordY(82));

    glEnd();

    //воротник задняя часть
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(146), cnvCoordY(156));
    glVertex2f(cnvCoordX(225), cnvCoordY(80));
    glVertex2f(cnvCoordX(300), cnvCoordY(170));
    glEnd();

    //тень на воротнике
    glColor3ub(78,92,93);
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(296), cnvCoordY(260));
    glVertex2f(cnvCoordX(348), cnvCoordY(184));
    glVertex2f(cnvCoordX(262), cnvCoordY(175));

    glVertex2f(cnvCoordX(260), cnvCoordY(104));
    glVertex2f(cnvCoordX(331), cnvCoordY(122));
    glVertex2f(cnvCoordX(331), cnvCoordY(204));

    glVertex2f(cnvCoordX(280), cnvCoordY(253));
    glVertex2f(cnvCoordX(305), cnvCoordY(185));
    glVertex2f(cnvCoordX(217), cnvCoordY(191));

    glVertex2f(cnvCoordX(217), cnvCoordY(191));
    glVertex2f(cnvCoordX(218), cnvCoordY(147));
    glVertex2f(cnvCoordX(268), cnvCoordY(189));

    glVertex2f(cnvCoordX(223), cnvCoordY(160));
    glVertex2f(cnvCoordX(242), cnvCoordY(134));
    glVertex2f(cnvCoordX(264), cnvCoordY(174));
    glEnd();

    //темная половина головы
    glColor3ub(178,143,2);
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(304), cnvCoordY(119));
    glVertex2f(cnvCoordX(337), cnvCoordY(150));
    glVertex2f(cnvCoordX(290), cnvCoordY(196));

    glEnd();

    //тень на голове
    glColor3ub(130,106,1);
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(309), cnvCoordY(112));
    glVertex2f(cnvCoordX(287), cnvCoordY(126));
    glVertex2f(cnvCoordX(294), cnvCoordY(161));

    glVertex2f(cnvCoordX(292), cnvCoordY(152));
    glVertex2f(cnvCoordX(306), cnvCoordY(141));
    glVertex2f(cnvCoordX(296), cnvCoordY(176));

    glVertex2f(cnvCoordX(294), cnvCoordY(184));
    glVertex2f(cnvCoordX(294), cnvCoordY(208));
    glVertex2f(cnvCoordX(313), cnvCoordY(177));

    glVertex2f(cnvCoordX(311), cnvCoordY(176));
    glVertex2f(cnvCoordX(318), cnvCoordY(190));
    glVertex2f(cnvCoordX(294), cnvCoordY(208));
    glEnd();


    //оранжевая голова
    glColor3ub(254,156,0);
    glBegin(GL_TRIANGLE_FAN);
       glVertex2f(cnvCoordX(268), cnvCoordY(149));
       glVertex2f(cnvCoordX(235), cnvCoordY(51));
       glVertex2f(cnvCoordX(273), cnvCoordY(107));
       glVertex2f(cnvCoordX(278), cnvCoordY(89));
       glVertex2f(cnvCoordX(294), cnvCoordY(91));
       glVertex2f(cnvCoordX(293), cnvCoordY(155));
       glVertex2f(cnvCoordX(296), cnvCoordY(153));
       glVertex2f(cnvCoordX(291), cnvCoordY(225));
       glVertex2f(cnvCoordX(267), cnvCoordY(211));
       glVertex2f(cnvCoordX(241), cnvCoordY(169));
       glVertex2f(cnvCoordX(247), cnvCoordY(168));
       glVertex2f(cnvCoordX(230), cnvCoordY(118));
       glVertex2f(cnvCoordX(241), cnvCoordY(123));
       glVertex2f(cnvCoordX(241), cnvCoordY(106));
       glVertex2f(cnvCoordX(244), cnvCoordY(106));
       glVertex2f(cnvCoordX(235), cnvCoordY(51));

    glEnd();
    //желтая морда
    glColor3ub(255,216,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(242), cnvCoordY(72));
    glVertex2f(cnvCoordX(277), cnvCoordY(119));
    glVertex2f(cnvCoordX(255), cnvCoordY(154));
    glVertex2f(cnvCoordX(241), cnvCoordY(106));
    glVertex2f(cnvCoordX(262), cnvCoordY(106));
    glVertex2f(cnvCoordX(255), cnvCoordY(154));
    glVertex2f(cnvCoordX(284), cnvCoordY(107));
    glVertex2f(cnvCoordX(285), cnvCoordY(169));
    glVertex2f(cnvCoordX(255), cnvCoordY(150));

    glVertex2f(cnvCoordX(295), cnvCoordY(163));
    glVertex2f(cnvCoordX(276), cnvCoordY(173));
    glVertex2f(cnvCoordX(255), cnvCoordY(143));

    glEnd();

    //глаз левый
    glColor3ub(62,51,38);
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(258), cnvCoordY(156));
    glVertex2f(cnvCoordX(261), cnvCoordY(167));
    glVertex2f(cnvCoordX(273), cnvCoordY(176));

    glVertex2f(cnvCoordX(278), cnvCoordY(174));
    glVertex2f(cnvCoordX(279), cnvCoordY(182));
    glVertex2f(cnvCoordX(268), cnvCoordY(181));

    glVertex2f(cnvCoordX(255), cnvCoordY(167));
    glVertex2f(cnvCoordX(262), cnvCoordY(167));
    glVertex2f(cnvCoordX(269), cnvCoordY(181));

    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(cnvCoordX(258), cnvCoordY(171));
    glVertex2f(cnvCoordX(263), cnvCoordY(164));
    glVertex2f(cnvCoordX(278), cnvCoordY(180));
    glVertex2f(cnvCoordX(268), cnvCoordY(186));

    glEnd();

    //второй глаз
    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(301), cnvCoordY(181));
    glVertex2f(cnvCoordX(305), cnvCoordY(169));
    glVertex2f(cnvCoordX(307), cnvCoordY(181));

    glVertex2f(cnvCoordX(316), cnvCoordY(158));
    glVertex2f(cnvCoordX(316), cnvCoordY(168));
    glVertex2f(cnvCoordX(305), cnvCoordY(171));

    glVertex2f(cnvCoordX(308), cnvCoordY(170));
    glVertex2f(cnvCoordX(311), cnvCoordY(153));
    glVertex2f(cnvCoordX(315), cnvCoordY(169));

    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(cnvCoordX(304), cnvCoordY(172));
    glVertex2f(cnvCoordX(306), cnvCoordY(179));
    glVertex2f(cnvCoordX(316), cnvCoordY(167));
    glVertex2f(cnvCoordX(312), cnvCoordY(163));

    glEnd();

    //правая(для него) рука

    glColor3ub(130,106,0);

    glBegin(GL_QUADS);
    glVertex2f(cnvCoordX(51), cnvCoordY(151));
    glVertex2f(cnvCoordX(15), cnvCoordY(272));
    glVertex2f(cnvCoordX(45), cnvCoordY(436));
    glVertex2f(cnvCoordX(137), cnvCoordY(505));

    glVertex2f(cnvCoordX(142), cnvCoordY(485));
    glVertex2f(cnvCoordX(176), cnvCoordY(512));
    glVertex2f(cnvCoordX(220), cnvCoordY(512));
    glVertex2f(cnvCoordX(137), cnvCoordY(505));
    glEnd();

    glBegin(GL_TRIANGLES);
    glVertex2f(cnvCoordX(35), cnvCoordY(332));
    glVertex2f(cnvCoordX(11), cnvCoordY(327));
    glVertex2f(cnvCoordX(46), cnvCoordY(438));

    glVertex2f(cnvCoordX(92), cnvCoordY(470));
    glVertex2f(cnvCoordX(151), cnvCoordY(520));
    glVertex2f(cnvCoordX(142), cnvCoordY(485));

    glVertex2f(cnvCoordX(83), cnvCoordY(299));
    glVertex2f(cnvCoordX(164), cnvCoordY(397));
    glVertex2f(cnvCoordX(134), cnvCoordY(492));
    glEnd();


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
