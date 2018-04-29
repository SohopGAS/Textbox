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
	Textbox(COORD pos, int maxWidth) : position(pos), maxWidth(maxWidth), width(0) {
		makeRect();
	};
	string getValue() { return value; }
	void addValue(CHAR newvalue) {
		if (this->width++ < this->maxWidth) {
			this->value.push_back(newvalue);
			draw();
		}
	}
	COORD getPosition() { return position; }
	void draw();
	void gotoxy(int x, int y);
	void makeRect();
	void delChar();
	~Textbox() {};
};