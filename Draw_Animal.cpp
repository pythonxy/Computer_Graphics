////////////////////////////////////////////////////////////////
//
// Draw_Animal.cpp To draw an Animal
// 
// Author: Thomas Frow & Mark Calderwood
// Date:   25/09/2013
//
///////////////////////////////////////////////////////////////

#ifdef __APPLE__
#    include <GLUT/glut.h>
#    include <OpenGL/OpenGL.h>
#elif defined _WIN32 || defined _WIN64
#    include <GL/glut.h>
#         include "stdafx.h"
#elif __gnu_linux__
#    include <GL/glut.h>
#endif

#include <math.h>
#include <stdio.h>
#include "Resources/cube.h"
#include "Draw_Body.h"
#include "Draw_Whole_Wing.h"
#include "Draw_Head.h"
#include "Draw_Tail.h"


void drawAnimal(float WingAngle,float tailAngle) {
        glScalef(0.5,0.5,0.5);
                glPushMatrix();
                        glPushMatrix();
                        glRotatef(WingAngle, 0.0, 1.0,0.0);
                        
                                glPushMatrix();
                                        //printf("%f",WingAngle);
                                        glTranslatef(1.3, 0.0, 0.0);
                                        glScalef(1.2, 0.8, 0.5);
                                        drawWholeWing(WingAngle);        
                                glPopMatrix();
                                
                        glPopMatrix();
                        
                        glPushMatrix();
                        glRotatef(WingAngle * -1, 0.0, 1.0,0.0);
                        
                                glPushMatrix();
                                        glTranslatef(-1.3, 0.0, 0.0);
                                        glRotatef(180, 0.0, 0.0, 1.0);
                                        glScalef(1.2, 0.8, 0.5);
                                        drawWholeWing(WingAngle);        
                                glPopMatrix();
                                
                        glPopMatrix();
                        
                        glPushMatrix();
                                glTranslatef(0, 0.0, 0.0);
                                //glRotatef(0, 0.0, 0.0, 1.0);
                                glScalef(0.3, 0.3, 0.3);
                                drawBody();        
                        glPopMatrix();
                        glPushMatrix();
                                glTranslatef(0,0.6,0);
                                glScalef(0.25,0.1,0.3);
                                drawHead();
                glPopMatrix();
        glPopMatrix();
        
        glPushMatrix();
        glRotatef(tailAngle, 1.0, 0.0, 0.0);
                glPushMatrix();
                        glTranslatef(0,-0.7,0);
                        drawTail(tailAngle);
                glPopMatrix();
        glPopMatrix();
}