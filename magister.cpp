#include <iostream>
#include <Windows.h>
#include <string>



void greetings (int npc_id ) {
	if (npc_id == 1100) {
		std::cout << "Здравствуй странник" << std::endl;
	}
	else if (npc_id == 1200) {
		std::cout << "Я хочу забрать твои деньги" << std::endl;
	}
	if (npc_id == 1300) {
		std::
	}
}
int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	greetings(1200);
	
	
}

