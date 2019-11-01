#include<iostream>
#include<string>
#include<vector>
using namespace std;
string Doi10sang2 (string a) {
	string bit;
	string b;
	int temp = atoi(a.substr(a.size() - 1, 1).c_str()) % 2;
	bit = to_string(temp);
	while (a.size() != 1 || atoi(a.c_str()) != 1) {
		if (a.size() == 1 && atoi(a.c_str()) > 1)
		{
			b = to_string(atoi(a.c_str()) / 2);
		}
		else {
			for (int i = 0; i < a.size() - 1; i++)
			{
				string k;
				if (i == 0)
					b = to_string(atoi((a.substr(i, 2)).c_str()) / 2);
				else {
					k = to_string(atoi((a.substr(i, 2)).c_str()) / 2);
					b += k[k.size() - 1];
				}
			}
		}
		a = b;
		temp = atoi(a.substr(a.size() - 1, 1).c_str()) % 2;
		bit += to_string(temp);
	}
	for (int i = 0; i < bit.length() / 2; i++) // Dao bit
	{
		char temp = bit[i];
		bit[i] = bit[bit.length() - 1 - i];
		bit[bit.length() - 1 - i] = temp;
	}
	return bit;
}
string cong2Bit(string a, string b)
{
	string c;
	int nho = 0, so1, so2, so3;
	while (a.size() != b.size())               // x? lý sao cho ?? dài 2 chu?i s? b?ng nhau
	{
		if (a.size() < b.size())
			a = "0" + a;
		else b = "0" + b;
	}
	for (int i = a.size() - 1; i >= 0; i--)
	{
		so1 = atoi(a.substr(i, 1).c_str());   // chuy?n string thành in chu?i a
		so2 = atoi(b.substr(i, 1).c_str());   // chuy?n string thành in chu?i b
		if (i == 0)                  // xét ph?n t? ??u tiên
		{
			if (nho == 1)
				nho = 1;
			else if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 2)  //     xét ch? s? li?n sau ch? s? ??u c?a chu?i a và b,
				nho = 1;                                                                      // n?u t?ng ?ó = 2 thì nh? = 1, else nh? = 0 
			else nho = 0;
			so3 = so1 + so2 + nho;
			if (so3 == 2)
				so3 = 10;
			else if (so3 == 3)
				so3 = 11;
			c = to_string(so3) + c;     // ghép so3 vào ??u chu?i c
		}
		else
		{
			if (i == a.size() - 1)      // xét ch? s? cu?i c?a 2 chu?i a, b, không c?ng bi?n nh?
			{
				so3 = so1 + so2;
				if (so3 == 2)
				{
					so3 = 0;
					nho = 1;
				}
				else nho = 0;
				c = to_string(so3) + c;
			}
			else if (i < a.size() - 1)  // xét nh?ng ch? s? n?m gi?a chu?i, ko ??u ko cu?i
			{
				if (((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 1) && nho == 1) //   xét tr??ng h?p t?ng 2 ch? s? li?n
					nho = 1;                                                                                  //sau khi c?ng v?i nh? thì b?ng 10 
				else
				{
					if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 2)    //  xét tr/h t?ng 2 ch? s? li?n sau
						nho = 1;                                                                        // v? trí i > 10
					else
						nho = 0;
				}
				so3 = so1 + so2 + nho;
				if (so3 == 2)
				{
					so3 = 0;
					nho = 1;
				}
				else if (so3 == 3)
				{
					so3 = 1;
					nho = 1;
				}
				else nho = 0;
				c = to_string(so3) + c;
			}
		}
	}
	return c;
}
string daoBit(string k)
{
	string c = "";
	for (int i = 0; i < k.size(); i++)
	{
		if (k[i] == '1')
			c += "0";
		else c += "1";
	}
	return c;
}
void main()
{
	string a, bit1="1", result;
	getline(cin, a);
	for (int i = 0; i < a.size(); i++)
	{
		if (a.substr(i, 1) != "0") {
			a = a.substr(i);
			break;
		}
	}
	if (a[0] == '-')
	{
		a = a.substr(1); // Cap nhat chuoi moi loai bo dau tru
		result=Doi10sang2(a);
		cout << result << endl;
		result=daoBit(result);
		cout << result << endl;
		result = cong2Bit(result , bit1);
		cout << result << endl;
		//result = cong2Bit(daoBit(Doi10sang2(a)), bit1);
	}
	else {
		result = Doi10sang2(a);
		cout << result << endl;
	}
}