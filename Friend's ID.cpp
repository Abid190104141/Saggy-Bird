# include "iGraphics.h"

double R=155;
double G=155;
double B=155;

void iDraw()
{
		iSetColor(R,G,B);

		double xa[] = {95,130,130,95};
		double ya[] = {165,165,150,150};

		double xb[] = {105,105,120,120};
		double yb[] = {220,165,165,220};

		double xc[] = {95,120,120};
		double yc[] = {220,220,250};


		double xd[] = {185,200,200,185};
		double yd[] = {150,150,250,250};

		double xe[] = {135,185,185,155,165,150};
		double ye[] = {195,195,210,210,250,250};


		double xf[] = {210,245,245,210};
		double yf[] = {165,165,150,150};

		double xg[] = {220,220,235,235};
		double yg[] = {220,165,165,220};

		double xh[] = {210,235,235};
		double yh[] = {220,220,250};


		iFilledPolygon(xa, ya, 4);
		iFilledPolygon(xb, yb, 4);
		iFilledPolygon(xc, yc, 3);


		iFilledPolygon(xd, yd, 4);
		iFilledPolygon(xe, ye, 6);

		
		iFilledPolygon(xf, yf, 4);
		iFilledPolygon(xg, yg, 4);
		iFilledPolygon(xh, yh, 3);

}

void iMouseMove(int mx, int my)
{
	
}

void iPassiveMouse(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		
	}
}

void iKeyboard(unsigned char key)
{
	if(key == 'r' || key == 'R')
	{
		R=255;
		G=0;
		B=0;
	}
	else if(key == 'g' || key == 'G')
	{
		R=0;
		G=255;
		B=0;
	}
	else if(key == 'b' || key == 'B')
	{
		R=0;
		G=0;
		B=255;
	}

}

void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);	
	}

}

int main()
{

	iInitialize (400,400,"My ID");
	iStart ();

	return 0;
}