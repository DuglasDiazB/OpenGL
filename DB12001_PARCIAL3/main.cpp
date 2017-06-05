#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <SOIL/SOIL.h> 
#include <GL/glu.h>

GLuint texture[0];

//Definimos variables
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;

GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;

double v = 4; //para dibujar la base


static void init(void)
{
   GLfloat position[] = { 0.5, 0.5, 3.0, 0.0};

   glEnable(GL_DEPTH_TEST);

   glLightfv(GL_LIGHT0, GL_POSITION, position);
   glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
}

///////////////////////////////////////////////////////////////////////////
//creamos una funcion para que llame a los materiales en cada objeto
float ambiente1, ambiente2, ambiente3, diffuse1, diffuse2, diffuse3, specular1, specular2, specular3;
void material(float ambiente1, float ambiente2, float ambiente3, float diffuse1, float diffuse2, float diffuse3, float specular1, float specular2, float specular3)
{	
    GLfloat mat_ambient_color[] = {ambiente1, ambiente2, ambiente3}; // le aplica una luz azul debil
    GLfloat mat_diffuseColor[] = {diffuse1, diffuse2, diffuse3}; //Diseminacion RGBA de la intensidad de la luz del ambiente
    
    GLfloat mat_specularColor[] = {specular1, specular2, specular3};
     GLfloat mat_shininess[] = {30.8974f};

	 // Establecer el material actual  
	 glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient_color);
	 glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuseColor);
	 glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specularColor);
     glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess); 
}
///////////////////////////////////////////////////////////////////////////////////////////////////////
//creamos una funcion para dibujar la base
static void base(GLfloat x, GLfloat y, GLfloat z)
{
 glPushMatrix();
 glTranslatef (x, y, z);
 material(0.19225,0.19225,0.19225,0.50754,0.50754,0.50754,0.508273,0.508273,0.508273);   
 glBegin(GL_POLYGON);
   
    glVertex3f(v,  v,  v );
    glVertex3f(v,  v, -v );
    glVertex3f(-v,  v, -v );
    glVertex3f(-v,  v,  v);
    glEnd();
    glPopMatrix();	
}

  //funcion para dibujar la esfera
static void esfera (GLfloat x, GLfloat y, GLfloat z)
{
   glPushMatrix();
   glTranslatef (x, y, z);
   material(0.0,0.0,0.0,0.5,0.0,0.0,0.7,0.6,0.6);
   glutSolidSphere(1.0, 26, 26);
   glPopMatrix();
}

//funcion dodecahedro
static void dodecaedro (GLfloat x, GLfloat y, GLfloat z)
{
  glPushMatrix();
  glTranslatef (x, y, z);
  glScalef(0.5,0.5,0.5);
  material(0.25,0.20725,0.20725,1,0.829,0.829,0.296648,0.296648,0.296648);
  glutSolidDodecahedron ();
  glPopMatrix();

}

//funcion cono
static void cono(GLfloat x, GLfloat y, GLfloat z)
{
   glPushMatrix();
   glTranslatef (x, y, z);
   glRotatef(-90,1,0,0);
   material(0.329412,0.223529,0.027451,0.780392,0.568627,0.113725,0.992157,0.941176,0.807843);
   glutSolidCone (1, 1,20,20);
   glPopMatrix();
}

//funcion icosahedro
static void icosahedro(GLfloat x, GLfloat y, GLfloat z)
{
   glPushMatrix();
   glTranslatef (x, y, z);
   material(0.1,0.18725,0.1745,0.396,0.74151,0.69102,0.297254,0.30829,0.306678);
   glutSolidIcosahedron ();
   glPopMatrix();
}

//funcion tetera
static void tetera(GLfloat x, GLfloat y, GLfloat z)
{
  glPushMatrix();
  glTranslatef (x, y, z);
  material(0.24725,0.1995,0.0745,0.75164,0.60648,0.22648,0.628281,0.555802,0.366065);
  glutSolidTeapot(0.75);
  glPopMatrix();	
}

//funcion cubo
static void cubo(GLfloat x, GLfloat y, GLfloat z)
{
   glPushMatrix();
   glTranslatef (x,y,z);
   material(0.0,0.1,0.06,0.0,0.50980392,0.50980392,0.50196078,0.50196078,0.50196078);
   glutSolidCube (1.75);
   glPopMatrix();	
}

//funcion torus
static void torus(GLfloat x, GLfloat y, GLfloat z)
{
   glPushMatrix();
   glTranslatef (x, y, z);
   material(0.0,0.05,0.0,0.4,0.5,0.4,0.04,0.7,0.04);
   glutSolidTorus (0.5,0.65,20,20);
   glPopMatrix();	
}

//funcion tetahedro
static void tetrahedro(GLfloat x, GLfloat y, GLfloat z)
{
   glPushMatrix();
   glTranslatef (x, y, z);
   glRotatef(-20,0,0,1);
   material(0.0215, 0.1745, 0.0215, 0.07568,0.61424, 0.07568, 0.633, 0.727811, 0.633);
   glutSolidTetrahedron ();
   glPopMatrix();
}

//funciion ocatahedro
static void octahedro(GLfloat x, GLfloat y, GLfloat z)
{
  glPushMatrix();
  glTranslatef (x, y, z);
  material(0.0215,0.1745,0.0215,0.07568,0.61424,0.07568,0.633,0.727811,0.633);
  glutSolidOctahedron ();
  glPopMatrix();
}



void display()
{
  glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     glLoadIdentity();
   //Posicionamos la camara
    gluLookAt (0, 6,10.0 , 0, 0, 0, 0.0, 1.0, 0.0);
    
   //Empezamos a dibujar con la funciones que ya se crearon 
   //llamamamos a la superficie
   glPushMatrix();
   glNormal3f(0,1,0);
   base(0,-3,0);
   glPopMatrix();
   
   
   //llamamos al tetrahedro
   glPushMatrix();
   tetrahedro(3.0,1.25,3.0);
   glPopMatrix();
   
   //llamamos a la tetera
   glPushMatrix();
   tetera(0.0,1.25,3.0);
   glPopMatrix();

   //llamamos al icosahedro
   glPushMatrix();
   icosahedro(-3.0,1.5,3.0);
   glPopMatrix(); 


///////////inicia segunda fila//////////////////////////   
   
   //llamamos al  cubo
   glPushMatrix();
   cubo(3.0,1.5,1.0);
   glPopMatrix();
   
   
   //llamamos al cono
   glPushMatrix();
   cono(0.0,1.5,1.0);
   glPopMatrix();
    
   //llamamos a la esfera
   glPushMatrix();
   esfera(-3.0, 1.5, 1.0);
   glPopMatrix();
   

///////Tercera fila////////////////////
  

   //llamamos al Dodecaedrom
   glPushMatrix();
   dodecaedro(3.0,1.5,-2.0);
   glPopMatrix();

   //llamamos al  torus
   glPushMatrix();
   torus(0.0,1.75,-2.0);
   glPopMatrix();
     
   //llamamos al octahedro
     glPushMatrix();
   octahedro(-3.0,1.5,-2.0);
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







int main(int argc, char** argv)
{
   glutInit(&argc, argv);
   glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
   glutInitWindowSize(500, 500);
   glutCreateWindow("Figuras Sombras");
   glEnable(GL_DEPTH_TEST);
   init();
   glutReshapeFunc (reshape);

   glutDisplayFunc (display);
   glutMainLoop();
   return 0;
}

