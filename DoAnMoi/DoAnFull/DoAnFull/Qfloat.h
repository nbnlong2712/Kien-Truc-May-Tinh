#pragma once
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Qfloat {
public:
	int data[4];
	Qfloat();
};
void ScanQfloat(Qfloat &z, int);
void PrintQfloat(Qfloat &z);
string TraVeStringHe2float(Qfloat &a);