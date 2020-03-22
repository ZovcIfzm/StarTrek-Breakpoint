#pragma once
#include <windows.h>
void mainTritone() {
	Beep(392, 250);  // G
	Beep(523, 125);  // C
	Beep(698, 500);  // F
}

void remainingTheme() {
	Beep(659, 250);  // E
	Beep(523, 250);  // C
	Beep(440, 250);  // A
	Beep(587, 250);  // D
	Beep(784, 500);  // G
}

void confirmationBeep() {
	Beep(523, 125);  // C
}

void firePhaser() {
	Beep(440, 500);  // A
}

void firePhaserShort() {
	Beep(440, 250);  // A
}

void firePhaserLong() {
	Beep(440, 750);  // A
}


void beepFurElise() {
	Beep(659, 220);
	Beep(0, 220);
	Beep(622, 220);
	Beep(0, 220);
	Beep(659, 220);
	Beep(0, 220);
	Beep(622, 220);
	Beep(0, 220);
	Beep(659, 220);
	Beep(0, 220);
	Beep(494, 220);
	Beep(0, 220);
	Beep(587, 220);
	Beep(0, 220);
	Beep(523, 220);
	Beep(0, 220);
	Beep(440, 220);
	Beep(0, 240);
	Beep(262, 220);
	Beep(0, 220);
	Beep(330, 220);
	Beep(0, 220);
	Beep(440, 220);
	Beep(0, 220);
	Beep(494, 220);
	Beep(0, 240);
	Beep(330, 220);
	Beep(0, 220);
	Beep(415, 220);
	Beep(0, 220);
	Beep(494, 220);
	Beep(0, 220);
	Beep(523, 220);
	Beep(0, 240);
	Beep(330, 220);
	Beep(0, 220);
	Beep(659, 220);
	Beep(0, 220);
	Beep(622, 220);
	Beep(0, 220);
	Beep(659, 220);
	Beep(0, 220);
	Beep(622, 220);
	Beep(0, 220);
	Beep(659, 220);
	Beep(0, 220);
	Beep(494, 220);
	Beep(0, 220);
	Beep(587, 220);
	Beep(0, 220);
	Beep(523, 220);
	Beep(0, 220);
	Beep(440, 220);
	Beep(0, 240);
	Beep(262, 220);
	Beep(0, 220);
	Beep(330, 220);
	Beep(0, 220);
	Beep(440, 220);
	Beep(0, 220);
	Beep(494, 220);
	Beep(0, 240);
	Beep(330, 220);
	Beep(0, 220);
	Beep(523, 220);
	Beep(0, 220);
	Beep(494, 220);
	Beep(0, 240);
	Beep(440, 220);
}

void textPause() {
	Sleep(750);
}

void textPauseLong() {
	Sleep(1500);
}

void textPauseShort() {
	Sleep(500);
}

void textPauseMicro() {
	Sleep(100);
}