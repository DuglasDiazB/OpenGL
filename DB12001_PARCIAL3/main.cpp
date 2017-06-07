
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

static void init(void)
{
   //Posicion de la Luz
   GLfloat position[] = { 0.5, 0.5, 3.0, 0.0};
   //Activando la Iluminacion
   glEnable(GL_DEPTH_TEST);
   glLightfv(GL_LIGHT0, GL_POSITION, position);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
}


//creamos una funcion para las sombras alpha
void alpha (){
   glEnable (GL_BLEND);
   glBlendFunc (GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
   glShadeModel (GL_FLAT);
    glClearColor (1.0, 1.0, 1.0, 1.0);
    glColor4f(0.0,0.0,0.0,1.0);
   }
   
   
void display(void)
{
	//Definiendo los Materiales
	GLfloat mat_ambient[] = { 0.24725,0.1995,0.0745};
	GLfloat mat_diffuse[] = { 0.75164,0.60648,0.22648  };
	GLfloat mat_specular[] = { 0.628281,0.555802,0.366065};
	GLfloat shine[] = {30.8974f};
   //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     glLoadIdentity();
   //posicion de vista de la camara
    gluLookAt (0, 6,10.0 , 0, 0, 0, 0.0, 1.0, 0.0);
    
    
    //Declaramos lo materiales a usar
   glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
   glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
   glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
   glMaterialfv(GL_FRONT, GL_SHININESS, shine);
   
   
   
   
   //CReamos la superficie para las figuras
   glPushMatrix();
   glTranslatef (0, -1.0, 0);
   glScalef(12.0,0.5,10.0);
   glNormal3f(0,1,0);
   glutSolidCube(1);
   glPopMatrix();
   
   
   
  
   //////////PRIMERA LINEA DE FIGURAS/////////////////
      //Tetrahedro
   glPushMatrix();
   glTranslatef (3, 1.50, 3);
   glScalef(1.5,1.5,1.5);
   glRotatef(-20,0,0,1);
   glutSolidTetrahedron ();
   glPopMatrix();
   
    //Tetera
   glPushMatrix();
   glTranslatef (0, 1.5, 3);
   glRotatef(-45,0,1,0);
   glutSolidTeapot (1);
   glPopMatrix();
   
     //Icosahedro
   glPushMatrix();
   glTranslatef (-3, 1.50, 3);
   glutSolidIcosahedron ();
   glPopMatrix();
   
   
/////////////SEGUNDA LINEAR////////////////////////////////////////////   
   
    //Cubo
   glPushMatrix();
   glTranslatef (3, 1.50, 0);
   glutSolidCube (1.75);
   glPopMatrix();
  
   //Cono
   glPushMatrix();
   glTranslatef (0, 1.50, 0);
   glRotatef(-90,1,0,0);
   glutSolidCone (1, 1.5,20,20);
   glPopMatrix();
   
   //Esfera
   glPushMatrix();
   glTranslatef (-3, 1.50, 0);
   glutSolidSphere (1,20,20);
   glPopMatrix();
   
   
   
   
 /////////////////TERCERA LINEA///////////////////////
 
 
   //Dodecahedro
   glPushMatrix();
   glTranslatef (-3, 1.50, -3);
   glRotatef(-90,0,1,0);
   glRotatef(-180,1,0,0);
   glRotatef(45,1,0,0);
   glScalef(0.9,0.9,0.9);
   glutSolidDodecahedron ();
   glPopMatrix();
   
  //Torus
   glPushMatrix();
   glTranslatef (0, 1.50, -3);
   glutSolidTorus (0.5,0.65,20,20);
   glPopMatrix();
   
   
   //Octahedro
   glPushMatrix();
   glTranslatef (3, 1.50, -3);
   glutSolidOctahedron ();
   glPopMatrix();

 
   
   //Desactivamos los materiales e iluminacion para empezar con las sombras
   glDisable(GL_LIGHTING);
   glDisable(GL_LIGHT0);
   
   
   //llamamos a la funcion donde tenemos los parametros del alpha_color
   alpha();
   
   
 
   //Sombra para Tetrahedro
   glPushMatrix();
   glTranslatef (3, 0.0, 3);
   glScalef(1.5,0.1,1.5);
   glRotatef(-20,0,0,1);
   glutSolidTetrahedron ();
   glPopMatrix();
   
   //sombra para la tetera
   glPushMatrix();
   glTranslatef (0, 0, 3);
   glRotatef(-45,0,1,0);
   glScalef(1,0.1,1);
   glutSolidTeapot (1);
   glPopMatrix();
   
     //Sombra para Icosahedro
   glPushMatrix();
   glTranslatef (-3, 0, 3);
   glScalef(1.0,0.1,1);
   glutSolidIcosahedron ();
   glPopMatrix();
   
   
   ///////////////////////////////////////////////
   
      //sombra para el cubo
   glPushMatrix();
   glTranslatef (3, 0.0, 0);
   glScalef(0.875,0.1,0.875);
   glutSolidCube (1.75);
   glPopMatrix();
   
     //Sombra para Cono
   glPushMatrix();
   glTranslatef (0, 0.5, 0);
   glScalef(1,0.1,1);
   glRotatef(-90,1,0,0);
   glutSolidCone (1, 1.5,20,20);
   glPopMatrix();
     
      //Sombra para la  Esfera
   glPushMatrix();
   glTranslatef (-3.5, 0.0, 0);
   glScalef(1.0,0.1,1);
   glutSolidSphere (1,20,20);
   glPopMatrix();
 
//~ ///////////////////////////////////////////
   
    //Sombra para el Dodecahedro
   glPushMatrix();
   glTranslatef (-3, 0.0, -3);
   glRotatef(-90,0,1,0);
   glRotatef(-180,1,0,0);
   glRotatef(45,1,0,0);
   glScalef(0.9,0.1,0.9);
   glutSolidDodecahedron ();
   glPopMatrix();
   
   //Sombra para el Torus
   glPushMatrix();
   glTranslatef (0, 0.0, 0);
   glScalef(1.0,0.1,0.5);
   glutSolidTorus (0.5,0.65,20,20);
   glPopMatrix();
  
   //~ 
       //Sombra para el Octahedro
   glPushMatrix();
   glTranslatef (3, 0.0, -3);
   glScalef(1.0,0.1,1);
   glutSolidOctahedron ();
   glPopMatrix();

   glFlush();
   glutSwapBuffers();
}
//Funsion Reshape
	void reshape (int w, int h)
{
glViewport (0, 0, (GLsizei) w, (GLsizei) h);
glMatrixMode (GL_PROJECTION);
glLoadIdentity ();
glFrustum (-1.0, 1.0, -1.0, 1.0, 1.5, 60.0);
glMatrixMode(GL_MODELVIEW);
}
//Funcion main
int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize(500, 500);
   glutCreateWindow("Figuras_Sombras");
   glEnable(GL_DEPTH_TEST);
   init();
   glutReshapeFunc (reshape);
   glutDisplayFunc (display);
   glutMainLoop();
   return 0;
}
