//program: ericH.cpp
//author:  Eric Habjan - Eaton
//date:    3/1/18
// Lab 6
//
#include "fonts.h"
#include "GL/glx.h"

void showName()
{
    Rect r;
    r.bot = 100;
    r.left = 100;
    r.center = 0;
    ggprint8b(&r, 16, 0x00ff0000, "ericH.");

}

void drawBox(int x, int y)
{
    static float angle = 0.0;
    glColor3ub(255,0,0);
    glPushMatrix();
    glTranslatef(x, y, 0.0);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glTranslatef(-50.0, -50.0, 0.0);
    angle = angle + 5.0;
    glBegin(GL_QUADS);
    	glVertex2i(  0,  0);
    	glVertex2i(  0,100);
    	glVertex2i(100,100);
    	glVertex2i(100,  0);
    glEnd();
    glColor3f(1.0f, 0.5f, 0.1f);
    glBegin(GL_POINTS);
    glVertex2f(0.0f, 0.0f);
    glEnd();
    Rect r;
    r.bot = 50.0;
    r.left = 50.0;
    r.center = 1;
    ggprint8b(&r, 16, 0x00ffffff, "ericH.");
    glPopMatrix();
}
