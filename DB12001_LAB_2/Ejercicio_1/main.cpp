//Duglas Enrique Diaz Barahona
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

//Definimos variables
double rotate_y=0;
double rotate_x=0;
double rotate_z=0;

GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;

double c=0.4; //cooredenadas para dibujar el cuadro grande
double d=0.05; // puntos para el cubito
double g=0.45; //coordenada para la base marron




    //dibujamos un cubo que represente los cuadros negros
    void cubito()
    {
		 // Rotar en el eje X,Y y Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    glTranslatef(X, Y, Z); 	// Transladar en los 3 ejes
    // Otras transformaciones
    glScalef(scale, scale, scale);
    glScalef(scale, scale, scale);
    
    glBegin(GL_POLYGON);
    glColor3f( 0.0,  0.0, 0.0 );
    glVertex3f( d, -d, -d );
    glVertex3f( d,  d, -d );
    glVertex3f(-d,  d, -d );
    glVertex3f(-d, -d, -d );
    glEnd();
}



void display()
{
	
	  glLoadIdentity();
    glTranslatef(0.1f, -0.5f, -0.1f);
    cubito();
    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    // Resetear transformaciones
    glLoadIdentity();
    // Rotar en el eje X,Y y Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    glTranslatef(X, Y, Z); 	// Transladar en los 3 ejes
    // Otras transformaciones
    glScalef(scale, scale, scale);

   
   
    glBegin(GL_POLYGON);
    glColor3f( 1.0, 1.0, 1.0 );
    glNormal3f( 0.0f, 1.0f, 1.0f);
    glVertex3f(  c, -c, -c );     
    glNormal3f( 0.0f, 1.0f, 1.0f);
    glVertex3f(  c,  c, -c );
    glNormal3f( 0.0f, 1.0f, 1.0f);
    glVertex3f( -c,  c, -c );     
    glNormal3f( 0.0f, 1.0f, 1.0f);
    glVertex3f( -c, -c, -c );   

    glEnd();
    
    

    // base color marron
    glBegin(GL_POLYGON);
    glColor3f( 0.545, 0.271, 0.075 );
    glVertex3f( g, -g, g );
    glVertex3f( g,  g, g );
    glVertex3f(-g,  g, g );
    glVertex3f(-g, -g, g );
    glEnd();

 //dibujamos cada cubo pequenio
 /////////////////////////////////////////////////////////////////
   
    glLoadIdentity();
    glTranslatef(-0.35f, -0.35f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.15f, -0.35f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.05f, -0.35f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.25f, -0.35f, -0.5f);
    cubito();
    
    
    /////////////////////////////////////////////////////
    
        glLoadIdentity();
    glTranslatef(-0.25f, -0.25f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.05f, -0.25f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.15f, -0.25f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.35f, -0.25f, -0.5f);
    cubito();
   
    //////////////////////////////////////////////////////////
     glLoadIdentity();
    glTranslatef(-0.35f, -0.15f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.15f, -0.15f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.05f, -0.15f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.25f, -0.15f, -0.5f);
    cubito();
    
    ///////////////////////////////////////////////////////////
    glLoadIdentity();
    glTranslatef(-0.25f, -0.05f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.05f, -0.05f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.15f, -0.05f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.35f, -0.05f, -0.5f);
    cubito();
  
    ///////////////////////////////////////////////////////
    
      glLoadIdentity();
    glTranslatef(-0.35f, 0.05f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.15f, 0.05f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.05f, 0.05f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.25f, 0.05f, -0.5f);
    cubito();
    ////////////////////////////////////////////////////////////
    
    
     glLoadIdentity();
    glTranslatef(-0.25f, 0.15f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.05f, 0.15f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.15f, 0.15f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.35f, 0.15f, -0.5f);
    cubito();
    
    //////////////////////////////////////////////////
        glLoadIdentity();
    glTranslatef(-0.35f, 0.25f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.15f, 0.25f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.05f, 0.25f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.25f, 0.25f, -0.5f);
    cubito();
    ///////////////////////////////////////////////
       glLoadIdentity();
    glTranslatef(-0.25f, 0.35f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(-0.05f, 0.35f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.15f, 0.35f, -0.5f);
    cubito();
    
    glLoadIdentity();
    glTranslatef(0.35f, 0.35f, -0.5f);
    cubito();
    
    
    
    glFlush();
    glutSwapBuffers();

}




int main(int argc, char* argv[])
{

    //  Inicializar los parámetros GLUT y de usuario proceso
    glutInit(&argc,argv);

    // Solicitar ventana con color real y doble buffer con Z-buffer
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (0, 0);
    // Crear ventana
    glutCreateWindow("Cubo controlado por teclas");

    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);

    // Funciones de retrollamada
    glutDisplayFunc(display);


    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
