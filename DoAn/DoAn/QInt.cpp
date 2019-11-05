#pragma once
#include"QInt.h"
#include"ChuyenDoi.h"
QInt::QInt() {
	for (int i = 0; i < 4; i++) {
		data[i] = { 0 };
	}
};
QInt daobitbu2(QInt &a) {
	QInt b;
	b.data[3] = b.data[3] | (1 << 0);
	//PrintQInt(b);
	for (int i = 0; i < 4; i++) {
		a.data[i] = ~a.data[i];
	}
	a = a + b;
	return a;
}
QInt QInt::operator=(const QInt &a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		data[i]= c.data[i]| a.data[i]; // or voi QInt da nhap
	}
	return *this;
};
QInt QInt::operator+(QInt a) {
	int nho=0;
	QInt c;
	for (int i = 3; i >=0; i--) {
		for (int j = 31; j >=0; j--) {
			if ((((data[i] >> (32 - j-1)) & 1) + ((a.data[i] >> (32 - j - 1)) & 1)+nho )== 2) {
				nho = 1;
				c.data[i] = c.data[i] | (0 << (32 - j - 1));
			}else
				if ((((data[i] >> (32 - j - 1)) & 1) + ((a.data[i] >> (32 - j - 1)) & 1) + nho) == 1) {
					c.data[i] = c.data[i] | (1 << (32 - j - 1));
					nho = 0;
				}
				else
					if ((((data[i] >> (32 - j - 1)) & 1) + ((a.data[i] >> (32 - j - 1)) & 1) + nho) == 0) {
						c.data[i] = c.data[i] | (0 << (32 - j - 1));
						nho = 0;
					}
					else
						if ((((data[i] >> (32 - j - 1)) & 1) + ((a.data[i] >> (32 - j - 1)) & 1) + nho) == 3) {
							nho = 1;
							c.data[i] = c.data[i] | (1 << (32 - j - 1));
						}
		}
	}
	return c;
};
QInt QInt::operator-(QInt a) {
	return *this+daobitbu2(a);
};
QInt QInt::operator*(QInt a) {
	QInt tichcucbo;
	QInt kq;
	QInt zero;
	QInt temp = *this;
	for (int i = 3; i >=0; i--) {
		for (int j = 31; j>=0; j--) {
			// G2 > SKT
			if (i == 3 && j == 31) {
				if (((a.data[i] >> (32 - j - 1)) & 1) == 0) {
					tichcucbo = zero;
					kq = tichcucbo;
					DichTrai(temp);
				}
				else
					if (((a.data[i] >> (32 - j - 1)) & 1) == 1) {
						tichcucbo = temp;
					kq = tichcucbo;
					DichTrai(temp);
				}
			}else// cac th con lai dich trai
			if (((a.data[i] >> (32 - j - 1)) & 1) == 0) {
				tichcucbo = zero;
				kq = kq + tichcucbo;
				DichTrai(temp);
			}else
				if (((a.data[i] >> (32 - j - 1)) & 1) == 1) {
					tichcucbo = temp;
					kq = kq + tichcucbo;
					DichTrai(temp);
				}
		}
	}
	return kq;

};
QInt QInt::operator/(QInt a) {
	QInt Q=*this;
	QInt A;
	QInt tam;
	for (int i = 0; i < 128; i++) {
		if (((Q.data[0] >> (32 - 1)) & 1) == 0) {
			DichTrai(Q);
			DichTrai(A);
			tam = A;
			A = A - a;
				if (((A.data[0] >> (32 - 1)) & 1) == 0) {
					Q.data[3] = Q.data[3] | (1 << (32 - 1 - 31));
				}else
					if (((A.data[0] >> (32 - 1)) & 1) == 1) {
						A = tam;
					}
		}else
			if (((Q.data[0] >> (32 - 1)) & 1) == 1) {
				DichTrai(Q);
				DichTrai(A);
				A.data[3] = A.data[3] | (1 << (32 - 1 - 31));
				tam = A;
				A = A -a;
				
					if (((A.data[0] >> (32 - 1)) & 1) == 0) {
						Q.data[3] = Q.data[3] | (1 << (32 - 1 - 31));
					}
					else
					if (((A.data[0] >> (32 - 1)) & 1) == 1) {
						A = tam;
					}	
			}
	}
	return Q;
};
QInt QInt::operator&( QInt a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = data[i]&(a.data[i]);
		}
	}
	return c;
};
QInt QInt::operator|(QInt a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = data[i] | (a.data[i]);
		}
	}
	return c;
};
QInt QInt::operator^(QInt a) {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = data[i] ^ (a.data[i]);
		}
	}
	return c;
};
QInt QInt::operator~() {
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			c.data[i] = ~data[i];
		}
	}
	return c;
};
void ScanQInt(QInt &z) {
	cout << endl;
	cout << "nhap chuoi:";
	string b;
	getline(cin, b);
	/*if (b.substr(0,1) == "-") {
		cout << "kkk";
		z.data[0]=z.data[0]|(1<<32);
		b = b.substr(1, b.length() - 1);
	}*/

	string c = StrToBi(b);
	while (c.length() != 128) {
		c = '0' + c;
	}
	int r = 0;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			z.data[i] = z.data[i] | atoi(c.substr(r, 1).c_str()) << (32 - j-1);
			r++;
		}
	}

};

void PrintQInt(QInt &z) {
	for (int j = 0; j < 4; j++) {
		//cout << "[" << j << "]:" << endl;
		for (int i = 0; i < 32; i++) {
			cout << ((z.data[j] >> (32 - i-1)) & 1);
		}
	}
	cout << endl;
}

bool operator ==(QInt a, QInt b) {
	int dem = 0;
	QInt c;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			if ((a.data[i] >> (32 - 1 - j)) == (b.data[i] >> (32 - 1 - j))) {
				dem++;
			}
		}
	}
	if (dem == 128)
		return true;
	else
		return false;
}
bool operator >(QInt a, QInt b) {
	for (int i = 0; i <4; i++) {
		for (int j = 0; j <32; j++) {
			if (((a.data[i] >> (32 - j-1))) > ((b.data[i] >> (32 - j-1)))) {
				return true;
			}else
				if (((a.data[i] >> (32 - j-1))) < ((b.data[i] >> (32 - j-1)))) {
					return false;
				}
		}
	}
	return false;

}

bool operator <(QInt a, QInt b) {
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			if (((a.data[i] >> (32 - j-1))) < ((b.data[i] >> (32 - j-1)))) {
				return true;
			}
			else
				if (((a.data[i] >> (32 - j-1))) > ((b.data[i] >> (32 - j-1)))) {
					return false;
				}
		}
	}
	return false;
}

bool operator >=(QInt a, QInt b) {
	if (a > b||a == b) {
		return true;
	}
	return false;
}
bool operator <=(QInt a, QInt b) {
	if (a < b || a == b) {
		return true;
	}
	return false;
}
void DichTrai(QInt &a) {
	int temp[128];
	int k = 0;
	// tach ra 2 doan
	for (int i = 0; i < 31; i++) {
		temp[k] = (a.data[0] >> (31 - 1 - i)) & 1;
		k++;
	}
	for (int j = 1; j < 4; j++) {
			for (int i = 0; i < 32; i++) {
				temp[k] = (a.data[j] >> (32 - 1 - i)) & 1;
				k++;
			}
	}
	temp[127] = 0;
	for (int i = 0; i < 4; i++) {
		a.data[i] = { 0 };
	}
	//cout << endl;
	/*for (int i = 0; i < 128; i++) {
		cout << temp[i];
	}*/
	//cout << endl;
	int r = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			a.data[i] = a.data[i] |temp[r] << (32 - j-1);
			r++;
		}
	}

}
void DichPhai(QInt &a) {
	int temp[128];
	temp[0] = 0;
	int k = 1;
	for (int j = 0; j < 4; j++) {
		for (int i = 0; i < 32; i++) {
			if (k < 128) {
				temp[k] = ((a.data[j] >> (32-1 - i)) & 1);
				k++;
			}

		}
	}
	for (int i = 0; i < 4; i++) {
		a.data[i] = { 0 };
	}
	//for (int i = 0; i < 128; i++) {
	//	cout << temp[i];
	//}
	int r = 0;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 32; j++) {
			a.data[i] = a.data[i] | temp[r] << (32 - j-1);
			r++;
		}
	}

}

void rol(QInt &a) {
	int luu;
	luu= ((a.data[0] >> (32 - 1)) & 1);
	DichTrai(a);
	a.data[3] = a.data[3] | (luu << 32);
};// xoay trai

void ror(QInt &a) {
	int luu;
	luu = ((a.data[3] >> (0)) & 1);
	cout << endl;
	//cout << luu; cout << endl;
	DichPhai(a);
	a.data[0] = a.data[0] | (luu << (32-1));
};// xoay trai

