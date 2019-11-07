#include"QInt.h"
#include"ChuyenDoi.h"


int main() {

	QInt a;
	
	ScanQInt(a);
	PrintQInt(a);
	QInt b;
	ScanQInt(b);
	PrintQInt(b);

	b = b * a;

	string s = TraVeStringHe2(b);
	string k = He2sang16(s);
	cout << k;




	return 0;
}