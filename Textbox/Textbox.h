#pragma once
#pragma once
#include <string>
#include <Windows.h>
using namespace std;
class Textbox {
private:
	COORD position;
	int maxWidth, width;
	string value;
	void draw();
	void gotoxy(int x, int y);
	void makeRect();

public:
	Textbox(COORD pos, int maxWidth=30) : position(pos), maxWidth(maxWidth), width(0) {
		makeRect();
	};
	void addValue(CHAR newvalue);
	void delChar();
	~Textbox() {};
};