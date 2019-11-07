#include"QInt.h"
#include"ChuyenDoi.h"


int main() {

	QInt a;
	
	ScanQInt(a);
	PrintQInt(a);
	QInt b;
	ScanQInt(b);
	PrintQInt(b);

<<<<<<< HEAD
	cout<<(a > b);


	/*string s = TraVeStringHe2(a);
	cout << s<<endl;
	string k=he2sang10(s);
	cout << k;*/
=======
	b = b * a;

	string s = TraVeStringHe2(b);
	string k = He2sang16(s);
	cout << k;

>>>>>>> 0bd9015f036c8f8fb74170f6a6e190c39e37e1e3



	return 0;
}