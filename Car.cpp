#include<glut.h>
void disp(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	// Car Bottom and middle
	glBegin(GL_LINES);
		glColor3f(1,0,0);
		
		// Bottom Line
		glVertex2f(-0.3,0);
		glVertex2f(0.3,0);
		
		// Car Middle Line
		glVertex2f(-0.4,0.35);
		glVertex2f(0.5,0.35);
		
		// Centre Vertical Line
		glVertex2f(0.08,0.62);
		glVertex2f(0.08,0.100); //glVertex2f(0.1,0);
		
		// for feet
		glVertex2f(-0.35,0.100);
		glVertex2f(0.35,0.100);
		
		
		// front Handle
		glVertex2f(-0.04,0.30);
		glVertex2f(0.04,0.30);
		
		// Rear handle
		glVertex2f(0.32,0.30);
		glVertex2f(0.4,0.30);
		
		/*
		// wheel to bonut
		glVertex2f(-0.4,0.35);
		glVertex2f(-0.35,0.100);
		
		// wheel to diggy
		glVertex2f(0.5,0.35);
		glVertex2f(0.35,0.100);
		*/
		
	glEnd();
	
	
	
	// Car Body
	glBegin(GL_LINE_STRIP);
		glColor3f(1,0,0);
		
		glVertex2f(-0.6,0);
		glVertex2f(-0.8,0.019);
		glVertex2f(-0.838,0.125);
		glVertex2f(-0.8,0.25);
		glVertex2f(-0.4,0.35);
		glVertex2f(-0.1,0.62);
		glVertex2f(0.3,0.62);
		glVertex2f(0.5,0.35);
		glVertex2f(0.72,0.3);
		glVertex2f(0.74,0.15);
		glVertex2f(0.72,0.05);
		glVertex2f(0.6,0);		
	glEnd();
	
	// Car Front Wheels
	glBegin(GL_LINE_STRIP);
		glColor3f(1,0,0);
		
		glVertex2f(-0.3,0);
		glVertex2f(-0.35,0.100);
		glVertex2f(-0.45,0.15);
		glVertex2f(-0.55,0.100);
		glVertex2f(-0.6,0);
		glVertex2f(-0.55,-0.100);
		glVertex2f(-0.45,-0.15);
		glVertex2f(-0.35,-0.100);
		glVertex2f(-0.3,0);	
	glEnd();
	

	// Car Back Wheels
	glBegin(GL_LINE_STRIP);
		glColor3f(1,0,0);
		
		glVertex2f(0.3,0);
		glVertex2f(0.35,0.100);
		glVertex2f(0.45,0.15);
		glVertex2f(0.55,0.100);
		glVertex2f(0.6,0);
		glVertex2f(0.55,-0.100);
		glVertex2f(0.45,-0.15);
		glVertex2f(0.35,-0.100);
		glVertex2f(0.3,0);
	glEnd();
	
 /*
	// Wheel rim
	glBegin(GL_LINES);
		glColor3f(1,0,0);
		
		glVertex2f(-0.3,0);
		glVertex2f(-0.6,0);
		
		glVertex2f(-0.35,0.100);
		glVertex2f(-0.55,-0.100);
		
		glVertex2f(-0.45,0.15);
		glVertex2f(-0.45,-0.15);
		
		glVertex2f(-0.55,0.100);
		glVertex2f(-0.35,-0.100);	
	glEnd();
		
	// Wheel rim
	glBegin(GL_LINES);
		glColor3f(1,0,0);
		
		glVertex2f(0.3,0);
		glVertex2f(0.6,0);
		
		glVertex2f(0.35,0.100);
		glVertex2f(0.55,-0.100);
		
		glVertex2f(0.45,0.15);
		glVertex2f(0.45,-0.15);
		
		glVertex2f(0.55,0.100);
		glVertex2f(0.35,-0.100);	
	glEnd();

 */
	
	glFlush();
}

int main(int argc,char** argv)
{
	glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE);
	glutInitWindowSize(780,650);
	glutInitWindowPosition(50,50);
	glutCreateWindow("Car program");
	glutDisplayFunc(disp);
	glutMainLoop();
	return 0;
}
