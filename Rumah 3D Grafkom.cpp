//
//  main.cpp
//  Rumah 3D - Grafkom
//
//  Created by WARHAM ALIANSA on 24/12/21.
//

//Program ini untuk mensimulasikan transformasi 3 Dimensi.
//Tekan x untuk putar dengan sumbu putar x
//Tekan y untuk putar dengan sumbu putar y
//Tekan z untuk putar dengan sumbu putar z
//Tekan w untuk menambah nilai y
//Tekan s untuk mengurangi nilai y
//Tekan a untuk menambah nilai x
//Tekan d untuk mengurangi nilai x
//Tekan q untuk menambah nilai z
//Tekan e untuk mengurangi nilai z

// bagian  Warham Aliansa _E1E120102
#include <stdlib.h>
#include <GLUT/glut.h>
static float ypoz = 0, zpoz = 0, xpoz = 0,a = 0, b = 0,c = -10;
void coba(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int y4,int
z1,float z2,float z3){
     glColor3f(1,0,0); //sisi depan
     glVertex3d(x1,y1,z2);
     glVertex3d(x2,y2,z2);
     glVertex3d(x3,y3,z2);
     glVertex3d(x4,y4,z2);
     glColor3f(1,0,0);//right
     glVertex3d(x2,y2,z2);
     glVertex3d(x2,y2,z1);
     glVertex3d(x3,y3,z1);
     glVertex3d(x3,y3,z2);
     glColor3f(1,0,0);//back
     glVertex3d(x1,y1,z1);
     glVertex3d(x2,y2,z1);
     glVertex3d(x3,y3,z1);
     glVertex3d(x4,y4,z1);
     glColor3f(1,0,0);//left
     glVertex3d(x1,y1,z2);
     glVertex3d(x1,y1,z1);
     glVertex3d(x4,y4,z1);
     glVertex3d(x4,y4,z2);
     glColor3f(1,0,1);//bottom
     glVertex3d(x1,y1,z2);
     glVertex3d(x2,y2,z2);
     glVertex3d(x2,y2,z1);
     glVertex3d(x1,y1,z1);
     glColor3f(1,1,0);//top
     glVertex3d(x3,y3,z2);
     glVertex3d(x4,y4,z2);
     glVertex3d(x4,y4,z1);
     glVertex3d(x3,y3,z1);
}

// bagian Hadijah Nisa Ifayatin_E1E120008

// bagian La Ode Muhamad Ilham_E1E120030

// bagian Ita Puspita _E1E120072


// bagian Nur Rahmat Hidaya Karismadi_E1E120086


// bagian Ratri Pramudita_E1E119075


//Bagian Andri Rozaldin_E1E119048
glEnd();
glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex3d(8,1.8,4.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(8,1.8,-5.5);
glColor3f(1,0,0);
glVertex3d(-4.5,-1,-5.05);
glVertex3d(-4.5,1,-5.05);
glVertex3d(4.5,-1,-5.05);
glVertex3d(4.5,1,-5.05);
glEnd();
glutSwapBuffers(); /*Fungsi berikutnya adalah glutSwapBuffers(),
yaitu digunakan untuk menukar bagian belakan buffer menjadi buffer
layar (screen buffer). Dalam modus double-buffered, perintah
menggambar pada layar, tetapi menggambar pada buffer belakang layar.
Pada saat ingin menampilkan gambar, gambar yang berada di buffer
belakang layar dipindahkan ke buffer layar, sehingga menghasilkan
animasi yang sempurna.*/
}

// bagian Yusril Usman_E1E120054
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_RGB | GLUT_DEPTH | GLUT_DOUBLE);
glutInitWindowSize (500, 500);
glutInitWindowPosition (100, 100);
glutCreateWindow("Rumah|09_109,09_123,09_128");
init ();
glutDisplayFunc(display);
glutKeyboardFunc(keyboard);
glutMainLoop();
return 0;
}


