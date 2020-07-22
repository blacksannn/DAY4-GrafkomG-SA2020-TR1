#include<Windows.h>
#include<GL/glut.h>

int is_depth;

void jalanparkiran(void) {
	//jalan depan lobby
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex3f(-95, -20.0, 40.0);
	glVertex3f(65, -20.0, 40.0);
	glVertex3f(65, -20.0, 10.0);
	glVertex3f(-95, -20.0, 10.0);
	glEnd();

	//Parkiran
	glBegin(GL_POLYGON);
	glColor3f(0, 1, 0);
	glVertex3f(63, -20.0, 40.0);
	glVertex3f(125, -20.0, 40.0);
	glVertex3f(125, -20.0, -45.0);
	glVertex3f(63, -20.0, -45.0);
	glEnd();
}

void init(void) {
	glClearColor(0.0, 0.0, 0.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	glEnable(GL_DEPTH_TEST);
	is_depth = 1;
	glMatrixMode(GL_MODELVIEW);
	glPointSize(9.0);
	glLineWidth(6.0f);
}

void tiang2(void) {
	//tiang atas kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, 55, 10);
	glVertex3f(-70.0, 60, 10);
	glVertex3f(-70.0, 60, -5);
	glVertex3f(-70.0, 55, -5);
	glEnd();

	//tiang atas kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66.0, 55, 10);
	glVertex3f(-66.0, 60, 10);
	glVertex3f(-66.0, 60, -5);
	glVertex3f(-66.0, 55, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70, 60, -5);
	glVertex3f(-66, 60, -5);
	glVertex3f(-66, 60, 10);
	glVertex3f(-70, 60, 10);
	glEnd();

	glBegin(GL_QUADS);//belakang kiri atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66, 60, -5);
	glVertex3f(-70, 60, -5);
	glVertex3f(-70, 50, -5);
	glVertex3f(-66, 50, -5);
	glEnd();
	//

	//tiang atas kanan luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, 55, 10);
	glVertex3f(-50.0, 60, 10);
	glVertex3f(-50.0, 60, -5);
	glVertex3f(-50.0, 55, -5);
	glEnd();

	//tiang atas kanan dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54.0, 55, 10);
	glVertex3f(-54.0, 60, 10);
	glVertex3f(-54.0, 60, -5);
	glVertex3f(-54.0, 55, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kanan atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, 60, -5);
	glVertex3f(-54, 60, -5);
	glVertex3f(-54, 60, 10);
	glVertex3f(-50, 60, 10);
	glEnd();

	glBegin(GL_QUADS);//belakang kanan atas
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54, 60, -5);
	glVertex3f(-50, 60, -5);
	glVertex3f(-50, 50, -5);
	glVertex3f(-54, 50, -5);
	glEnd();

	//
	//tiang bawah kanan luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, 25, 10);
	glVertex3f(-50.0, 30, 10);
	glVertex3f(-50.0, 30, -5);
	glVertex3f(-50.0, 25, -5);
	glEnd();

	//tiang bawah kanan dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54.0, 25, 10);
	glVertex3f(-54.0, 30, 10);
	glVertex3f(-54.0, 30, -5);
	glVertex3f(-54.0, 25, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kanan bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, 30, -5);
	glVertex3f(-54, 30, -5);
	glVertex3f(-54, 30, 10);
	glVertex3f(-50, 30, 10);
	glEnd();

	//
	//tiang bawah kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, 25, 10);
	glVertex3f(-70.0, 30, 10);
	glVertex3f(-70.0, 30, -5);
	glVertex3f(-70.0, 25, -5);
	glEnd();

	//tiang bawah kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66.0, 25, 10);
	glVertex3f(-66.0, 30, 10);
	glVertex3f(-66.0, 30, -5);
	glVertex3f(-66.0, 25, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70, 30, -5);
	glVertex3f(-66, 30, -5);
	glVertex3f(-66, 30, 10);
	glVertex3f(-70, 30, 10);
	glEnd();

	///
	//tiang bawah kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70.0, 5, 10);
	glVertex3f(-70.0, 10, 10);
	glVertex3f(-70.0, 10, -5);
	glVertex3f(-70.0, 5, -5);
	glEnd();

	//tiang bawah kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-66.0, 5, 10);
	glVertex3f(-66.0, 10, 10);
	glVertex3f(-66.0, 10, -5);
	glVertex3f(-66.0, 5, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-70, 10, -5);
	glVertex3f(-66, 10, -5);
	glVertex3f(-66, 10, 10);
	glVertex3f(-70, 10, 10);
	glEnd();

	/////
	//tiang bawah kiri luar
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50.0, 5, 10);
	glVertex3f(-50.0, 10, 10);
	glVertex3f(-50.0, 10, -5);
	glVertex3f(-50.0, 5, -5);
	glEnd();

	//tiang bawah kiri dalam
	glBegin(GL_POLYGON);
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-54.0, 5, 10);
	glVertex3f(-54.0, 10, 10);
	glVertex3f(-54.0, 10, -5);
	glVertex3f(-54.0, 5, -5);
	glEnd();

	glBegin(GL_QUADS);//tiang kiri bawah
	glColor3f(1.0, 1.0, 1.0);
	glVertex3f(-50, 10, -5);
	glVertex3f(-54, 10, -5);
	glVertex3f(-54, 10, 10);
	glVertex3f(-50, 10, 10);
	glEnd();
}

void penyangga(void) {
	//penyangga1 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 10);
	glVertex3f(-50.0, 4.0, 10);
	glVertex3f(-66.0, 4.0, 10);
	glVertex3f(-66.0, -1.0, 10);
	glEnd();

	//penyangga2 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-66.0, -1.0, 10);
	glVertex3f(-66.0, 55, 10);
	glVertex3f(-70.0, 55, 10);
	glVertex3f(-70.0, -1.0, 10);
	glEnd();

	//penyangga3 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 10);
	glVertex3f(-50.0, 60, 10);
	glVertex3f(-54.0, 60, 10);
	glVertex3f(-54.0, -1.0, 10);
	glEnd();

	//penyangga4 belakang
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-54.0, 55, 10);
	glVertex3f(-54.0, 60, 10);
	glVertex3f(-70.0, 60, 10);
	glVertex3f(-70.0, 55, 10);
	glEnd();

	//penyangga1 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 13);
	glVertex3f(-50.0, 4.0, 13);
	glVertex3f(-66.0, 4.0, 13);
	glVertex3f(-66.0, -1.0, 13);
	glEnd();

	//penyangga2 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-66.0, -1.0, 13);
	glVertex3f(-66.0, 55, 13);
	glVertex3f(-70.0, 55, 13);
	glVertex3f(-70.0, -1.0, 13);
	glEnd();

	//penyangga3 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50.0, -1.0, 13);
	glVertex3f(-50.0, 60, 13);
	glVertex3f(-54.0, 60, 13);
	glVertex3f(-54.0, -1.0, 13);
	glEnd();

	//penyangga4 depan
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-54.0, 55, 13);
	glVertex3f(-54.0, 60, 13);
	glVertex3f(-70.0, 60, 13);
	glVertex3f(-70.0, 55, 13);
	glEnd();

	glBegin(GL_QUADS);//KIRI LUAR
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-50, 60.0, 10);
	glVertex3f(-50, -1.0, 10);
	glVertex3f(-50, -1.0, 13);
	glVertex3f(-50, 60.0, 13);
	glEnd();

	glBegin(GL_QUADS);//KIRI DALAM
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-55, 55.0, 10);
	glVertex3f(-55, 4.0, 10);
	glVertex3f(-55, 4.0, 13);
	glVertex3f(-55, 55.0, 13);
	glEnd();

	glBegin(GL_QUADS);//KANAN LUAR
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-70, 60.0, 10);
	glVertex3f(-70, -1.0, 10);
	glVertex3f(-70, -1.0, 13);
	glVertex3f(-70, 60.0, 13);
	glEnd();

	glBegin(GL_QUADS);//KANAN DALAM
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-65, 55.0, 10);
	glVertex3f(-65, 4.0, 10);
	glVertex3f(-65, 4.0, 13);
	glVertex3f(-65, 55.0, 13);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-70, -1, 10);
	glVertex3f(-50, -1, 10);
	glVertex3f(-50, -1, 13);
	glVertex3f(-70, -1, 13);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-70, 60, 10);
	glVertex3f(-50, 60, 10);
	glVertex3f(-50, 60, 13);
	glVertex3f(-70, 60, 13);
	glEnd();
}

void fondasibangunkanan(void) {
	//fondasi 
	//depan
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5.0, -20.0, 7.0);
	glVertex3f(-5.0, -10.0, 7.0);
	glVertex3f(55.0, -10.0, 7.0);
	glVertex3f(55.0, -20.0, 7.0);
	glEnd();

	//KANAN
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(55.0, -10.0, 7.0);
	glVertex3f(55.0, -20.0, 7.0);
	glVertex3f(55.0, -20.0, -47.0);
	glVertex3f(55.0, -10.0, -47.0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5, -10.0, 7.0);
	glVertex3f(-5, -20.0, 7.0);
	glVertex3f(-5, -20.0, -47.0);
	glVertex3f(-5, -10.0, -47.0);
	glEnd();

	//BELAKANG
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5.0, -20.0, -47.0);
	glVertex3f(-5.0, -10.0, -47.0);
	glVertex3f(55.0, -10.0, -47.0);
	glVertex3f(55.0, -20.0, -47.0);
	glEnd();

	//alas
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5, -20.0, 7.0);
	glVertex3f(55, -20.0, 7.0);
	glVertex3f(55, -20.0, -47.0);
	glVertex3f(-5, -20.0, -47.0);
	glEnd();

	glPushMatrix();
	glPopMatrix();
}

void fondasibangunkiri(void) {
	//fondasi 
	//depan
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95.0, -20.0, 0);
	glVertex3f(-95.0, -10.0, 0);
	glVertex3f(-25.0, -10.0, 0);
	glVertex3f(-25.0, -20.0, 0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95, -10.0, 0);
	glVertex3f(-95, -20.0, 0);
	glVertex3f(-95, -20.0, -45.0);
	glVertex3f(-95, -10.0, -45.0);
	glEnd();

	//BELAKANG
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95.0, -20.0, -47.0);
	glVertex3f(-95.0, -10.0, -47.0);
	glVertex3f(-25.0, -10.0, -47.0);
	glVertex3f(-25.0, -20.0, -47.0);
	glEnd();

	//alas
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-95, -20.0, 7.0);
	glVertex3f(25, -20.0, 7.0);
	glVertex3f(25, -20.0, -47.0);
	glVertex3f(-95, -20.0, -47.0);
	glEnd();

	glPushMatrix();
	glPopMatrix();
}

void bangunankiri(void) {
	//depan2
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-100.0, -10.0, 5.0);
	glVertex3f(-100.0, 50.0, 5.0);
	glVertex3f(-10.0, 50.0, 5.0);
	glVertex3f(-10.0, -10.0, 5.0);
	glEnd();

	//BELAKANG
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-100.0, -10.0, -50.0);
	glVertex3f(-100.0, 50.0, -50.0);
	glVertex3f(-10.0, 50.0, -50.0);
	glVertex3f(-10.0, -10.0, -50.0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-100, 50.0, 5.0);
	glVertex3f(-100, -10.0, 5.0);
	glVertex3f(-100, -10.0, -50.0);
	glVertex3f(-100, 50.0, -50.0);
	glEnd();

	//ATAS
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10, 50.0, 5.0);
	glVertex3f(-100, 50.0, 5.0);
	glVertex3f(-100, 50.0, -50.0);
	glVertex3f(-10, 50.0, -50.0);
	glEnd();

	//BAWAH
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-100, -10.0, 5.0);
	glVertex3f(-10, -10.0, 5.0);
	glVertex3f(-10, -10.0, -50.0);
	glVertex3f(-100, -10.0, -50.0);
	glEnd();

	glPushMatrix();
	glPopMatrix();
}

void tiang(void) {
	//tiang 1 lobby
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14.0, 0.0, 5.5);
	glVertex3f(-14.0, 5.0, 5.5);
	glVertex3f(-10.0, 5.0, 5.5);
	glVertex3f(-10.0, 0.0, 5.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, 0, 5.5);
	glVertex3f(-10, 0, 5.5);
	glVertex3f(-10, 0, 39.5);
	glVertex3f(-14, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, 5, 5.5);
	glVertex3f(-10, 5, 5.5);
	glVertex3f(-10, 5, 42.5);
	glVertex3f(-14, 5, 42.5);
	glEnd();

	glBegin(GL_QUADS);//KIRI	
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, 0, 5.5);
	glVertex3f(-14, 5, 5.5);
	glVertex3f(-14, 5, 42.5);
	glVertex3f(-14, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-10, 0, 5.5);
	glVertex3f(-10, 5, 5.5);
	glVertex3f(-10, 5, 42.5);
	glVertex3f(-10, 0, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//kebawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14.0, -20.0, 40);
	glVertex3f(-14.0, 5.0, 42.5);
	glVertex3f(-10.0, 5.0, 42.5);
	glVertex3f(-10.0, -20.0, 40);
	glEnd();

	glBegin(GL_QUADS);//kebawah kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-10, -20, 38.5);
	glVertex3f(-10, 1.5, 40.5);
	glVertex3f(-10, 5, 42.5);
	glVertex3f(-10, -20, 40.5);
	glEnd();

	glBegin(GL_QUADS);//kebawah kiri
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-14, -20.0, 38.5);
	glVertex3f(-14, 1.5, 40.5);
	glVertex3f(-14, 5, 42.5);
	glVertex3f(-14, -20.0, 40.5);
	glEnd();

	//tiang 2 lobby
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20.0, 0.0, 5.5);
	glVertex3f(-20.0, 5.0, 5.5);
	glVertex3f(-24.0, 5.0, 5.5);
	glVertex3f(-24.0, 0.0, 5.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, 0, 5.5);
	glVertex3f(-24, 0, 5.5);
	glVertex3f(-24, 0, 39.5);
	glVertex3f(-20, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, 5, 5.5);
	glVertex3f(-24, 5, 5.5);
	glVertex3f(-24, 5, 42.5);
	glVertex3f(-20, 5, 42.5);
	glEnd();

	glBegin(GL_QUADS);//KIRI	
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, 0, 5.5);
	glVertex3f(-20, 5, 5.5);
	glVertex3f(-20, 5, 42.5);
	glVertex3f(-20, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-24, 0, 5.5);
	glVertex3f(-24, 5, 5.5);
	glVertex3f(-24, 5, 42.5);
	glVertex3f(-24, 0, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//kebawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20.0, -20.0, 40);
	glVertex3f(-20.0, 5.0, 42.5);
	glVertex3f(-24.0, 5.0, 42.5);
	glVertex3f(-24.0, -20.0, 40);
	glEnd();

	glBegin(GL_QUADS);//kebawah kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-20, -20, 38.5);
	glVertex3f(-20, 1.5, 40.5);
	glVertex3f(-20, 5, 42.5);
	glVertex3f(-20, -20, 40.5);
	glEnd();

	glBegin(GL_QUADS);//kebawah kiri
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-24, -20.0, 38.5);
	glVertex3f(-24, 1.5, 40.5);
	glVertex3f(-24, 5, 42.5);
	glVertex3f(-24, -20.0, 40.5);
	glEnd();

	//tiang 3 lobby
	glBegin(GL_POLYGON);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34.0, 0.0, 5.5);
	glVertex3f(-34.0, 5.0, 5.5);
	glVertex3f(-30.0, 5.0, 5.5);
	glVertex3f(-30.0, 0.0, 5.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, 0, 5.5);
	glVertex3f(-30, 0, 5.5);
	glVertex3f(-30, 0, 39.5);
	glVertex3f(-34, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, 5, 5.5);
	glVertex3f(-30, 5, 5.5);
	glVertex3f(-30, 5, 42.5);
	glVertex3f(-34, 5, 42.5);
	glEnd();

	glBegin(GL_QUADS);//KIRI	
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, 0, 5.5);
	glVertex3f(-34, 5, 5.5);
	glVertex3f(-34, 5, 42.5);
	glVertex3f(-34, 0, 39.5);
	glEnd();

	glBegin(GL_QUADS);//kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-30, 0, 5.5);
	glVertex3f(-30, 5, 5.5);
	glVertex3f(-30, 5, 42.5);
	glVertex3f(-30, 0, 39.5);
	glEnd();

	glBegin(GL_POLYGON);//kebawah
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34.0, -20.0, 40);
	glVertex3f(-34.0, 5.0, 42.5);
	glVertex3f(-30.0, 5.0, 42.5);
	glVertex3f(-30.0, -20.0, 40);
	glEnd();

	glBegin(GL_QUADS);//kebawah kanan
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-30, -20, 38.5);
	glVertex3f(-30, 1.5, 40.5);
	glVertex3f(-30, 5, 42.5);
	glVertex3f(-30, -20, 40.5);
	glEnd();

	glBegin(GL_QUADS);//kebawah kiri
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-34, -20.0, 38.5);
	glVertex3f(-34, 1.5, 40.5);
	glVertex3f(-34, 5, 42.5);
	glVertex3f(-34, -20.0, 40.5);
	glEnd();


	//////////
	glBegin(GL_QUADS);//ATAS1
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-14, 0, 5.5);
	glVertex3f(-20, 0, 5.5);
	glVertex3f(-20, 0, 28.5);
	glVertex3f(-14, 0, 28.5);
	glEnd();

	glBegin(GL_QUADS);//ATAS2
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-24, 0, 5.5);
	glVertex3f(-30, 0, 5.5);
	glVertex3f(-30, 0, 28.5);
	glVertex3f(-24, 0, 28.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah1
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-20.0, -10.0, 27.5);
	glVertex3f(-20.0, 0.0, 28.5);
	glVertex3f(-14.0, 0.0, 28.5);
	glVertex3f(-14.0, -10.0, 27.5);
	glEnd();

	glBegin(GL_POLYGON);//bawah2
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-30.0, -10.0, 27.5);
	glVertex3f(-30.0, 0.0, 28.5);
	glVertex3f(-24.0, 0.0, 28.5);
	glVertex3f(-24.0, -10.0, 27.5);
	glEnd();
}

void bangunankanan(void) {
	if (is_depth)
		glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	else
		glClear(GL_COLOR_BUFFER_BIT);

	//DEPAN
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10.0, -10.0, 10.0);
	glVertex3f(-10, 50.0, 10.0);
	glVertex3f(60.0, 50.0, 10.0);
	glVertex3f(60.0, -10.0, 10.0);
	glEnd();

	//BELAKANG
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10.0, -10.0, -50.0);
	glVertex3f(-10.0, 50.0, -50.0);
	glVertex3f(60.0, 50.0, -50.0);
	glVertex3f(60.0, -10.0, -50.0);
	glEnd();

	//KANAN
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(60.0, 50.0, 10.0);
	glVertex3f(60.0, -10.0, 10.0);
	glVertex3f(60.0, -10.0, -50.0);
	glVertex3f(60.0, 50.0, -50.0);
	glEnd();

	//KIRI	
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10, 50.0, 10.0);
	glVertex3f(-10, -10.0, 10.0);
	glVertex3f(-10, -10.0, -50.0);
	glVertex3f(-10, 50.0, -50.0);
	glEnd();

	//ATAS
	glBegin(GL_QUADS);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10, 50.0, 10.0);
	glVertex3f(60, 50.0, 10.0);
	glVertex3f(60, 50.0, -50.0);
	glVertex3f(-10, 50.0, -50.0);
	glEnd();

	//BAWAH
	glBegin(GL_POLYGON);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-10, -10.0, 10.0);
	glVertex3f(60, -10.0, 10.0);
	glVertex3f(60, -10.0, -50.0);
	glVertex3f(-10, -10.0, -50.0);
	glEnd();

	//cover1
	glBegin(GL_TRIANGLES);
	glColor3f(1.0, 0.5, 0.0);
	glVertex3f(-10.0, -10.0, 10.1);
	glVertex3f(60, -10.0, 10.1);
	glVertex3f(60.0, 50.0, 10.1);
	glEnd();

	//garis di gedung 1
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3f(0.75, 0.75, 0.75);
	glVertex3f(-5.0, -5.0, 10.2);//1
	glVertex3f(60, -5.0, 10.2);

	glVertex3f(60, -10.0, 10.2);//2
	glVertex3f(-10.0, -10.0, 10.2);

	glVertex3f(-4.0, 5.0, 10.2);//3
	glVertex3f(60, 5.0, 10.2);

	glVertex3f(-4.0, 10.0, 10.2);//4
	glVertex3f(60, 10.0, 10.2);

	glVertex3f(-4.0, 20.0, 10.2);//5
	glVertex3f(60, 20.0, 10.2);

	glVertex3f(-4.0, 25.0, 10.2);//6
	glVertex3f(60, 25.0, 10.2);

	glVertex3f(-4.0, 35.0, 10.2);//7
	glVertex3f(60, 35.0, 10.2);

	glVertex3f(-4.0, 40.0, 10.2);//8
	glVertex3f(60, 40.0, 10.2);
	glEnd();

	//
	glBegin(GL_POLYGON);
	glColor3ub(92, 51, 23);
	glVertex3f(-5.0, -5.0, 10.2);
	glVertex3f(60, -5.0, 10.2);
	glVertex3f(60, -10.0, 10.2);
	glVertex3f(-10.0, -10.0, 10.2);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(92, 51, 23);
	glVertex3f(7.1, 5.0, 10.2);//3
	glVertex3f(60, 5.0, 10.2);
	glVertex3f(60, 10.0, 10.2);
	glVertex3f(13.5, 10.0, 10.2);//4
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(25.0, 20.0, 10.2);//5
	glVertex3f(60, 20.0, 10.2);
	glVertex3f(60, 25.0, 10.2);
	glVertex3f(30.5, 25.0, 10.2);//6
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3f(42.9, 35.0, 10.2);//7
	glVertex3f(60, 35.0, 10.2);
	glVertex3f(60, 40.0, 10.2);
	glVertex3f(47.9, 40.0, 10.2);//8
	glEnd();


	jalanparkiran();
	tiang2();
	penyangga();
	tiang();
	bangunankiri();
	fondasibangunkanan();
	fondasibangunkiri();
	glPushMatrix();
	glPopMatrix();
	glutSwapBuffers();

}

void keyboard(unsigned char key, int x, int y) {
	switch (key) {

	case 'j':
		glRotatef(2.0, 1.0, 0.0, 0.0);
		break;

	case 'u':
		glRotatef(-2.0, 1.0, 0.0, 0.0);
		break;

	case 'i':
		glRotatef(2.0, 0.0, 1.0, 0.0);
		break;

	case 'y':
		glRotatef(-2.0, 0.0, 1.0, 0.0);
		break;

	case 'n':
		glRotatef(2.0, 0.0, 0.0, 1.0);
		break;

	case 'm':
		glRotatef(-2.0, 0.0, 0.0, 1.0);
		break;

	case 'r':
		glTranslatef(3.0, 0.0, 0.0);
		break;

	case 'w':
		glTranslatef(-3.0, 0.0, 0.0);
		break;

	case 'e':
		glTranslatef(0.0, 3.0, 0.0);
		break;

	case 'd':
		glTranslatef(0.0, -3.0, 0.0);
		break;

	case 'x':
		if (is_depth) {
			is_depth = 0;
			glDisable(GL_DEPTH_TEST);
		}
		else {
			is_depth = 1;
			glEnable(GL_DEPTH_TEST);
		}
	}
	bangunankanan();
}

void key(int key, int x, int y) {
	switch (key) {
	case GLUT_KEY_PAGE_UP:
		glTranslatef(0.0, 0.0, 3.0);
		break;

	case GLUT_KEY_PAGE_DOWN:
		glTranslatef(0.0, 0.0, -3.0);
		break;
	}
	bangunankanan();

}

void ukuran(int lebar, int tinggi) {
	if (tinggi == 0) tinggi = 1;

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(100.0, lebar / tinggi, 5.0, 500.0);
	glTranslatef(0.0, -5.0, -150.0);
	glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 600);
	glutInitWindowPosition(250, 80);
	glutCreateWindow("Mall Summercon Kelapa Gading 3D");
	init();
	glutDisplayFunc(bangunankanan);
	glutKeyboardFunc(keyboard);
	glutSpecialFunc(key);
	glutReshapeFunc(ukuran);
	glutMainLoop();
	return 0;
}