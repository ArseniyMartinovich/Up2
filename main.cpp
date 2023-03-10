#include "settings.h"
#include "functions.h"
#include "bat.h"
#include "ball.h"

using namespace sf;
int main()
{
	RenderWindow window(
		VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT),
		WINDOW_TITLE
	);
	Bat bat;
	batInit(bat);


	batControl(bat);

	Ball ball;
	ballInit(ball);


	


	

	while (window.isOpen()) {
		checkEvents(window);
		updateGame(bat, ball, speedX, speedY);
		checkCollisions();
		drawGame(window, bat, ball);

	}


	return 0;
}