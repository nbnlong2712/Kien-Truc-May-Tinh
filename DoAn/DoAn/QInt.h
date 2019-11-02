#include<iostream>
#include<string>
#include<vector>
using namespace std;

class QInt {
public:
	int data[4];
	string binary; // luu theo string dang nhi phan
	string dec; //string theo he 10
	QInt();
	QInt operator=(const QInt &a);
	const QInt operator+(QInt a);
	QInt operator-(const QInt &a);
	QInt operator*(const QInt &a);
	QInt operator/(const QInt &a);
	QInt operator&(QInt a);
	QInt operator|(QInt a);
	QInt operator^(QInt a);
	QInt operator~();

};
void ScanQInt(QInt &z);
void PrintQInt(QInt &z);