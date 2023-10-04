# include "iGraphics.h"
#include "bitmap_loader.h"

int Bird=1;

void iDraw()
{
	//place your drawing codes here

	iClear();

	iShowBMP(0, 0, "BirdSelection.bmp");

			if(Bird % 6 == 1)
			{
				iShowBMPAlternativeSkipBlack(172, 145, "Birds1.bmp");
			}
			else if(Bird % 6 == 2)
			{
				iShowBMPAlternativeSkipBlack(172, 145, "Birds2.bmp");
			}
			else if(Bird % 6 == 3)
			{
				iShowBMPAlternativeSkipBlack(172, 145, "Birds3.bmp");
			}
			else if(Bird % 6 == 4)
			{
				iShowBMPAlternativeSkipBlack(172, 145, "Birds4.bmp");
			}
			else if(Bird % 6 == 5)
			{
				iShowBMPAlternativeSkipBlack(172, 145, "Birds5.bmp");
			}
			else
			{
				iShowBMPAlternativeSkipBlack(172, 145, "Birds6.bmp");
			}

			Bird++;


}

void iMouseMove(int mx, int my)
{
	
}

void iPassiveMouse(int mx, int my)
{
	
}

void iMouse(int button, int state, int mx, int my)
{
	
}

void iKeyboard(unsigned char key)
{
	if(key == 'x')
	{
		exit(0);
	}

}
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	if(key == GLUT_KEY_LEFT)
	{
		
	}
	if(key == GLUT_KEY_RIGHT)
	{
		
	}
	if(key == GLUT_KEY_UP)
	{
		
	}
	if(key == GLUT_KEY_DOWN)
	{
		
	}

}

int main()
{

	iInitialize(800, 500, "Saggy Bird");
	iStart();
	return 0;
}