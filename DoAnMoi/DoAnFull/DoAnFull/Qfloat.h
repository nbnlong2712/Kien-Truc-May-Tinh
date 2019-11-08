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

void ScanQInt(Qfloat &z);
void PrintQInt(Qfloat &z);