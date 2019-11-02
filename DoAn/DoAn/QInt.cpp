#pragma once
#include"QInt.h"
#include"ChuyenDoi.h"
QInt::QInt() {
	for (int i = 0; i < 4; i++) {
		data[i] = { 0 };
	}
};
QInt QInt::operator=(const QInt &a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		data[i]= c.data[i]| a.data[i]; // or voi QInt da nhap
	}
	return *this;
};
const QInt QInt::operator+(QInt a) {
	QInt c;
	return c;
};
QInt QInt::operator-(const QInt &a) {
	QInt b;
	return b;

};
QInt QInt::operator*(const QInt &a) {
	QInt b;
	return b;

};
QInt QInt::operator/(const QInt &a) {
	QInt b;
	return b;

};
QInt QInt::operator&( QInt a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = data[i]&(a.data[i]);
		}
	}
	return c;
};
QInt QInt::operator|(QInt a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = data[i] | (a.data[i]);
		}
	}
	return c;
};
QInt QInt::operator^(QInt a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = data[i] ^ (a.data[i]);
		}
	}
	return c;
};
QInt QInt::operator~() {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = ~data[i];
		}
	}
	return c;
};
void ScanQInt(QInt &z) {
	cout << endl;
	cout << "nhap chuoi:";
	string b;
	getline(cin, b);
	//z.dec = b;// gan chuoi he 10
	string c = StrToBi(b);
	while (c.length() != 128) {
		c = '0' + c;
	}
	int r = 0;
	//cout << "quy doi sang he 2:"<<endl << c << endl;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			z.data[i] = z.data[i] | atoi(c.substr(r, 1).c_str()) << (32 - j);
			r++;
		}
	}

};

void PrintQInt(QInt &z) {
	for (int j = 0; j < 4; j++) {
		//cout << "[" << j << "]:" << endl;
		for (int i = 0; i < 32; i++) {
			cout << ((z.data[j] >> (32 - i)) & 1);
		}
	}
	cout << endl;
}