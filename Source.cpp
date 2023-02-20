#include <Windows.h>
#include <iostream>
#pragma comment(lib, "Winmm.lib")

int play() {
	while(1) {
		mciSendString(L"open \"Music.mp3\" type mpegvideo alias mp3",NULL,0,NULL);
		std::string as;
		std::cout << "Type 1 to play or Type 0 to pause ";
		std::cin >> as;

		if (as == "1") {
			mciSendString(L"play mp3",NULL,0,NULL);
		}
		if (as == "0") {
			mciSendString(L"pause mp3", NULL, 0, NULL);
		}
	}
}

int main() {
	std::cout << "Make sure you rename your mp3 file name to Music\n";
	play();
}
