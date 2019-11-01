#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class QInt {
public:
	int data[4];
	string binary; // luu theo string dang nhi phan
	QInt();
	QInt operator=(const QInt &a);
	QInt operator+(const QInt &a);
	QInt operator-(const QInt &a);
	QInt operator*(const QInt &a);
	QInt operator/(const QInt &a);

};
void ScanQInt(QInt &z);
void PrintQInt(QInt &z);