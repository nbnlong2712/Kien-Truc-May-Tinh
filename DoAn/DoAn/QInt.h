#include<iostream>
#include<string>
#include<vector>
using namespace std;

class QInt {
public:
	int data[4];
	QInt();
	QInt operator=(const QInt &a);

	QInt operator+(QInt a);
	QInt operator-(QInt a);
	QInt operator*(QInt a);
	QInt operator/(QInt a);

	QInt operator&(QInt a);
	QInt operator|(QInt a);
	QInt operator^(QInt a);
	QInt operator~();
	//QInt rol(QInt a);// xoay trai

};
void ScanQInt(QInt &z);
void PrintQInt(QInt &z);
QInt daobitbu2(QInt &a);
bool operator ==(QInt a, QInt b);
bool operator >=(QInt a, QInt b);
bool operator <=(QInt a, QInt b);
bool operator >(QInt a, QInt b);
bool operator <(QInt a, QInt b);
void DichTrai(QInt &a);
void DichPhai(QInt &a);
void rol(QInt &a);// xoay trai
void ror(QInt &a);