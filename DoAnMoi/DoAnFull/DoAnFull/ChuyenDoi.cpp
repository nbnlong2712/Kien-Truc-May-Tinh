#pragma once
#include"QInt.h"
// xu li chuoi cho 2 chuoi co cung do dai
void XuLiChuoi(string a,string b) {
	while (a.size() != b.size())          // xử lý sao cho độ dài 2 chuỗi số bằng nhau
	{
		if (a.size() < b.size())
			a = "0" + a;
		else b = "0" + b;
	}
}

string LuyThua2(int n)
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
				so = atoi(k.substr(j , 1).c_str()) * 2;               // biến số bằng chữ số vị trí j nhân 2
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

string CongHaiSoHe10(string a, string b)
{
	string c;
	int nho = 0, so1, so2, so3;
	while (a.size() != b.size())               // xử lý sao cho độ dài 2 chuỗi số bằng nhau
	{
		if (a.size() < b.size())
			a = "0" + a;
		else b = "0" + b;
	}
	for (int i = a.size() - 1; i >= 0; i--)
	{
		so1 = atoi(a.substr(i, 1).c_str());   // chuyển string thành in chuỗi a
		so2 = atoi(b.substr(i, 1).c_str());   // chuyển string thành in chuỗi b
		if (i == 0)                  // xét phần tử đầu tiên
		{
			if (nho == 1)
				nho = 1;
			else if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) >= 10)  //     xét chữ số liền sau chữ số đầu của chuỗi a và b,
				nho = 1;                                                                      // nếu tổng đó >10 thì nhớ =1, else nhớ =0 
			else nho = 0;
			so3 = so1 + so2 + nho;                   
			c = to_string(so3) + c;     // ghép so3 vào đầu chuỗi c
		}
		else
		{
			if (i == a.size() - 1)      // xét chữ số cuối của 2 chuỗi a, b, không cộng biến nhớ
			{
				so3 = so1 + so2;
				if (so3 > 9)
				{
					so3 = so3 % 10;
					nho = 1;
				}
				else nho = 0;
				c = to_string(so3) + c;
			}
			else if (i < a.size() - 1)  // xét những chữ số nằm giữa chuỗi, ko đầu ko cuối
			{
				if (((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 9) && nho == 1) //   xét trường hợp tổng 2 chữ số liền
					nho = 1;                                                                                  //sau khi cộng với nhớ thì bằng 10 
				else
				{
					if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) >= 10)    //  xét tr/h tổng 2 chữ số liền sau
						nho = 1;                                                                        // vị trí i > 10
					else
						nho = 0;
				}
				so3 = so1 + so2 + nho;
				if (so3 >= 10)
				{
					so3 = so3 % 10;
					nho = 1;
				}
				else nho = 0;
				c = to_string(so3) + c;
			}
		}
	}
	return c;
}

string Cong2Bit(string a, string b)
{
	string c;
	int nho = 0, so1, so2, so3;
	while (a.size() != b.size())               // xử lý sao cho độ dài 2 chuỗi số bằng nhau
	{
		if (a.size() < b.size())
			a = "0" + a;
		else b = "0" + b;
	}
	for (int i = a.size() - 1; i >= 0; i--)
	{
		so1 = atoi(a.substr(i, 1).c_str());   // chuyển string thành in chuỗi a
		so2 = atoi(b.substr(i, 1).c_str());   // chuyển string thành in chuỗi b
		if (i == 0)                  // xét phần tử đầu tiên
		{
			if (nho == 1)
				nho = 1;
			else if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) ==2)  //     xét chữ số liền sau chữ số đầu của chuỗi a và b,
				nho = 1;                                                                      // nếu tổng đó = 2 thì nhớ = 1, else nhớ = 0 
			else nho = 0;
			so3 = so1 + so2 + nho;
			if (so3 == 2)
				so3 = 10;
			else if (so3 == 3)
				so3 = 11;
			c = to_string(so3) + c;     // ghép so3 vào đầu chuỗi c
		}
		else
		{
			if (i == a.size() - 1)      // xét chữ số cuối của 2 chuỗi a, b, không cộng biến nhớ
			{
				so3 = so1 + so2;
				if (so3 ==2)
				{
					so3 = 0;
					nho = 1;
				}
				else nho = 0;
				c = to_string(so3) + c;
			}
			else if (i < a.size() - 1)  // xét những chữ số nằm giữa chuỗi, ko đầu ko cuối
			{
				if (((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 1) && nho == 1) //   xét trường hợp tổng 2 chữ số liền
					nho = 1;                                                                                  //sau khi cộng với nhớ thì bằng 10 
				else
				{
					if ((atoi(a.substr(i + 1, 1).c_str()) + atoi(b.substr(i + 1, 1).c_str())) == 2)    //  xét tr/h tổng 2 chữ số liền sau
						nho = 1;                                                                        // vị trí i > 10
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

string DaoBit(string k)
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
		return result = Cong2Bit(DaoBit(temp2), bit1);
	}
	else
		return bit;
}

string He2sang10(string he2)
{
	string k = "0";
	string h2;
	if (he2.size() == 128 && he2[0] == '1')
	{
		h2 = Cong2Bit(DaoBit(he2), "1");
		if (h2 == he2)
			return "0";
		else
		{
			for (int i = 0; i < h2.size(); i++)
			{
				if (h2[i] == '1')
					k = CongHaiSoHe10(k, LuyThua2(h2.size() - i - 1));
			}
		}
		return "-" + k;
	}
	for (int i = 0; i < he2.size(); i++)
	{
		if (he2[i] == '1')
			k = CongHaiSoHe10(k, LuyThua2(he2.size() - i - 1));
	}
	return k;
}

string ChiaCho2(string a)
{
	string b;
	while (a[0] == '0')
		a = a.substr(1, a.size() - 1);
	if (a.size() == 1 && atoi(a.c_str()) > 1)
	{
		b = to_string(atoi(a.c_str()) / 2);
	}
	else
	{
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
	return b;
}

string He2sang10float(string he2)
{
	int MU = 16383, linh_canh = 0;
	string bit_dau, bit_mu, bit_sau;
	string dau, nguyen, thap_phan = "0";
	int mu;
	bit_dau = he2.substr(0, 1);    // tach bit dau
	bit_mu = he2.substr(1, 15);    // tach day bit bieu dien so mu
	bit_sau = he2.substr(16, he2.size() - 16); // tach day bit bieu dien phan dinh tri
	
	for (int i = 0; i < bit_mu.size(); i++) //kiem tra truong hop so mu toan chu so 0 - ko tinh duoc
		if (bit_mu[i] == '1') linh_canh = 1;
	if (linh_canh == 0)
		return "0";

	linh_canh = 0;
	for (int i = 0; i < bit_mu.size(); i++) //kiem tra truong hop so mu toan chu so 1 - ko tinh duoc
		if (bit_mu[i] == '0') linh_canh = 1;
	if (linh_canh == 0)
		return "0";

	if (bit_dau == "1") dau = "-";

	mu = stoi(He2sang10(bit_mu)) - MU;
	
	bit_sau = "1" + bit_sau;      //1.E     
	
	string bit_sau2 = bit_sau.substr(0, mu + 1);
	nguyen = He2sang10(bit_sau.substr(0, mu + 1));
	if (bit_sau2 == bit_sau)    // kiem tra xem so co dau "," khong
		return dau + nguyen;
	else {
		string so_bi_chia = "1";           // so sanh voi bit_sau.size(), gan them cac so 0 vao sau cung so_bi_chia
		bit_sau = bit_sau.substr(mu + 1, bit_sau.size() - mu - 1);  //lay phan bit bieu dien phan sau dau phay cua so thap phan
		
		while (so_bi_chia.size() != bit_sau.size() + 1)
			so_bi_chia = so_bi_chia + "0";
		for (int i = 0; i <= bit_sau.size(); i++)
		{
			string thuong = so_bi_chia;
			if (bit_sau[i] == '1')
			{
				for (int j = 0; j < i + 1; j++)
					thuong = ChiaCho2(thuong);
				thap_phan = CongHaiSoHe10(thap_phan, thuong);
			}
		}
		return (dau + nguyen + "." + thap_phan).substr(0, 28);
	}
}

string He10sang2float(string he10)
{
	int MU = 16383;
	int linh_canh = 0;
	for (int i = 0; i < he10.size(); i++)
		if (he10[i] != '0') linh_canh = 1;
	if (linh_canh == 0)
		return "0";
	if (he10.find(".") < he10.size())
	{
		while (he10.find(".") == he10.size() - 1 || (he10[he10.size() - 1] == '0' && he10.find(".") < he10.size() - 1))
			he10.pop_back();
	}
	// dung cong thuc 1.E*2^F
	string bit, bit_sau, bit_mu, bit_dau, nguyen, thap_phan, test = "1";
	int mu;
	if (he10.find(".") > he10.size())            // kiem tra xem so co dau phay khong
	{
		if (he10[0] == '-')                      // neu he10 la so am thi cat con me no bit dau tien
		{
			he10 = he10.substr(1);
			bit_dau = "1";
		}
		else bit_dau = "0";

		if (he10 == "1")                          // xet tr/h he10 bang 1
		{
			bit_sau = "0";
			mu = MU;                             // so mu F bang 0
		}
		else {
			bit_sau = Doi10sang2(he10);
			bit_sau = bit_sau.substr(1);                          // cat bit dau, lay phan thap phan nam sau dau phay
			mu = bit_sau.size() + MU;                            // lay so mu F
		}
		bit_mu = Doi10sang2(to_string(mu));
		while (bit_mu.size() < 15)                            // cong phan bieu dien F cho du 15 chu so
			bit_mu = "0" + bit_mu;
		bit = bit_dau + bit_mu + bit_sau;
		return bit;
	}
	else {
		nguyen = he10.substr(0, he10.find("."));         // cat lay phan nguyen
		thap_phan = he10.substr(he10.find(".") + 1, he10.size() - he10.find("."));   // cat lay phan thap phan

		if (nguyen[0] == '-')
		{
			nguyen = nguyen.substr(1);
			bit_dau = "1";
		}
		else bit_dau = "0";

		bit_sau = Doi10sang2(nguyen);
		bit_sau = bit_sau.substr(1);

		mu = bit_sau.size() + MU;
		bit_mu = Doi10sang2(to_string(mu));
		while (bit_mu.size() < 15)                            // cong phan bieu dien F cho du 15 chu so
			bit_mu = "0" + bit_mu;

		thap_phan = "0" + thap_phan;                     // them so 0 vao truoc phan thap phan
		while (test.size() < thap_phan.size())           // test = 1000...00 
			test = test + "0";
		while (thap_phan != test)
		{
			thap_phan = CongHaiSoHe10(thap_phan, thap_phan);
			if (thap_phan[0] == '0') bit_sau = bit_sau + '0';
			else if (thap_phan[0] == '1' && thap_phan == test) {
				bit_sau = bit_sau + "1";
				break;
			}
			else {
				bit_sau = bit_sau + "1";
				thap_phan[0] = '0';
			}
			if (bit_sau.size() == 112)
				break;
		}
		bit = bit_dau + bit_mu + bit_sau;
		return bit;
	}
}
string He10sang16(string input) {
	string a[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
	string output, temp;
	vector<string>SoDu;
	if (input.size() <= 2 && atoi(input.c_str()) < 16) {
		output = a[atoi(input.c_str())];
		return output;
	}
	else {
		while (input.size() >= 2 || atoi(input.c_str()) != 0) {
			string thuong;
			if (input.size() <= 2 && atoi(input.c_str()) < 16) {
				thuong = "0";
				temp = input;
			}
			else {
				temp = input.substr(0, 2);
				int i = 2;
				do {
					if (atoi(temp.c_str()) / 16 == 0) {
						if (i == input.size()) {
							thuong += to_string(atoi(temp.c_str()) / 16);
							i++;
						}
						else if (i > 2 && i < input.size()) {
							thuong += "0";
							temp += input[i];
							i++;
						}
						else {
							temp += input[i];
							i++;
						}
					}
					else {
						if (i == 2) {
							thuong = to_string(atoi(temp.c_str()) / 16);
							temp = to_string(atoi(temp.c_str()) - atoi(thuong.c_str()) * 16) + input[i];
							i++;
						}
						else {
							thuong += to_string(atoi(temp.c_str()) / 16);
							string temp3 = thuong.substr(thuong.size() - 1, 1);
							temp = to_string(atoi(temp.c_str()) - atoi(temp3.c_str()) * 16) + input[i];
							i++;
						}
					}
				} while (i <= input.size());
			}
			SoDu.push_back(a[atoi(temp.c_str())]);
			input = thuong;
		}
		output = SoDu[SoDu.size() - 1];
		for (int i = SoDu.size() - 2; i >= 0; i--)
			output += SoDu[i];
		return output;
	}
}
string He2sang16(string he2)
{
	return He10sang16(He2sang10(he2));
}
string Doi16sang2(string a) {
	int sentinel = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a.substr(i, 1) != "0") {
			a = a.substr(i);
			sentinel++;
			break;
		}
	}
	if (sentinel == 0) { // truong hop nguoi dung nhap vao day so 0
		a = "0";
		return a;
	}
	string result;
	int temp1 = 0;
	string He16[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < 16; j++)
			if (a.substr(i, 1) == He16[j]) {
				temp1 = j;
				break;
			}
		if (i == 0) {
			result = Doi10sang2(to_string(temp1));
		}
		else {
			string temp2 = Doi10sang2(to_string(temp1));
			string temp3;
			if (temp2.size() < 4)
				for (int i = 0; i < 4 - temp2.size(); i++)
					temp3 += "0";
			temp3 += temp2;
			result += temp3;
		}
	}
	return result;
}
