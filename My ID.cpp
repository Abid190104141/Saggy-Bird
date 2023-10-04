/*
	Name : MD. Younus Hossain Ahsan
	ID : 19.01.04.131
*/
# include "iGraphics.h"

double Red=155;
double Green=155;
double Blue=155;

void iDraw()
{
		iSetColor(Red,Green,Blue);

		double xA[] = {120,150,170,170};
		double yA[] = {320,320,340,380};

		double xB[] = {170,210,210,170};
		double yB[] = {140,140,380,380};

		double xC[] = {120,100,100,280,280,260};
		double yC[] = {140,120,100,100,120,140};

		//This is for making 1
		iFilledPolygon(xA, yA, 4);
		iFilledPolygon(xB, yB, 4);
		iFilledPolygon(xC, yC, 6);


		double xD[] = {340,340,380,380};
		double yD[] = {340,320,320,340};

		double xE[] = {340,340,520,520,500,360};
		double yE[] = {360,340,340,360,380,380};

		double xF[] = {480,480,520,520,500,520,520};
		double yF[] = {340,140,140,220,240,260,340};

		double xG[] = {380,380,480,480};
		double yG[] = {260,220,220,260};

		double xH[] = {340,340,360,500,520,520};
		double yH[] = {140,120,100,100,120,140};

		double xI[] = {340,340,380,380};
		double yI[] = {160,140,140,160};

		//This is for making 3
		iFilledPolygon(xD, yD, 4);
		iFilledPolygon(xE, yE, 6);
		iFilledPolygon(xF, yF, 7);
		iFilledPolygon(xG, yG, 4);
		iFilledPolygon(xH, yH, 6);
		iFilledPolygon(xI, yI, 4);

		
		double xJ[] = {600,630,650,650};
		double yJ[] = {320,320,340,380};

		double xK[] = {650,690,690,650};
		double yK[] = {140,140,380,380};

		double xL[] = {600,580,580,760,760,740};
		double yL[] = {140,120,100,100,120,140};

		//This is for making 1
		iFilledPolygon(xJ, yJ, 4);
		iFilledPolygon(xK, yK, 4);
		iFilledPolygon(xL, yL, 6);

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
		Red=255;
		Green=0;
		Blue=0;
	}
	else if(key == 'g' || key == 'G')
	{
		Red=0;
		Green=255;
		Blue=0;
	}
	else if(key == 'b' || key == 'B')
	{
		Red=0;
		Green=0;
		Blue=255;
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

	iInitialize (860,480,"My ID");
	iStart ();

	return 0;
}