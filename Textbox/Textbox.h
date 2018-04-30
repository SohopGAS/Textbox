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
public:
	Textbox(COORD pos, int maxWidth=30) : position(pos), maxWidth(maxWidth), width(0) {
		makeRect();
	};
	void addValue(CHAR newvalue);
	void draw();
	void gotoxy(int x, int y);
	void makeRect();
	void delChar();
	~Textbox() {};
};