#include"Qfloat.h"
#include"ChuyenDoi.h"
Qfloat::Qfloat() {
	for (int i = 0; i < 4; i++) {
		data[i] = { 0 };
	}
}

void ScanQfloat(Qfloat &z,int luachon) {
	cout << endl;
	if(luachon==1) cout << "nhap so thuc he 10: ";
	else if(luachon==2) cout << "nhap so thuc he 2 (co > 16 chu so): ";
	string b;
	getline(cin, b);
	string c; 
	if(luachon==1) c = He10sang2float(b);
	else if(luachon==2) c = b;
	while (c.length() != 128) {
		c = c + '0';
	}
	int r = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			z.data[i] = z.data[i] | atoi(c.substr(r, 1).c_str()) << (32 - j - 1);
			r++;
		}
	}
};
void PrintQfloat(Qfloat &z) {
	for (int j = 0; j < 4; j++) {
		//cout << "[" << j << "]:" << endl;
		for (int i = 0; i < 32; i++) {
			cout << ((z.data[j] >> (32 - i - 1)) & 1);
		}
	}
	cout << endl;
};
string TraVeStringHe2float(Qfloat &a) {
	string s;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 32; i++) {
			s += to_string(((a.data[j] >> (32 - i - 1)) & 1));
		}
	}
	return s;
}