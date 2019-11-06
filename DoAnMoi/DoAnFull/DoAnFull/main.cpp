#include"QInt.h"
#include"ChuyenDoi.h"


int main() {

	QInt a;
	ScanQInt(a);
	PrintQInt(a);


	QInt b;
	ScanQInt(b);
	PrintQInt(b);
	cout << endl;
	//cout << (b >= a);
	QInt c;
	c = a + b;
	PrintQInt(c);
	cout << endl;



	return 0;
}