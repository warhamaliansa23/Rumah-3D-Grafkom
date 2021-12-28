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
void cobain(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,float z1,float z2,float z3){ //atap
     glColor3f(1,1,1);//kanan
     glVertex3d(x3,y3,z1);
     glVertex3d(x3,y3,z2);
     glVertex3d(x3,y1,z3);
     glColor3f(1,1,1);//kiri
     glVertex3d(x4,y4,z2);
     glVertex3d(x4,y4,z1);
     glVertex3d(x4,y1,z3);
}

// bagian La Ode Muhamad Ilham_E1E120030
void cobaini(int x1,int y1,int x2,int y2,int x3,int y3,int x4,int
y4,float z1,float z2,float z3){//atap
glColor3f(1,0,1);//belakang
     glVertex3d(x4,y4,z1);
     glVertex3d(x3,y3,z1);
     glVertex3d(x3,y1,z3);
     glVertex3d(x4,y1,z3);
     glColor3f(1,0,1);//depan
     glVertex3d(x3,y3,z2);
     glVertex3d(x4,y4,z2);
     glVertex3d(x4,y1,z3);
     glVertex3d(x3,y1,z3);
}

// bagian Ita Puspita _E1E120072


// bagian Nur Rahmat Hidaya Karismadi_E1E120086
void display(void)
{
glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
glLoadIdentity (); //digunakan untuk me-nonaktifkan/me-resettransformasi sebelumnya
glTranslatef(a,b,c); //digunakan untuk melakukan perpindahanposisi gelombang
glRotatef(xpoz,1,0,0);
glRotatef(ypoz,0,1,0);
glRotatef(zpoz,0,0,1);
glBegin(GL_QUADS);
//Rumah
coba(-8,-2,8,-2,8,2,-8,2,-5,3,0);//rumah
coba(2,-2,8,-2,8,2,2,2,-5,4,0);//kamar
coba(-8,-2,-7,-2,-7,2,-8,2,-5,4,0);//dindingpagar kiri

coba(-8,-2,-7,-2,-7,0,-8,0,-5,5.5,0);
coba(7,-2,8,-2,8,0,7,0,-5,5.5,0);
cobaini(-3,5,0,0,8,2,-8,2,-5.5,4.5,0);
glColor3f(1,1,1);//plafon depan
glVertex3d(8,1.8,-3);
glVertex3d(-8,1.8,-3);
glVertex3d(-8,1.8,4.5);
glVertex3d(8,1.8,4.5);//
glVertex3d(8,1.8,4.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(-8,2,4.5);
glVertex3d(8,2,4.5);
glColor3f(1,1,1);//plafon belakang
glVertex3d(8,1.8,-5.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(-8,1.8,4.5);
glVertex3d(8,1.8,4.5);
glVertex3d(8,1.8,-5.5);
glVertex3d(-8,1.8,-5.5);
glVertex3d(-8,2,-5.5);
glVertex3d(8,2,-5.5);
glVertex3d(4,-0.5,4.1);//cendela kamar
glVertex3d(6,-0.5,4.1);
glVertex3d(6,1,4.1);
glVertex3d(4,1,4.1);
glVertex3d(2.7,-0.5,4.1);//cendela kamar2
glVertex3d(3.8,-0.5,4.1);
glVertex3d(3.8,1,4.1);
glVertex3d(2.7,1,4.1);
glVertex3d(-2,-2,3.05);//pintu depan
glVertex3d(2,-2,3.05);
glVertex3d(2,1.3,3.05);
glVertex3d(-2,1.3,3.05);
glVertex3d(-2,-2,-5.05);//pintu belakang
glVertex3d(2,-2,-5.05);
glVertex3d(2,1,-5.05);
glVertex3d(-2,1,-5.05);
glVertex3d(-4.5,-1,3.05);//cendela rmh1 depan
glVertex3d(-2.5,-1,3.05);
glVertex3d(-2.5,1.3,3.05);
glVertex3d(-4.5,1.3,3.05);
glVertex3d(-6.5,-1,-5.05);//cendela rmh1 belakang
glVertex3d(-2.5,-1,-5.05);
glVertex3d(-2.5,1,-5.05);
glVertex3d(-6.5,1,-5.05);
glVertex3d(-7,-1,3.05);//cendela rmh2 depan

glVertex3d(-4.8,-1,3.05);
glVertex3d(-4.8,1.3,3.05);
glVertex3d(-7,1.3,3.05);
glVertex3d(6.5,-1,-5.05);//cendela rmh2 belakang
glVertex3d(2.5,-1,-5.05);
glVertex3d(2.5,1,-5.05);
glVertex3d(6.5,1,-5.05);
glEnd();
glBegin(GL_TRIANGLES);
cobain(-3,5,0,0,8,2,-8,2,-5.5,4.5,0);

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


