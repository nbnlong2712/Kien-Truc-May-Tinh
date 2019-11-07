#include"QInt.h"
#include"ChuyenDoi.h"


int main() {

	QInt a;
	
	ScanQInt(a);
	PrintQInt(a);
	QInt b;
	ScanQInt(b);
	PrintQInt(b);
	QInt c;
	c = a / b;
	PrintQInt(c);	




	return 0;
}