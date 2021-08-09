#include <gl/gl.h>
#include <gl/glu.h>
#include <gl/glut.h>
#include <math.h>
static GLfloat xRot = 0.0f;
static GLfloat yRot = 0.0f;
//static GLfloat spin=15.0;
//static GLfloat scale=0.0f;


GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat mat_shininess[] = { 10.0 };
GLfloat light_position1[] = { 1.0, 1.0, 1.0, 0.0 };
GLfloat light_position2[] = { -1.0, -1.0, -1.0, 0.0 };

GLfloat white_light[] = { 1.0, 1.0, 1.0, 1.0 };
GLfloat red_light[] = {9.,0.,0.,1.};
GLfloat blue_light[] = {0.,0.,1.,1.};
GLfloat white_ambient[] = { 0.1, 0.1, 0.1, 1.0 };





//int toot=0;

void init(void)
{

 glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);

    glLightfv(GL_LIGHT0, GL_POSITION, light_position1);
    glLightfv(GL_LIGHT1, GL_POSITION, light_position2);

    glLightfv(GL_LIGHT0, GL_DIFFUSE, white_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, white_light);

    glLightfv(GL_LIGHT0, GL_DIFFUSE, red_light);
    glLightfv(GL_LIGHT1, GL_DIFFUSE, blue_light);
    glLightfv(GL_LIGHT0, GL_SPECULAR, red_light);
    glLightfv(GL_LIGHT1, GL_SPECULAR, blue_light);
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, white_ambient);

    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_LIGHT1);
    glEnable(GL_DEPTH_TEST);
}

void Display(void)
{   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


 glMatrixMode(GL_MODELVIEW);



    glPushMatrix();
   glRotatef(xRot, 1.0f, 0.0f, 0.0f);
    glRotatef(yRot, 0.0f, 1.0f, 0.0f);


    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-40.0f,0.0f,15.0f);
        glVertex3f(40.0f,0.0f,15.0f);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(40.0f,-15.0f,15.0f);
        glVertex3f(-40.0f,-15.0f,15.0f);
    glEnd();


    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(40.0f,0.0f,-15.0f);
        glVertex3f(40.0f,0.0f,15.0f);
        glVertex3f(40.0f,-15.0f,15.0f);
        glVertex3f(40.0f,-15.0f,-15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-40.0f,0.0f,-15.0f);
        glVertex3f(-40.0f,0.0f,15.0f);
        glVertex3f(-40.0f,-15.0f,15.0f);
        glVertex3f(-40.0f,-15.0f,-15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-40.0f,0.0f,-15.0f);
        glVertex3f(40.0f,0.0f,-15.0f);
        glColor3f(1, 1.0, 1.0);
        glVertex3f(40.0f,-15.0f,-15.0f);
        glVertex3f(-40.0f,-15.0f,-15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-40.0f,0.0f,15.0f);
        glVertex3f(-40.0f,0.0f,-15.0f);
        glVertex3f(40.0f,0.0f,-15.0f);
        glVertex3f(40.0f,0.0f,15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-40.0f,-15.0f,15.0f);
        glVertex3f(-40.0f,-15.0f,-15.0f);
        glVertex3f(40.0f,-15.0f,-15.0f);
        glVertex3f(40.0f,-15.0f,15.0f);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-20.0f,0.0f,15.0f);
        glVertex3f(-10.0f,10.0f,15.0f);
        glVertex3f(20.0f,10.0f,15.0f);
        glVertex3f(25.0f,0.0f,15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-20.0f,0.0f,-15.0f);
        glVertex3f(-10.0f,10.0f,-15.0f);
        glVertex3f(20.0f,10.0f,-15.0f);
        glVertex3f(25.0f,0.0f,-15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-10.0f,10.0f,15.0f);
        glVertex3f(-10.0f,10.0f,-15.0f);
        glVertex3f(20.0f,10.0f,-15.0f);
        glVertex3f(20.0f,10.0f,15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-10.0f,10.0f,15.0f);
        glVertex3f(-20.0f,0.0f,15.0f);
        glVertex3f(-20.0f,0.0f,-15.0f);
        glVertex3f(-10.0f,10.0f,-15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(20.0f,10.0f,15.0f);
        glVertex3f(20.0f,10.0f,-15.0f);
        glVertex3f(25.0f,0.0f,-15.0f);
        glVertex3f(25.0f,0.0f,15.0f);
    glEnd();
    glBegin(GL_POLYGON);
        glColor3f(1.0, 1.0, 1.0);
        glVertex3f(-30.0f,-15.0f,15.0f);
        glVertex3f(-30.0f,-15.0f,-15.0f);
        glVertex3f(30.0f,-15.0f,-15.0f);
        glVertex3f(30.0f,-15.0f,15.0f);
    glEnd();


    glBegin(GL_3D);
    glColor3f(1, 1, 1);
    glTranslated(-20.0f,-15.0f,15.0f);
    glutSolidTorus(2,5,5,100);



    glTranslated(0.0f,0.0f,-30.0f);
    glutSolidTorus(2,5,5,100);
    glTranslated(45.0f,0.0f,0.0f);
    glutSolidTorus(2,5,5,100);
    glTranslated(0.0f,0.0f,30.0f);
    glutSolidTorus(2,5,5,100);
    glEnd();




    glPushMatrix();
    glColor3f(3.0,4.0,5.0);
    //glRotatef(45,0,0,1);
    glScalef(10,0.3,3);

    glutWireCube(-20);


    glPopMatrix();


    glPopMatrix();
   glutSwapBuffers();

     glFlush();


}






void SpecialKeys(unsigned char key, int x, int y)
{
    switch(key)

    {
     case 'd':
          glTranslatef(-10,0.0,0.0);
          //glRotatef(spin,0,0,0);

                   //toot--;

            //Display();
            //glutIdleFunc(spinDisplay);

             glutPostRedisplay();

            break;
     case 'a':
          glTranslatef(+10,0.0,0.0);
            //toot++;
            //Display();

             glutPostRedisplay();

            break;
     case 't':
         xRot-= 10.0f;
          glutPostRedisplay();
     case 'y':
         yRot+=10.0f;
          glutPostRedisplay();

    }

}



int main(int argc, char* argv[])
{   glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutCreateWindow("oto");
     init();
    //glClearColor(0.0f, 0.0f, 0.0f, 1.0f );
    glEnable(GL_DEPTH_TEST);
    glShadeModel(GL_SMOOTH);
    glMatrixMode(GL_PROJECTION);

    glLoadIdentity();
    glOrtho (-100, 100, -100, 100,-100, 100);
    //gluLookAt (-100, 100.0, -100.0, 100.0, -100.0, 0.0, 5.0, 1.0, 0.0);

    glutKeyboardFunc(SpecialKeys);
    glutDisplayFunc(Display);


    //gluLookAt(0., 0., 0., 1., -1., 1., 0., 1., 0.);

    glutMainLoop();
    return 0;
}
