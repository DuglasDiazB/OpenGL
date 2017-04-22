//NOMBRE: DUGLAS ENRIQUE DIAZ BARAHONA --DB12001

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

int color =0; //variable para que nos permita almacenar colores para cambiarlos con las teclas



//creamos para la piramide normal

    // LADO INFERIOR: lado rojo
    
  void inferior_normal()
  {
	glBegin(GL_POLYGON);
    //glColor3f(1.0,  0.0,  0.0 );
    glVertex3f(0.3, -0.3, -0.3 ); //v1
    glVertex3f(0.3, -0.3,  0.3 ); //v2
    glVertex3f(-0.3, -0.3,  0.3 ); //v3
    glVertex3f(-0.3, -0.3, -0.3 ); //v4
    glEnd();
 }
    
  void cara1_normal()
  {
    //  cara 1 azul
    glBegin(GL_POLYGON);
    //glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(0.3,  -0.3,  -0.3 );
    glVertex3f(-0.3,  -0.3, -0.3 );
    glVertex3f(0.0,  0.3, 0.0 );
    glEnd();
}
    
    
  
    //  cara 2 amarillo
    void cara2_normal()
    {
    glBegin(GL_POLYGON);
    //glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(0.3, -0.3,  -0.3 );
    glVertex3f(0.3,  -0.3,  0.3 );
    glVertex3f(0.0,  0.3, 0.0 );
    glEnd();
}
    
    // cara 3 verde
    void cara3_normal()
    {
    glBegin(GL_POLYGON);
    //glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f(-0.3, -0.3, 0.3 );
    glVertex3f(-0.3,  -0.3, -0.3 );
    glVertex3f(0.0,  0.3,  0.0 );
    glEnd();
}
    
    // cara 4 barney purple
    void cara4_normal()
    {
    glBegin(GL_POLYGON);
    //glColor3f( 0.60,  0.40,  0.70 ); 
    glVertex3f(0.3, -0.3, 0.3 );
    glVertex3f(-0.3,  -0.3, 0.3 );
    glVertex3f(0.0,  0.3,  0.0 );
    glEnd();
}

void inferior_material()
{
	// Propiedades del material emerald
    GLfloat mat_ambient[] = { 0.0215, 0.1745, 0.0215};
    GLfloat mat_diffuse[] = { 0.07568, 0.61424, 0.07568};
    GLfloat mat_specular[] = { 0.633, 0.727811, 0.633};

//setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    //glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    
    //glColor3f(1.0,  0.0,  0.0 );
    glBegin(GL_POLYGON);
    glVertex3f(0.3, -0.3, -0.3 ); //v1
    glVertex3f(0.3, -0.3,  0.3 ); //v2
    glVertex3f(-0.3, -0.3,  0.3 ); //v3
    glVertex3f(-0.3, -0.3, -0.3 ); //v4
    glEnd();
}

void cara1_material()
{
	// Propiedades del material yellow rubber
    GLfloat mat_ambient[] = { 0.05, 0.05, 0.0};
    GLfloat mat_diffuse[] = {0.5, 0.5, 0.4};
    GLfloat mat_specular[] = { 0.7, 0.7, 0.04};

//setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    //glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    
    glBegin(GL_POLYGON);
   // glColor3f(0.0,  0.0,  1.0 );
    glVertex3f(0.3,  -0.3,  -0.3 );
    glVertex3f(-0.3,  -0.3, -0.3 );
    glVertex3f(0.0,  0.3, 0.0 );
    glEnd();
}

void cara2_material()
{
// Propiedades del material turquoise
    GLfloat mat_ambient[] = { 0.1, 0.18725, 0.1745};
    GLfloat mat_diffuse[] = {0.396, 0.74151, 0.69102};
    GLfloat mat_specular[] = {0.297254, 0.30829, 0.306678};

//setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    //glMaterialfv(GL_FRONT, GL_SHININESS, shine);	
    
    glBegin(GL_POLYGON);
   // glColor3f(1.0,  1.0,  0.0 );
    glVertex3f(0.3, -0.3,  -0.3 );
    glVertex3f(0.3,  -0.3,  0.3 );
    glVertex3f(0.0,  0.3, 0.0 );
    glEnd();
}

void cara3_material()
{
	// Propiedades del material red plastic
    GLfloat mat_ambient[] = { 0.0, 0.0, 0.0};
    GLfloat mat_diffuse[] = {0.5, 0.0, 0.0};
    GLfloat mat_specular[] = {0.7, 0.6, 0.6};

//setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    //glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    
    glBegin(GL_POLYGON);
    //glColor3f( 0.0,  1.0,  0.0 );
    glVertex3f(-0.3, -0.3, 0.3 );
    glVertex3f(-0.3,  -0.3, -0.3 );
    glVertex3f(0.0,  0.3,  0.0 );
    glEnd();
}

void cara4_material()
{
	// Propiedades del material pearl
    GLfloat mat_ambient[] = { 0.25, 0.20725, 0.20725};
    GLfloat mat_diffuse[] = {1, 0.829, 0.829};
    GLfloat mat_specular[] = {0.296648, 0.296648, 0.296648};

//setMaterial
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuse);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
    //glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    
    
     glBegin(GL_POLYGON);
    //glColor3f( 0.60,  0.40,  0.70 ); 
    glVertex3f(0.3, -0.3, 0.3 );
    glVertex3f(-0.3,  -0.3, 0.3 );
    glVertex3f(0.0,  0.3,  0.0 );
    glEnd();
    
}

void piramide_material()
{
	
	// Activamos la fuente de luz
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0); //Activamos las luces en 0
    glDepthFunc(GL_LESS); //comparación de profundidad
    glEnable(GL_DEPTH_TEST); //activa GL_DEPTH_TEST
    
    glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
   GLfloat light_position[] = { 0.0, 3.0, 3.0, 12.0 };  //2
    
    GLfloat shine[] = {12.21794872f};
    glMaterialfv(GL_FRONT, GL_SHININESS, shine);
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
     glShadeModel(GL_SMOOTH);
     glNormal3f( 0.0f, 0.0f, 1.0f);
     inferior_material();
     
     glNormal3f( 0.0f, 0.0f, 1.0f);
     cara1_material();
     
     glNormal3f( 0.0f, 0.0f, 1.0f);
     cara2_material();
     
     glNormal3f( 0.0f, 0.0f, 1.0f);
     cara3_material();
     
     glNormal3f( 0.0f, 0.0f, 1.0f);
     cara4_material();
     
}

void piramide_normal()
{
	inferior_normal();
	cara1_normal();
	cara2_normal();
	cara3_normal();
	cara4_normal();
	
}

void display()
{
	
    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    // Resetear transformaciones
    glLoadIdentity();
    // Rotar en el eje X,Y y Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
  //  glTranslatef(X, Y, Z); 	// Transladar en los 3 ejes
    // Otras transformaciones
   // glScalef(scale, scale, scale);
   
  if (color==0){
    piramide_material();}
    
    
      if (color==1)
   {
	   glColor3f(0,0,1);
	   //glColor3f(0.98, 0.625, 0.12);
	   piramide_normal();
   }
   
    if (color==2)
   {
	   glColor3f(1.0, 1.0, 0.0);
	   piramide_normal();
   }
   
   if (color==2)
   {
	   glColor3f(0.0, 1.0, 0.0);
	   piramide_normal();
   }
   
    if (color==3)
   {
	   glColor3f(0.0, 1.0, 1.0);
	   piramide_normal();
   }
   
    if (color==4)
   {
	   glColor3f(1.0, 0.0, 1.0);
	   piramide_normal();
   }
    if (color ==5)
    { 
		glColor3f(1.0, 0.0, 0.0);
		piramide_normal();
		}
   
    glFlush();
    glutSwapBuffers();
}
   



// Función para controlar teclas especiales
void specialKeys( int key, int x, int y )
{

    //  Flecha derecha: aumentar rotación 7 grados
    if (key == GLUT_KEY_RIGHT)
        rotate_y += 7;

    //  Flecha izquierda: rotación en eje Y negativo 7 grados
    else if (key == GLUT_KEY_LEFT)
        rotate_y -= 7;
    //  Flecha arriba: rotación en eje X positivo 7 grados
    else if (key == GLUT_KEY_UP)
        rotate_x += 7;
    //  Flecha abajo: rotación en eje X negativo 7 grados
    else if (key == GLUT_KEY_DOWN)
        rotate_x -= 7;
    //  Tecla especial F2 : rotación en eje Z positivo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z += 7;
    //  Tecla especial F2 : rotación en eje Z negativo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z -= 7;

    //  Solicitar actualización de visualización
    glutPostRedisplay();

}

// Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
	//desactivamos las propiedades de la iluminacion para que funcione la piramide con los colores
 glDisable(GL_LIGHTING);
 glDisable(GL_LIGHT0); 
 glDisable(GL_DEPTH_TEST);  
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
    case '1':
	   color=1;
        break;
        
    case '2':
        color=2;
        break;
    case '3' :
        color=3;
        break;
    case '4' :
        color=4;
        break;
    case '5':
         color=5;
         break;
    case 'q':
        exit(0);			// exit */
        
    }
    glutPostRedisplay();
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
    glutCreateWindow("PIRAMIDE CON MATERIALES");

    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);

    // Funciones de retrollamada
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);

    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
