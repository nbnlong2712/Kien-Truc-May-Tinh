#include<iostream>
#include<string>
#include<vector>
using namespace std;
void main()
{
	string a[16] = { "0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F" };
	string input, output, temp;
	vector<string>SoDu;
	getline(cin, input);
	if (input.size() <= 2 && atoi(input.c_str())<16) {
		output = a[atoi(input.c_str())];
		cout << output << endl;
	}
	else {
		while (input.size()>=2 || atoi(input.c_str())!=0 ) {
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
						if(i==input.size()){
							thuong += to_string(atoi(temp.c_str()) / 16);
							i++;
						}
						else if (i > 2 && i<input.size()) {
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
	}
	output = SoDu[SoDu.size()-1];
	for (int i = SoDu.size()-2; i >= 0; i--)
		output += SoDu[i];
	cout << output << endl;
}