#include"QInt.h"
#include"ChuyenDoi.h"
//#include"ThaoTacBit.h"
//#include"String.h"

int main() {
	QInt a;
	ScanQInt(a);
	cout << endl;
	PrintQInt(a);
	cout << endl;
	QInt b;
	b = a;
	//cout << endl;
	//PrintQInt(b);
	QInt c;
	ScanQInt(c);
	cout << endl;
	PrintQInt(c);
	cout << endl;
	//string k=congHaiSoHe10(a.dec, c.dec);
	c = c + a;
	cout << "ket qua:";
	PrintQInt(c);
	/*string c = "10423423423529";
	string d = "31231231";
	cout<<congHaiSoHe10(c, d);*/
	system("pause");
	return 0;
}