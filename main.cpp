#include <windows.h>
#include <GL/glut.h>
#include <math.h>



void display(void){
     glClear (GL_COLOR_BUFFER_BIT); //background
     glColor3f (0.0, 0.0, 0.0);
     glBegin(GL_POLYGON);
     glVertex3f (0.0, 0.0, 0.0);
     glVertex3f (1.0, 0.0, 0.0);
     glVertex3f (1.0, 1.0, 0.0);
     glVertex3f (0.0, 1.0, 0.0);
     glEnd();
     
     glColor3f (0.0, 0.45, 0.65); //kotak 1
     glBegin(GL_POLYGON);
     glVertex3f (0.10, 0.10, 0.0);
     glVertex3f (0.30, 0.10, 0.0);
     glVertex3f (0.30, 0.35, 0.0);
     glVertex3f (0.10, 0.35, 0.0);
     glEnd();
     
     glColor3f (1.0, 1.0, 1.0);   //kotak isi
     glBegin(GL_POLYGON);
     glVertex3f (0.15, 0.15, 0.0);
     glVertex3f (0.25, 0.15, 0.0);
     glVertex3f (0.25, 0.30, 0.0);
     glVertex3f (0.15, 0.30, 0.0);
     glEnd();
     
     glColor3f (0.0, 0.55, 0.0);  //segitiga
     glBegin(GL_TRIANGLES);
     glVertex3f(0.40, 0.10, 0.0);
     glVertex3f(0.60, 0.10, 0.0);
     glVertex3f(0.50, 0.35, 0.0);
     glEnd();
     
     glColor3f (1.0, 1.0, 0.0);  //jajar genjang
     glBegin(GL_POLYGON);
     glVertex3f (0.80, 0.10, 0.0);
     glVertex3f (0.90, 0.10, 0.0);
     glVertex3f (0.95, 0.35, 0.0);
     glVertex3f (0.75, 0.35, 0.0);
     glEnd();
     
     glBegin(GL_TRIANGLES);  //segitiga terbalik
     glColor3f(0.0, 0.0, 1.0);  /* biru */
     glVertex3f(0.20, 0.40, 0.0);
     glColor3f(1.0, 1.0, 1.0);  /* ijo */
     glVertex3f(0.10, 0.70, 0.0);
     glColor3f(1.0, 0.0, 0.0);  /* merah */
     glVertex3f(0.30, 0.70, 0.0);
     glColor3f (0.0, 0.0, 0.0);
     glEnd();
     
     glColor3f (0.45, 0.0, 0.85);  //jajar genjang terbalik
     glBegin(GL_POLYGON);
     glVertex3f (0.40, 0.40, 0.0);
     glVertex3f (0.60, 0.40, 0.0);
     glVertex3f (0.55, 0.70, 0.0);
     glVertex3f (0.45, 0.70, 0.0);
     glEnd();
     
     glColor3f (1.0, 1.0, 1.0);   //ketupat
     glBegin(GL_POLYGON);
     glVertex3f (0.85, 0.40, 0.0);
     glVertex3f (0.95, 0.55, 0.0);
     glVertex3f (0.85, 0.70, 0.0);
     glVertex3f (0.75, 0.55, 0.0);
     glEnd();
     
     glColor3f (1.0, 0.0, 0.0);   //isi ketupat
     glBegin(GL_POLYGON);
     glVertex3f (0.85, 0.45, 0.0);
     glVertex3f (0.90, 0.55, 0.0);
     glVertex3f (0.85, 0.65, 0.0);
     glVertex3f (0.80, 0.55, 0.0);
     glEnd();
   
     glBegin(GL_POLYGON);
     glColor3f(0.0,1.0,1.0); /* biru langit*/
     glVertex2f(0.15,0.75);
     glVertex2f(0.25,0.75);
     glVertex2f(0.30,0.85);
     glVertex2f(0.25,0.95);
     glVertex2f(0.15,0.95);
     glVertex2f(0.10,0.85);
     glEnd();
     
     glBegin(GL_POLYGON);
     glColor3f(1.0,0.0,1.0); /* ungu */
     glVertex2f(0.50,0.75);
     glVertex2f(0.60,0.80);
     glVertex2f(0.60,0.90);
     glVertex2f(0.50,0.95);
     glVertex2f(0.40,0.90);
     glVertex2f(0.40,0.80);
     glEnd();
   
     glColor3f (0.55, 0.35, 0.45);
     glBegin(GL_POLYGON);
     glVertex3f (0.75, 0.75, 0.0);
     glVertex3f (0.90, 0.75, 0.0);
     glVertex3f (0.95, 0.95, 0.0);
     glVertex3f (0.80, 0.95, 0.0);
     glEnd();
   
     glFlush ();
}

void init (void){
     glClearColor (0.0, 0.0, 0.0, 0.0);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 600);
glutInitWindowPosition (200, 100);
glutCreateWindow ("Bangun Ruang");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0;
}
