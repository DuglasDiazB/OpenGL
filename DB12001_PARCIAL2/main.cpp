//ALUMNO :DUGLAS ENRIQUE DIAZ BARAHONA

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
 float y=0.9;

void display()
{
    //  Borrar pantalla y Z-buffer
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    // Resetear transformaciones
    glLoadIdentity();

    glOrtho(-2.3, 2.3, -2.3, 2.3, -2.3, 2.3); 
    glViewport(0, 0, 500,500);
 
    
    
    //poste vertical
    //cara 1
    glBegin (GL_POLYGON);

    glColor3f(0.98,  0.625,  0.12);
    glVertex2f(-0.15, 0.1 );
    glVertex2f(0.15, 0.1);
    glVertex2f(0.15, 1.2);
    glVertex2f(-0.15, 1.2);
    glEnd();
    
        //cara 2
    glBegin (GL_POLYGON);
    glColor3f(0.60,  0.40,  0.12);
    glVertex2f(0.15,0.1 );
    glVertex2f(0.2, 0.2);
    glVertex2f(0.2, 1.2);
    glVertex2f(0.15, 1.2);
    glEnd();
    
   //// //CUBO DE LA BASE/////////

    //CARA 1 
    glBegin (GL_POLYGON);
    glColor3f(0.000, 0.000, 0.804 );
    glVertex2f(-0.3, -0.1 );
    glVertex2f(0.3, -0.1);
    glVertex2f(0.3, 0.1);
    glVertex2f(-0.3, 0.1);
    glEnd();
    
    //CARA 2
    glBegin (GL_POLYGON);
    glColor3f(0.000, 0.000, 0.502);
    glVertex2f(0.3, -0.1 );
    glVertex2f(0.4, 0.0);
    glVertex2f(0.4, 0.2);
    glVertex2f(0.3, 0.1);
    glEnd();
    
    //cara 3
    glBegin (GL_POLYGON);
    glColor3f(0.000, 0.000, 1.000);
    glVertex2f(-0.3, 0.1 );
    glVertex2f(0.3, 0.1);
    glVertex2f(0.4, 0.2);
    glVertex2f(-0.2, 0.2);
    glEnd();
    
    
    
    //DIBUJAMOS LOS CUBOS QUE ESTAN ALREDEDOR
    
    //CARA FRONTAL1
    glBegin (GL_POLYGON);
    glColor3f(0.000, 1.000, 0.000);
    glVertex2f(0.5, 0.7 );
    glVertex2f(0.7, 0.7);
    glVertex2f(0.7, 0.9);
    glVertex2f(0.5, 0.9);
    glEnd();
    
    //CARA LATERAL1
    glBegin (GL_POLYGON);
    glColor3f(0.196, 0.804, 0.196);
    glVertex2f(0.7, 0.7 );
    glVertex2f(0.75, 0.75);
    glVertex2f(0.75, 0.95);
    glVertex2f(0.7, 0.9);
    glEnd();
    
    //CARA SUPERIOR1
    glBegin (GL_POLYGON);
    glColor3f(0.486, 0.988, 0.000);
    glVertex2f(0.5, 0.9 );
    glVertex2f(0.7, 0.9);
    glVertex2f(0.75, 0.95);
    glVertex2f(0.55, 0.95);
    glEnd();
    
    
    
    
    //CARA FRONTAL2
    glBegin (GL_POLYGON);
    glColor3f(1.000, 0.000, 0.000);
    glVertex2f(0.4, -0.7 );
    glVertex2f(0.6, -0.7);
    glVertex2f(0.6, -0.5);
    glVertex2f(0.4, -0.5);
    glEnd();
    
    //CARA LATERAL2
    glBegin (GL_POLYGON);
    glColor3f(0.698, 0.133, 0.133);
    glVertex2f(0.6, -0.7 );
    glVertex2f(0.65, -0.65);
    glVertex2f(0.65, -0.45);
    glVertex2f(0.6, -0.5);
    glEnd();
    
    //CARA SUPERIOR2
    glBegin (GL_POLYGON);
    glColor3f(0.863, 0.078, 0.235);
    glVertex2f(0.4, -0.5 );
    glVertex2f(0.6, -0.5);
    glVertex2f(0.65,-0.45);
    glVertex2f(0.45, -0.45);
    glEnd();
    
    
    
        //CARA FRONTAL3
    glBegin (GL_POLYGON);
    glColor3f(1.000, 1.000, 0.000);
    glVertex2f(2.0, 0.4 );
    glVertex2f(2.2, 0.4);
    glVertex2f(2.2, 0.6);
    glVertex2f(2.0, 0.6);
    glEnd();
    
    //CARA LATERAL3
    glBegin (GL_POLYGON);
    glColor3f(1.000, 0.843, 0.000);
    glVertex2f(2.2, 0.4 );
    glVertex2f(2.25, 0.45);
    glVertex2f(2.25, 0.65);
    glVertex2f(2.2 ,0.65);
    glEnd();
    
    //CARA SUPERIOR3
    glBegin (GL_POLYGON);
    glColor3f(1.000, 0.843, 0.000);
    glVertex2f(2.0, 0.6 );
    glVertex2f(2.2, 0.6);
    glVertex2f(2.25,0.65);
    glVertex2f(2.05, 0.65);
    glEnd();
    
    //DIBUJANDO LA PARTE SUPERIOR QUE ROTA
    // Rotar en el eje X,Y y Z   
    glRotatef( rotate_x, 1.0, 0.0, 0.0 );
    glRotatef( rotate_y, 0.0, 1.0, 0.0 );
    glRotatef( rotate_z, 0.0, 0.0, 1.0 );
    //glTranslatef(X, Y, Z); 	// Transladar en los 3 ejes
    
    
   //cara frontal
    glBegin (GL_POLYGON);
    glColor3f(0.255, 0.412, 0.882); //azul
    glVertex3f(-0.1, 1.2, 0.1);
    glVertex3f(1.7, 1.2, 0.1);
    glVertex3f(1.7, 1.4, 0.1);
    glVertex3f(-0.1, 1.4, 0.1);
    glEnd();
    
          //////cara trasera 
    glBegin (GL_POLYGON); 
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(0.0, 1.3, 0.1);
    glVertex3f(1.8, 1.3, 0.1);
    glVertex3f(1.8, 1.5, 0.1);
    glVertex3f(0.0, 1.5, 0.1);
    glEnd();
    
       //////cara superficial 
    glBegin (GL_POLYGON); 
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(-0.1, 1.4, 0.1);
    glVertex3f(1.7, 1.4, 0.1);
    glVertex3f(1.8, 1.5, 0.1);
    glVertex3f(0.0, 1.5, 0.1);
    glEnd();
    
    
    
    //cara inferior
    glBegin (GL_POLYGON); 
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(-0.1, 1.2, 0.1);
    glVertex3f(1.7, 1.2, 0.1);
    glVertex3f(1.8, 1.3, 0.1);
    glVertex3f(0.0, 1.3, 0.1);
    glEnd();
    
    
    //colgante//////// 
    //frontal
    glBegin (GL_POLYGON);
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(1.7, 0.9, 0.1);
    glVertex3f(1.9, 0.9, 0.1);
    glVertex3f(1.9, 1.4, 0.1);
    glVertex3f(1.7, 1.4, 0.1);
    glEnd();
    
    
    //cara trasera
    glBegin (GL_POLYGON);
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(1.8, 1.0, 0.1);
    glVertex3f(2.0, 1.0, 0.1);
    glVertex3f(2.0, 1.5, 0.1);
    glVertex3f(1.8, 1.5, 0.1);
    glEnd();
    
    //cara derecha
    glBegin (GL_POLYGON);
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(1.9, 0.9, 0.1);
    glVertex3f(2.0, 1.0, 0.1);
    glVertex3f(2.0, 1.5, 0.1);
    glVertex3f(1.9, 1.4, 0.1);
    glEnd();
    
    //cara izquierda
    glBegin (GL_POLYGON);
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(1.7, 0.9, 0.1);
    glVertex3f(1.8, 1.0, 0.1);
    glVertex3f(1.8, 1.5, 0.1);
    glVertex3f(1.7, 1.5, 0.1);
    glEnd();
    
      //cara superiori
    glBegin (GL_POLYGON);
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(1.7, 1.4, 0.1);
    glVertex3f(1.9, 1.4, 0.1);
    glVertex3f(1.9, 1.5, 0.1);
    glVertex3f(1.8, 1.5, 0.1);
    glEnd();
    
    
    //cara inferior
    glBegin (GL_POLYGON);
    glColor3f(0.255, 0.412, 0.882);
    glVertex3f(1.7, 0.9, 0.1);
    glVertex3f(1.9, 0.9, 0.1);
    glVertex3f(2.0, 1.0, 0.1);
    glVertex3f(1.8, 1.0, 0.1);
    glEnd();
    
  
      ////linea para el cable de la grua
      
      glTranslatef(0.0,Y,0.0);
      glLineWidth(8.0);
      
    glBegin (GL_LINES);
    
    glColor3f(0.416, 0.353, 0.804);
    
    glVertex2f(1.8 ,0.9 );
    glVertex2f(1.8, 0.2);
   
    glEnd();
    
    glTranslatef(1.8,0.2,0.0);
    glRotatef (-15,0.1,0.1,0.0);
    glColor3f(0.663, 0.663, 0.663);
    glutSolidCube(0.18);
    
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
    //  Flecha arriba: PARA DESPLAZAR HACIA ARRIBA LA PUNTA
    else if (key == GLUT_KEY_UP){
        if(Y<=0.5)
        Y += 0.1f;
	}
    //  Flecha abajo: PARA QUE SE ESTIRE HACIA ABAJO LA PUNTO
    else if (key == GLUT_KEY_DOWN){
        if(Y>0.1)
        Y -= 0.1f;
	}
    //  Tecla especial F2 : rotación en eje Z positivo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z += 7;
    //  Tecla especial F2 : rotación en eje Z negativo 7 grados
    else if (key == GLUT_KEY_F2)
        rotate_z -= 7;

    //  Solicitar actualización de visualización
    glutPostRedisplay();

}



void init (void)
{
    glMatrixMode(GL_PROJECTION); 
    glLoadIdentity();
    glOrtho(-2.0, 2.0, -2.0, 2.0, -2.0, 2.0); 
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
    init();
    // Habilitar la prueba de profundidad de Z-buffer
    glEnable(GL_DEPTH_TEST);

    // Funciones de retrollamada
    glutDisplayFunc(display);
    //glutKeyboardFunc(keyboard);
    glutSpecialFunc(specialKeys);

    // Pasar el control de eventos a GLUT
    glutMainLoop();

    // Regresar al sistema operativo
    return 0;

}
