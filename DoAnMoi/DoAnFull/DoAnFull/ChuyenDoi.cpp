#pragma once
#include"QInt.h"

// giup 2 chuoi co cung do dai 128 
void XuLiChuoi(string a, string b) {
	while (a.size() != b.size())          // xử lý sao cho độ dài 2 chuỗi số bằng nhau
	{
		if (a.size() < b.size())
			a = "0" + a;
		else b = "0" + b;
	}
}

string luyThua2(int n)
{
	string k = "1";                   // khởi tạo k
	if (n == 0)
		return "1";                   // nếu mũ 0 thì trả về 1
	int so, nho = 0;
	for (int i = 0; i < n; i++)
	{
		string b;        // làm mới biến tạm
		string c;        // làm mới biến tạm
		for (int j = k.size() - 1; j >= 0; j--)    // xét ngược chuỗi từ sau lên trước
		{
			if (j == 0)                            // xét chữ số đầu tiên
			{
				if (atoi(k.substr(1, 1).c_str()) >= 5)           // nếu chữ số sau chữ số đầu tiên >=5 thì biến nhớ =1
					nho = 1;
				else nho = 0;                                     // nếu chữ số sau chữ số đầu tiên <5 thì biến nhớ =0
				b = to_string(atoi(k.substr(0, 1).c_str()) * 2 + nho);   // chữ số đầu tiên nhân 2 cộng biến nhớ, lấy toàn bộ kết quả gán b
				c = b + c;                                         // đưa b lên đầu
				nho = 0;
			}
			else
			{
				so = atoi(k.substr(j, 1).c_str()) * 2;               // biến số bằng chữ số vị trí j nhân 2
				if (j < k.size() - 1 && atoi(k.substr(j + 1, 1).c_str()) >= 5)  // nếu chữ số liền sau chữ số ở vị trí i >=5 thì biến nhớ =1
				{
					so = so % 10;                                // chỉ lấy phần đơn vị
					nho = 1;
				}
				else if (j == k.size() - 1)                           // xét vị trí cuối cùng chuỗi số
				{
					if (atoi(k.substr(j, 1).c_str()) >= 5)          //nếu chữ số cuối cùng >=5 thì nhớ =1
					{
						so = so % 10;                               // chỉ lấy chữ số hàng đơn vị
						nho = 1;
					}
					else
						nho = 0;                                  //nếu chữ số cuối cùng <5 thì nhớ =0
				}
				else if (j < k.size() - 1 && atoi(k.substr(j + 1, 1).c_str()) < 5) // nếu chữ số liền sau chữ số ở vị trí i < 5 thì biến nhớ = 0
				{
					so = so % 10;                            // chỉ lấy chữ số hàng đơn vị
					nho = 0;
				}
				if (j == k.size() - 1)
					b = to_string(so);                          // nếu là chữ số vị trí cuối cùng thì không cộng thêm biến nhớ
				else b = to_string(so + nho);                   // nếu không là chữ số vị trí cuối cùng thì cộng thêm biến nhớ

				c = b + c;
			}
		}
		k = c;   // đổ giá trị từ biến tạm c sang biến chính k
	}
	return k;
}

string cong2Bit(string a, string b)
{
	string c;
	int nho = 0, so1, so2, so3;
	while (a.size() != b.size())
	{
		if (a.size() < b.size())
			a = "0" + a;
		else b = "0" + b;
	}
	for (int i = a.size() - 1; i >= 0; i--)
	{
		so1 = atoi(a.substr(i, 1).c_str());
		so2 = atoi(b.substr(i, 1).c_str());
		if (i == 0)
		{
			if (nho == 1)
				nho = 1;
			else if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 2)
				nho = 1;
			else nho = 0;
			so3 = so1 + so2 + nho;
			if (so3 == 2)
				so3 = 10;
			else if (so3 == 3)
				so3 = 11;
			c = to_string(so3) + c;
		}
		else
		{
			if (i == a.size() - 1)
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
			else if (i < a.size() - 1)
			{
				if (((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 1) && nho == 1)
					nho = 1;
				else
				{
					if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 2)
						nho = 1;
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

string he2sang10(string he2)
{
	string k = "0";
	for (int i = 0; i < he2.size(); i++)
	{
		if (he2[i] == '1')
			k = cong2Bit(k, luyThua2(he2.size() - i - 1));
	}
	return k;
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
string Doi10sang2(string a) {
	string bit, b, bit1 = "1", input, result;
	int sentinel = 0; // Xet truong hop so thap phan nhap vao la 0
	for (int i = 0; i < a.size(); i++)
	{
		if (a.substr(i, 1) != "0") {
			a = a.substr(i);
			sentinel++;
			break;
		}
	}
	if (sentinel == 0) { // truong hop nguoi dung nhap vao day so 0
		sentinel = a.size();
		for (int i = 1; i <= 128 - sentinel; i++) // Them so 0 cho du 128 bit
			a += "0";
		return a;
	}
	input = a;
	if (a[0] == '-')
		a = a.substr(1);
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
	if (input[0] == '-') {
		int temp3 = bit.size();
		string temp2;
		for (int i = 1; i <= 128 - temp3; i++) // Them so 0 cho du 128 bit
			temp2 += "0";
		temp2 += bit;
		return result = cong2Bit(daoBit(temp2), bit1);
	}
	else
		return bit;
}