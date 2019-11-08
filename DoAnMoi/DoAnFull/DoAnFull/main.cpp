#include"QInt.h"
#include"ChuyenDoi.h"


int main() {

	/*QInt a;
	
	ScanQInt(a);
	PrintQInt(a);
<<<<<<< HEAD
		

	QInt b;
	ScanQInt(b);
	PrintQInt(b);
	cout << endl;

	cout << (b > a);
	/*QInt c;
	c = a + b;
	PrintQInt(c);
	cout << endl;*/
=======
	QInt b;
	ScanQInt(b);
	PrintQInt(b);

<<<<<<< HEAD
	b = b + a;
=======
<<<<<<< HEAD
	cout<<(a > b);


	/*string s = TraVeStringHe2(a);
	cout << s<<endl;
	string k=he2sang10(s);
	cout << k;*/
=======
	b = b * a;
>>>>>>> 2fee5bff8ba6185459e70864fab11256433f37d6

	string s = TraVeStringHe2(b);
	string k = He2sang16(s);
	cout << k;

>>>>>>> 0bd9015f036c8f8fb74170f6a6e190c39e37e1e3
>>>>>>> 86143a2454f01b64aebf28286e04fbcc9aa724e2



	return 0;*/
	string a = "1110", b = "10110000111";
	string result = Cong2Bit(a, b);
	cout << result;
}