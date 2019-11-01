#pragma once
#include"QInt.h"
#include"ChuyenDoi.h"
QInt::QInt() {
	data[0] = { 0 };
	data[1] = { 0 };
	data[2] = { 0 };
	data[3] = { 0 };
};
QInt QInt::operator=(const QInt &a) {
	QInt c;
	c.binary = a.binary;
	//ScanQInt(c);
	return *this;
};
const QInt QInt::operator+(QInt a) {
	QInt c;
	c.dec = congHaiSoHe10(this->dec, a.dec);
	c.binary = StrToBi(c.dec);
	string c1, c2, c3, c4;
	if (c.binary.length() < 32) {
		for (int i = 0; i < c.binary.length(); i++) {
			c.data[0] = c.data[0] | atoi(c.binary.substr(i, 1).c_str()) << (32 - 1 - i);
		}
	}
	else
		if (c.binary.length() >= 32 && c.binary.length() < 64) {
			c1 = c.binary.substr(0, 31);
			c2 = c.binary.substr(31, c.binary.length() - 31);
			cout << c1 << endl;
			cout << c2 << endl;
			for (int i = 0; i < c1.length(); i++) {
				c.data[0] = c.data[0] | atoi(c1.substr(i, 1).c_str()) << (32 - 1 - i);
			}
			for (int j = 0; j < c2.length(); j++) {
				c.data[1] = c.data[1] | atoi(c2.substr(j, 1).c_str()) << (32 - 1 - j);
			}
		}
		else
			if (c.binary.length() >= 64 && c.binary.length() < 96) {
				c1 = c.binary.substr(0, 31);
				c2 = c.binary.substr(31, 31);
				c3 = c.binary.substr(62, c.binary.length() - 62);
				cout << "c1:" << c1 << endl;
				cout << "c2:" << c2 << endl;
				cout << "c3:" << c3 << endl;
				for (int i = 0; i < c1.length(); i++) {
					c.data[0] = c.data[0] | atoi(c1.substr(i, 1).c_str()) << (32 - 1 - i);
				}
				for (int j = 0; j < c2.length(); j++) {
					c.data[1] = c.data[1] | atoi(c2.substr(j, 1).c_str()) << (32 - 1 - j);
				}
				for (int p = 0; p < c3.length(); p++) {
					c.data[2] = c.data[2] | atoi(c3.substr(p, 1).c_str()) << (32 - 1 - p);
				}
			}
			else
				if (c.binary.length() >= 96 && c.binary.length() < 128) {
					c1 = c.binary.substr(0, 31);
					c2 = c.binary.substr(31, 31);
					c3 = c.binary.substr(62, 31);
					c4 = c.binary.substr(94, c.binary.length() - 93);
					cout << "c1:" << c1 << endl;
					cout << "c2:" << c2 << endl;
					cout << "c3:" << c3 << endl;
					cout << "c4:" << c4 << endl;
					for (int i = 0; i < c1.length(); i++) {
						c.data[0] = c.data[0] | atoi(c1.substr(i, 1).c_str()) << (32 - 1 - i);
					}
					for (int j = 0; j < c2.length(); j++) {
						c.data[1] = c.data[1] | atoi(c2.substr(j, 1).c_str()) << (32 - 1 - j);
					}
					for (int p = 0; p < c3.length(); p++) {
						c.data[2] = c.data[2] | atoi(c3.substr(p, 1).c_str()) << (32 - 1 - p);
					}
					for (int w = 0; w < c4.length(); w++) {
						c.data[3] = c.data[3] | atoi(c4.substr(w, 1).c_str()) << (32 - 1 - w);
					}
				}
				else
					cout << "Vuot qua kha nang xu ly." << endl;
	return c;
};
//QInt QInt::operator+(const QInt &a) {
//	QInt b;
//	return b;
//};
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
/*
 Nhap vao 1 chuoi he 10
 bien he 10 thanh chuoi he 2
 tach chuoi ra tung cum 32 so
 moi cum 32 so gan vao bit

*/
void ScanQInt(QInt &z) {
	//QInt z;
	for (int i = 0; i < 4; i++) {
		z.data[i] = { 0 };
	}
	cout << endl;
	cout << "nhap chuoi:";
	string b;
	getline(cin, b);
	z.dec = b;// gan chuoi he 10
	string c = StrToBi(b);
	cout << "quy doi sang he 2:" << c << endl;
	// gan chuoi binary
	z.binary = c;
	// xuoi
	cout << "Do dai chuoi:" << b.length() << endl;
	cout << "Do dai day bit:" << c.length() << endl;
	string c1, c2, c3, c4;

	if (c.length() < 32) {
		for (int i = 0; i < c.length(); i++) {
			z.data[0] = z.data[0] | atoi(c.substr(i, 1).c_str()) << (32 - 1 - i);
		}
	}
	else
		if (c.length() >= 32 && c.length() < 64) {
			c1 = c.substr(0, 31);
			c2 = c.substr(31, c.length() - 31);
			cout << c1 << endl;
			cout << c2 << endl;
			for (int i = 0; i < c1.length(); i++) {
				z.data[0] = z.data[0] | atoi(c1.substr(i, 1).c_str()) << (32 - 1 - i);
			}
			for (int j = 0; j < c2.length(); j++) {
				z.data[1] = z.data[1] | atoi(c2.substr(j, 1).c_str()) << (32 - 1 - j);
			}
		}
		else
			if (c.length() >= 64 && c.length() < 96) {
				c1 = c.substr(0, 31);
				c2 = c.substr(31, 31);
				c3 = c.substr(62, c.length() - 62);
				cout << "c1:" << c1 << endl;
				cout << "c2:" << c2 << endl;
				cout << "c3:" << c3 << endl;
				for (int i = 0; i < c1.length(); i++) {
					z.data[0] = z.data[0] | atoi(c1.substr(i, 1).c_str()) << (32 - 1 - i);
				}
				for (int j = 0; j < c2.length(); j++) {
					z.data[1] = z.data[1] | atoi(c2.substr(j, 1).c_str()) << (32 - 1 - j);
				}
				for (int p = 0; p < c3.length(); p++) {
					z.data[2] = z.data[2] | atoi(c3.substr(p, 1).c_str()) << (32 - 1 - p);
				}
			}
			else
				if (c.length() >= 96 && c.length() < 128) {
					c1 = c.substr(0, 31);
					c2 = c.substr(31, 31);
					c3 = c.substr(62, 31);
					c4 = c.substr(94, c.length() - 93);
					cout << "c1:" << c1 << endl;
					cout << "c2:" << c2 << endl;
					cout << "c3:" << c3 << endl;
					cout << "c4:" << c4 << endl;
					for (int i = 0; i < c1.length(); i++) {
						z.data[0] = z.data[0] | atoi(c1.substr(i, 1).c_str()) << (32 - 1 - i);
					}
					for (int j = 0; j < c2.length(); j++) {
						z.data[1] = z.data[1] | atoi(c2.substr(j, 1).c_str()) << (32 - 1 - j);
					}
					for (int p = 0; p < c3.length(); p++) {
						z.data[2] = z.data[2] | atoi(c3.substr(p, 1).c_str()) << (32 - 1 - p);
					}
					for (int w = 0; w < c4.length(); w++) {
						z.data[3] = z.data[3] | atoi(c4.substr(w, 1).c_str()) << (32 - 1 - w);
					}
				}
				else
					cout << "Vuot qua kha nang xu ly." << endl;
};

void PrintQInt(QInt &z) {
	cout << "tong quat:" << endl;
	for (int j = 0; j < 4; j++) {
		cout << "[" << j << "]:" << endl;
		for (int i = 0; i < 32; i++) {
			cout << ((z.data[j] >> (32 - i)) & 1);
		}
		cout << endl;
	}
}