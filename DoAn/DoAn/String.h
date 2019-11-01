#pragma once
#pragma once
#include"QInt.h"
int KiemTraSoAm(string s) {
	if (s[0] == '-')
		return 1;
	else
		return 0;
}

//chuan hoa so am
string ChuanHoa(string s) {
	if (KiemTraSoAm(s) == 1) {
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '0') {
				s[i] = '1';
			}
			else
				if (s[i] == '1') {
					s[i] == '0';
				}
		}
		if (s[s.length() - 1] == '0') {
			s[s.length() - 1] == '1';
		}
	}
	return s;
}