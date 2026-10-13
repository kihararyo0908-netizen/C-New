#include <iostream>
using namespace std;

const int MAX_NAME = 30;
struct Student {
	char name[MAX_NAME + 1];
	int Hp;
	int Mp;
	int Atack;
	int Speed;
	int Mniy;
};

void Char(const Student& student) {
	cout << "名前: " << student.name << endl
		<< "HP  : " << student.Hp << endl
		<< "MP  : " << student.Mp << endl
		<< "ATK : " << student.Atack << endl
		<< "SPD : " << student.Speed << endl
		<< "MNY : " << student.Mniy << "G" <<  endl;
	
}
int main() {
	Student student[] = {
		{ "勇者" , 100, 100, 50, 45, 200, }
	};
	int size = sizeof student / sizeof * student;
	Char(student[0]);
}