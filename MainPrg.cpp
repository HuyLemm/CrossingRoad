#include "CGAME.h"
#include "Menu.h"
#include "Console.h"
Menu* MENU = Menu::intance();

int main() {
	FixConsoleWindow();
	ShowCur(0);

	MENU->move1();
	return 0;
}