#include<glut.h>
#include<iostream>
#include<windows.h>
using namespace std;
int count=0;
void disp()				//void disp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	//background
	glBegin(GL_QUADS);
		glColor3f(0,1,0);
		glVertex2f(-1,-1);
		glColor3f(1,0.6,0.2);
		glVertex2f(-1,1);
		glColor3f(1,1,1);
		glColor3f(1,0.6,0.2);		
		glVertex2f(1,1);
		glColor3f(1,0.9,0.7);
		glVertex2f(1,-1);
	glEnd();
	

	//INDIA Text
	glBegin(GL_LINES);
		// I
		glColor3f(1,0,0);
		glVertex2f(-0.9,0.6);
		glVertex2f(-0.8,0.6);
		glVertex2f(-0.85,0.6);
		glVertex2f(-0.85,0.4);
		glVertex2f(-0.9,0.4);
		glVertex2f(-0.8,0.4);
		
		// N
		glColor3f(1,0,0);
		glVertex2f(-0.75,0.6);
		glVertex2f(-0.75,0.4);
		glVertex2f(-0.75,0.6);
		glVertex2f(-0.65,0.4);
		glVertex2f(-0.65,0.6);
		glVertex2f(-0.65,0.4);
		
		// D
		glColor3f(1,1,1);
		glVertex2f(-0.6,0.6);
		glVertex2f(-0.5,0.6);
		glVertex2f(-0.5,0.6);
		glVertex2f(-0.5,0.4);
		glVertex2f(-0.6,0.4);
		glVertex2f(-0.5,0.4);
		glVertex2f(-0.55,0.6);
		glVertex2f(-0.55,0.4);
		
		
		// I
		glColor3f(0.65,1,0);
		glVertex2f(-0.45,0.6);
		glVertex2f(-0.35,0.6);
		glVertex2f(-0.4,0.6);
		glVertex2f(-0.4,0.4);
		glVertex2f(-0.45,0.4);
		glVertex2f(-0.35,0.4);	
		
		// A
		glColor3f(0.65,1,0);
		glVertex2f(-0.25,0.6);
		glVertex2f(-0.3,0.4);
		glVertex2f(-0.25,0.6);	
		glVertex2f(-0.2,0.4);
		glVertex2f(-0.275,0.5);	
		glVertex2f(-0.225,0.5);
		
	glEnd();
	
	
	//flag stick
	glBegin(GL_LINES);
		glColor3f(1,1,1);
		glVertex2f(0.1,0.7);
		glVertex2f(0.1,-0.7);	
	glEnd();
	
	
	//Tri-color boxes
	//1 Saffron
	glBegin(GL_POLYGON);
		glColor3f(1,0.6,0.2);
		glVertex2f(0.1,0.5);
		glVertex2f(0.8,0.5);
		glVertex2f(0.8,0.7);
		glVertex2f(0.1,0.7);
	glEnd();
	
	//2 White
	glBegin(GL_POLYGON);
		glColor3f(1,1,1);
		glVertex2f(0.1,0.3);
		glVertex2f(0.8,0.3);
		glVertex2f(0.8,0.5);
		glVertex2f(0.1,0.5);
	glEnd();
	
	//3 Green
	glBegin(GL_POLYGON);
		glColor3f(0,1,0);
		glVertex2f(0.1,0.1);
		glVertex2f(0.8,0.1);
		glVertex2f(0.8,0.3);
		glVertex2f(0.1,0.3);
	glEnd();
	
	
	//Ashok Chakra Strips
	glBegin(GL_LINES);
		glColor3f(0,0,0.53);
		
		//left to right
		glVertex2f(0.35,0.40);
		glVertex2f(0.55,0.40);
		
		//bottom to top
		glVertex2f(0.45,0.30);
		glVertex2f(0.45,0.50);
		
		//(-,+) to (+,-)
		glVertex2f(0.38,0.47);
		glVertex2f(0.52,0.33);
		
		//(+,+) to (-,-)
		glVertex2f(0.52,0.47);
		glVertex2f(0.38,0.33);
		
		//starts from 247.5 degree
		//1
		glVertex2f(0.415,0.315);
		glVertex2f(0.485,0.485);
		//2
		glVertex2f(0.365,0.365);
		glVertex2f(0.535,0.435);
		//3
		glVertex2f(0.365,0.435);
		glVertex2f(0.535,0.365);
		//4
		glVertex2f(0.415,0.485);
		glVertex2f(0.485,0.315);
		
	glEnd();
	
	//Ashok chakra cricle
	glBegin(GL_LINE_STRIP);
		glColor3f(0,0,0.53);
		
		glVertex2f(0.35,0.40);
		glVertex2f(0.38,0.33);
		glVertex2f(0.45,0.30);
		glVertex2f(0.52,0.33);
		glVertex2f(0.55,0.40);
		glVertex2f(0.52,0.47);
		glVertex2f(0.45,0.50);
		glVertex2f(0.38,0.47);
		glVertex2f(0.35,0.40);			
	glEnd();
	
	glFlush();
		system("color f3");
		cout<<"Refresh Count="<<count<<"\n";
		count++;
}

int main()		//int main(int argc,char** argv)
{
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(900,600);
	glutInitWindowPosition(300,100);
	glutCreateWindow("Flag program");
	glutDisplayFunc(disp);
	glutMainLoop();
	return 0;
}
