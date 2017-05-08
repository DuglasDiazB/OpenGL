
//Alumno: Duglas Enrique Diaz Barahona ---DB12001
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdio.h>
//definimos las variables
double rotate_y=0;
double rotate_x=0;


GLfloat X = 0.0f;
GLfloat Y = 0.0f;
GLfloat Z = 0.0f;
GLfloat scale = 1.0f;

GLfloat diffuseMaterial[4] = { 0.5, 0.5, 0.5, 1.0 };
void init(void)
{

//glClearColor (0.0, 0.0, 0.0, 0.0);

//glShadeModel (GL_FLAT);
}



void display(void)
{
/* borra la pantalla */
glClear (GL_COLOR_BUFFER_BIT);
glLoadIdentity();
    // Rotar en el eje X,Y y Z
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    
    glTranslatef(X, Y,Z); 	// Transladar en los 2 ejes
     //Otras transformaciones
     glScalef(scale, scale, scale);


/* seleccionamos la matriz modelo/vista */
glMatrixMode(GL_MODELVIEW);
/* color */
glColor3f(1.0, 1.0, 1.0);
/* transformación modelo/vista */
gluLookAt(0.0,0.0,0.2, //punto de vista en el eje X,Y,Z para que empieze de una vista de planta
0.0,0.0,0.0, //Centro del Objeto en el eje X,Y,Z
0.0,1.0,0.0); //Orientación de la cámara (vector UP el eje X,Y,Z)
/* Dibujamos una tetera */
glViewport(0, 0, 500, 500);
glOrtho(-2, 2, -2, 2, -2, 2);
glTranslatef(0.0, 0.0f, 0.0f);
glutWireTeapot(0.5);
glLoadIdentity();
glTranslatef(0.0, 1.0f, 0.0f);
glutSolidSphere(0.2,8,8);
glLoadIdentity();
glTranslatef(0.0, -1.0f, 0.0f);
glutSolidSphere(0.2,8,8);
glLoadIdentity();
glTranslatef(1.0, 0.0f, 0.0f);
glutSolidSphere(0.2,8,8);
glLoadIdentity();
glTranslatef(-1.0, 0.0f, 0.0f);
glutSolidSphere(0.2,8,8);
/* Vacia el buffer de dibujo */
glFlush ();
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
 

    //  Solicitar actualización de visualización
    glutPostRedisplay();

}



// Función para controlar teclas normales del teclado.
void keyboard(unsigned char key, int x, int y)
{
    //control de teclas que hacen referencia a Escalar y transladar el cubo en los ejes X,Y,Z.
    switch (key)
    {
    case 'z':
        scale=0.5;
        break;
    case 'Z':
        scale=1.5;
        break;
    case 'x' :
        X += 0.1f;
        break;
    case 'X' :
        X -= 0.1f;
        break;
    case 'y' :
        Y += 0.1f;
        break;
    case 'Y' :
        Y -= 0.1f;
        break;
  
    case 'q':
        exit(0);			// exit
    }
    glutPostRedisplay();
}


void reshape(int w, int h)
{
/* definemos el marco */
glViewport(0, 0, w, h);
/* cambiamos a la matriz de proyección */
glMatrixMode(GL_PROJECTION);
/* definimos una proyección perspectiva con
un fovy de 60 grados y el near a 1.0 y el
far a 20.0 */
glLoadIdentity();
gluPerspective(60.0, GLfloat(w) / GLfloat(h), 1.0, 20.0);
}





int main(int argc, char** argv)
{
// Inicializa la librería auxiliar GLUT
glutInit(&argc, argv);
// Inicializa el modo de visualización
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
// Indica el tamaño de la ventana (ancho,alto)
glutInitWindowSize(500, 500);
// Indica la posición inicial (xmin,ymin)
glutInitWindowPosition(100, 100);// Abre la ventana con el título indicado
glutCreateWindow("Dibujando una tetera 3d");
// Inicializar valores
init();
// Indica cual es la función de dibujo
glutDisplayFunc(display);
 glutKeyboardFunc(keyboard);
glutSpecialFunc(specialKeys);
// Indica cual es la función para el cambio de tamaño de la ventana
//glutReshapeFunc(reshape);


   // Luz y materiales
    glColor3f(0.000, 0.000,1.000); // Establecer color actual a azul
    GLfloat light_position[] = {1.0f, 1.0f, 1.0f,0.0}; // aplicandole la posicion de la luz
   // GLfloat light_color[] = {0.529, 0.808, 0.980}; // el color de la luz quse sea azul
    GLfloat ambient_color[] = {0.000, 0.000, 1.000}; // le aplica una luz azul debil
    GLfloat mat_shininess[] = {50.0};
    GLfloat mat_ambientColor[] = {0.0f, 0.0f, 0.0f, 1.0f}; //Intensidad RGBA  de la luz del ambiente
    GLfloat mat_diffuseColor[] = {1.0f, 1.0f, 1.0f, 1.0f}; //Diseminacion RGBA de la intensidad de la luz
    GLfloat mat_specularColor[] = {1.0f, 1.0f, 1.0f, 1.0f};
 
    // Establecer el material actual  
    glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
    glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambientColor);
    glMaterialfv(GL_FRONT, GL_DIFFUSE, mat_diffuseColor);
    glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specularColor);
 
    // Establecer luz
    glLightfv(GL_LIGHT0, GL_POSITION, light_position);
    glLightfv(GL_LIGHT0, GL_AMBIENT, ambient_color);



//habilitamos todas las funciones a usar
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL); // Para que se usen los parametros dados referidos al color
    glEnable(GL_NORMALIZE);
 



// Comienza el bucle de dibujo y proceso de eventos.
glutMainLoop();
}
