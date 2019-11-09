#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class QInt {
public:
	int data[4];
	QInt();
	QInt(string c);
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
QInt QInt1(QInt a, string s);
QInt QInt2(QInt a, string s);
void ScanQInt(QInt &z, int luachon);
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
string TraVeStringHe2(QInt &a);