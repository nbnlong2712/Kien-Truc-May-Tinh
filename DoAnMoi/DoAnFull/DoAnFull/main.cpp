#include<iostream>
#include<string>
#include"ChuyenDoi.h"
#include"QInt.h"
#include"Qfloat.h"
#include<conio.h>
using namespace std;

void Console()
{
	int page = 0, luachon = 1;
	while (luachon == 1)
	{
		if (page == 0)         // trang 0 : chon kieu QInt hay QFloat
		{
			int luachon0;
			system("cls");
			cout << endl << endl << "           1. SO NGUYEN               2. SO THUC" << endl << endl << endl;
			cout << "==> Moi ban chon kieu du lieu muon xu ly: ";
			cin >> luachon0;
			if (luachon0 != 1 && luachon0 != 2)
				continue;
			if (luachon0 == 1)
				page = 1;
			else page = 2;
		}
		if (page == 1)   // trang 1 : cac lua chon cho kieu SO NGUYEN
		{
			int luachon1;
			system("cls");
			cout << endl << ">> SO NGUYEN" << endl << endl;
			cout << "1. Tinh toan" << endl;
			cout << "2. Chuyen doi" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "=============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon1;
			while (luachon1 != 1 && luachon1 != 2&&luachon1 != 3 && luachon1 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon1;
			}
			if (luachon1 == 1)
				page = 3;
			else if (luachon1 == 2)
				page = 4;
			else if (luachon1 == 3)
				page = 0;
			else if (luachon1 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 2)      // trang 2 : cac lua chon cho kieu SO THUC
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO THUC" << endl << endl;
			cout << "1. Chuyen doi" << endl;
			cout << "2. HOME" << endl;
			cout << "3. Thoat" << endl;
			cout << "=============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2&&luachon2 != 3)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 5;
			else if (luachon2 == 2)
				page = 0;
			else if (luachon2 == 3)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 3)    // trang 3 : menu tinh toan SO NGUYEN
		{
			int luachon3;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN" << endl << endl;
			cout << "1. Thap phan" << endl;
			cout << "2. Nhi phan" << endl;
			cout << "3. Thap luc phan" << endl;
			cout << "4. Tro lai" << endl;
			cout << "5. HOME" << endl;
			cout << "6. Thoat" << endl;
			cout << "=============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon3;
			while (luachon3 != 1 && luachon3 != 2&&luachon3 != 3 && luachon3 != 4&&luachon3 != 5 && luachon3 != 6)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon3;
			}
			if (luachon3 == 1)
				page = 6;
			else if (luachon3 == 2)
				page = 7;
			else if (luachon3 == 3)
				page = 8;
			else if (luachon3 == 4)
				page = 1;
			else if (luachon3 == 5)
				page = 0;
			else if (luachon3 == 6)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 4)    // trang 4 : chuyen doi SO NGUYEN
		{
			int luachon4;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI" << endl << endl;
			cout << "1. Thap phan" << endl;
			cout << "2. Nhi phan" << endl;
			cout << "3. Thap luc phan" << endl;
			cout << "4. Tro lai" << endl;
			cout << "5. HOME" << endl;
			cout << "6. Thoat" << endl;
			cout << "=============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon4;
			while (luachon4 != 1 && luachon4 != 2 && luachon4 != 3 && luachon4 != 4 && luachon4 != 5 && luachon4 != 6)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon4;
			}
			if (luachon4 == 1)
				page = 42;
			else if (luachon4 == 2)
				page = 43;
			else if (luachon4 == 3)
				page = 44;
			else if (luachon4 == 4)
				page = 1;
			else if (luachon4 == 5)
				page = 0;
			else if (luachon4 == 6)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 5)    // trang 5 : chuyen doi SO THUC
		{
			int luachon5;
			system("cls");
			cout << endl << ">> SO THUC >> CHUYEN DOI" << endl << endl;
			cout << "1. Thap phan -> Nhi phan" << endl;
			cout << "2. Nhi phan -> Thap phan" << endl;
			cout << "3. Tro lai" << endl;
			cout << "4. HOME" << endl;
			cout << "5. Thoat" << endl;
			cout << "====================" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon5;
			while (luachon5 != 1 && luachon5 != 2 && luachon5 != 3 && luachon5 != 4 && luachon5 != 5)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon5;
			}
			if (luachon5 == 1)
				page = 51;
			else if (luachon5 == 2)
				page = 52;
			else if (luachon5 == 3)
				page = 2;
			else if (luachon5 == 4)
				page = 0;
			else if (luachon5 == 5)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 6)   // trang 6: menu tinh toan so thap phan 
		{
			int luachon6;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN" << endl << endl;
			cout << "1.  Cong" << endl;
			cout << "2.  Tru" << endl;
			cout << "3.  Nhan" << endl;
			cout << "4.  Chia" << endl;
			cout << "5.  AND" << endl;
			cout << "6.  OR" << endl;
			cout << "7.  XOR" << endl;
			cout << "8.  NOT" << endl;
			cout << "9.  ROL" << endl;
			cout << "10. ROR" << endl;
			cout << "11. SHIFT LEFT" << endl;
			cout << "12. SHIFT RIGHT" << endl;
			cout << "13. Tro lai" << endl;
			cout << "14. HOME" << endl;
			cout << "15. Thoat" << endl;
			cout << "================" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon6;
			while (luachon6 < 1 || luachon6>15)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon6;
			}
			if (luachon6 == 1)
				page = 9;
			else if (luachon6 == 2)
				page = 10;
			else if (luachon6 == 3)
				page = 11;
			else if (luachon6 == 4)
				page = 12;
			else if (luachon6 == 5)
				page = 13;
			else if (luachon6 == 6)
				page = 14;
			else if (luachon6 == 7)
				page = 15;
			else if (luachon6 == 8)
				page = 16;
			else if (luachon6 == 9)
				page = 17;
			else if (luachon6 == 10)
				page = 18;
			else if (luachon6 == 11)
				page = 19;
			else if (luachon6 == 12)
				page = 20;
			else if (luachon6 == 13)
				page = 3;
			else if (luachon6 == 14)
				page = 0;
			else if (luachon6 == 15)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 7)     // trang 7: menu tinh toan so nhi phan
		{
			int luachon7;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN" << endl << endl;
			cout << "1.  Cong" << endl;
			cout << "2.  Tru" << endl;
			cout << "3.  Nhan" << endl;
			cout << "4.  Chia" << endl;
			cout << "5.  AND" << endl;
			cout << "6.  OR" << endl;
			cout << "7.  XOR" << endl;
			cout << "8.  NOT" << endl;
			cout << "9.  ROL" << endl;
			cout << "10. ROR" << endl;
			cout << "11. SHIFT LEFT" << endl;
			cout << "12. SHIFT RIGHT" << endl;
			cout << "13. Tro lai" << endl;
			cout << "14. HOME" << endl;
			cout << "15. Thoat" << endl;
			cout << "================" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon7;
			while (luachon7 < 1 || luachon7>15)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon7;
			}
			if (luachon7 == 1)
				page = 21;
			else if (luachon7 == 2)
				page = 22;
			else if (luachon7 == 3)
				page = 23;
			else if (luachon7 == 4)
				page = 24;
			else if (luachon7 == 5)
				page = 25;
			else if (luachon7 == 6)
				page = 26;
			else if (luachon7 == 7)
				page = 27;
			else if (luachon7 == 8)
				page = 28;
			else if (luachon7 == 9)
				page = 29;
			else if (luachon7 == 10)
				page = 30;
			else if (luachon7 == 11)
				page = 31;
			else if (luachon7 == 12)
				page = 31;
			else if (luachon7 == 13)
				page = 3;
			else if (luachon7 == 14)
				page = 0;
			else if (luachon7 == 15)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 8)     //trang 8: menu tinh toan so thap luc phan
		{
			int luachon6;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN" << endl << endl;
			cout << "1.  Cong" << endl;
			cout << "2.  Nhan" << endl;
			cout << "3.  AND" << endl;
			cout << "4.  OR" << endl;
			cout << "5.  XOR" << endl;
			cout << "6.  ROL" << endl;
			cout << "7.  ROR" << endl;
			cout << "8.  SHIFT LEFT" << endl;
			cout << "9. SHIFT RIGHT" << endl;
			cout << "10. Tro lai" << endl;
			cout << "11. HOME" << endl;
			cout << "12. Thoat" << endl;
			cout << "===============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon6;
			while (luachon6 < 1 || luachon6>12)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon6;
			}
			if (luachon6 == 1)
				page = 33;
			else if (luachon6 == 2)
				page = 34;
			else if (luachon6 == 3)
				page = 35;
			else if (luachon6 == 4)
				page = 36;
			else if (luachon6 == 5)
				page = 37;
			else if (luachon6 == 6)
				page = 38;
			else if (luachon6 == 7)
				page = 39;
			else if (luachon6 == 8)
				page = 40;
			else if (luachon6 == 9)
				page = 41;
			else if (luachon6 == 10)
				page = 3;
			else if (luachon6 == 11)
				page = 0;
			else if (luachon6 == 12)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 9)  // trang 9: cong hai so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> CONG" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 1);
			ScanQInt(b, 1);
			cout << "==> Ket qua: " << He2sang10(Cong2Bit(TraVeStringHe2(a), TraVeStringHe2(b))) << endl;
			cout << "==============" << endl;
			cout << "1. Cong tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 9;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 10)    // trang 10: tru hai so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> TRU" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 1);
			ScanQInt(b, 1);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a - b)) << endl;
			cout << "==============" << endl;
			cout << "1. Tru tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 10;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 11)    //trang 11: nhan hai so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> NHAN" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 1);
			ScanQInt(b, 1);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a*b)) << endl;
			cout << "==============" << endl;
			cout << "1. Nhan tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page =11;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
	/**/if (page == 12)  //trang 12: chia hai so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> CHIA" << endl << endl;
			QInt a, b;
			
			cin.ignore();
			ScanQInt(a, 1);
			ScanQInt(b, 1);
			if (He2sang10(TraVeStringHe2(a / b)) == "-1") cout << "==> Ket qua: khong chia duoc!" << endl;
			else cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a / b)) << endl;
			cout << "==============" << endl;
			cout << "1. Chia tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 12;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 13)  // trang 13: AND so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> AND" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 1);
			ScanQInt(b, 1);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a&b)) << endl;
			cout << "==============" << endl;
			cout << "1. AND tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 13;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 14)  // trang 14: 
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> OR" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 1);
			ScanQInt(b, 1);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a|b)) << endl;
			cout << "==============" << endl;
			cout << "1. OR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 14;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 15)  //trang 15: XOR so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> XOR" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 1);
			ScanQInt(b, 1);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a^b)) << endl;
			cout << "==============" << endl;
			cout << "1. XOR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 15;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 16)   // trang 16: NOT 1 so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> NOT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 1);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(~a)) << endl;
			cout << "==============" << endl;
			cout << "1. NOT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 16;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 17) // trang 17: ROL so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> ROL" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 1);
			rol(a);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. ROL tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 17;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 18) // trang 18: ROR so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> ROR" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 1);
			ror(a);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. ROR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 18;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 19)  // trang 19: dich trai so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> SHFT LEFT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 1);
			DichTrai(a);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. SHIFT LEFT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 19;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 20)  //trang 20: dich phai so thap phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> SHFT RIGHT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 1);
			DichPhai(a);
			cout << "==> Ket qua: " << He2sang10(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. SHIFT RIGHT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 20;
			else if (luachon2 == 2)
				page = 6;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 21)  //trang 21: cong so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> CONG" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 2);
			ScanQInt(b, 2);
			cout << "==> Ket qua: " << TraVeStringHe2(a + b) << endl;
			cout << "==============" << endl;
			cout << "1. Cong tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 21;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 22) // trang 22: tru hai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> TRU" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 2);
			ScanQInt(b, 2);
			cout << "==> Ket qua: " << TraVeStringHe2(a - b) << endl;
			cout << "==============" << endl;
			cout << "1. Tru tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 22;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 23) //trang 23: nhan hai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> NHAN" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 2);
			ScanQInt(b, 2);
			cout << "==> Ket qua: " << TraVeStringHe2(a*b) << endl;
			cout << "==============" << endl;
			cout << "1. Nhan tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 23;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
	/**/if (page == 24)// trang 24: chia hai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> CHIA" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 2);
			ScanQInt(b, 2);
			if (TraVeStringHe2(a / b) == "-1") cout << "==> Ket qua: khong chia duoc!" << endl;
			else cout << "==> Ket qua: " << TraVeStringHe2(a / b) << endl;
			cout << "==============" << endl;
			cout << "1. Chia tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 24;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 25)  //trang 25: AND hai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> AND" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 2);
			ScanQInt(b, 2);
			cout << "==> Ket qua: " << TraVeStringHe2(a&b) << endl;
			cout << "==============" << endl;
			cout << "1. AND tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 25;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 26) //trang 26: OR hai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> OR" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 2);
			ScanQInt(b, 2);
			cout << "==> Ket qua: " << TraVeStringHe2(a | b) << endl;
			cout << "==============" << endl;
			cout << "1. OR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 26;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 27)  // trang 27: XOR hai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> XOR" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 2);
			ScanQInt(b, 2);
			cout << "==> Ket qua: " << TraVeStringHe2(a^b) << endl;
			cout << "==============" << endl;
			cout << "1. XOR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 27;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 28) // trang 28: NOT so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> NOT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 2);
			cout << "==> Ket qua: " << TraVeStringHe2(~a) << endl;
			cout << "==============" << endl;
			cout << "1. NOT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 28;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 29) //trang 29: ROL so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> ROL" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 2);
			rol(a);
			cout << "==> Ket qua: " << TraVeStringHe2(a) << endl;
			cout << "==============" << endl;
			cout << "1. ROL tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 29;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 30) //trang 30: ROR so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> ROR" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 2);
			ror(a);
			cout << "==> Ket qua: " << TraVeStringHe2(a) << endl;
			cout << "==============" << endl;
			cout << "1. ROR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 30;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 31) //trang 31: dich trai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> SHFT LEFT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 2);
			DichTrai(a);
			cout << "==> Ket qua: " << TraVeStringHe2(a) << endl;
			cout << "==============" << endl;
			cout << "1. SHIFT LEFT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 31;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 32) //trang 32: dich phai so nhi phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP PHAN >> SHFT RIGHT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 2);
			DichPhai(a);
			cout << "==> Ket qua: " << TraVeStringHe2(a) << endl;
			cout << "==============" << endl;
			cout << "1. SHIFT RIGHT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 32;
			else if (luachon2 == 2)
				page = 7;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 33) //trang 33: cong hai so he 16
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN >> CONG" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 3);
			ScanQInt(b, 3);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a + b)) << endl;
			cout << "==============" << endl;
			cout << "1. Cong tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 33;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 34) //trang 34; nhan hai so 16
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN >> NHAN" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 3);
			ScanQInt(b, 3);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a * b)) << endl;
			cout << "==============" << endl;
			cout << "1. Nhan tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 34;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 35) //trang 35: AND hai so he 16
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN >> AND" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 3);
			ScanQInt(b, 3);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a&b)) << endl;
			cout << "==============" << endl;
			cout << "1. AND tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 35;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 36) // trang 36: OR hai so he 16
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN >> OR" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 3);
			ScanQInt(b, 3);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a | b)) << endl;
			cout << "==============" << endl;
			cout << "1. OR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 36;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 37) // trang 37: XOR hai so he 16
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN >> XOR" << endl << endl;
			QInt a, b;
			cin.ignore();
			ScanQInt(a, 3);
			ScanQInt(b, 3);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a^b)) << endl;
			cout << "==============" << endl;
			cout << "1. XOR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 37;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		
		if (page == 38) //trang 39: ROL so thap luc phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN >> ROL" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 3);
			rol(a);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. ROL tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 38;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 39) //trang 40: ROR so thap luc phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> THAP LUC PHAN >> ROR" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 3);
			ror(a);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. ROR tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 39;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 40) //trang 41: dich trai he thap luc phan
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> SHIFT LEFT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 3);
			DichTrai(a);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. SHIFT LEFT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 40;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 41) // trang 42: dich phai so he 16
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> TINH TOAN >> NHI PHAN >> SHIFT RIGHT" << endl << endl;
			QInt a;
			cin.ignore();
			ScanQInt(a, 3);
			DichPhai(a);
			cout << "==> Ket qua: " << He2sang16(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. SHIFT RIGHT tiep" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 41;
			else if (luachon2 == 2)
				page = 8;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 42)  //trang 43: menu chuyen he 10 sang cac he khac SO NGUYEN
		{
			int luachon3;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> THAP PHAN" << endl << endl;
			cout << "1. Nhi phan" << endl;
			cout << "2. Thap luc phan" << endl;
			cout << "3. Tro lai" << endl;
			cout << "4. HOME" << endl;
			cout << "5. Thoat" << endl;
			cout << "=============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon3;
			while (luachon3 != 1 && luachon3 != 2 && luachon3 != 3 && luachon3 != 4 && luachon3 != 5)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon3;
			}
			if (luachon3 == 1)
				page = 45;
			else if (luachon3 == 2)
				page = 46;
			else if (luachon3 == 3)
				page = 4;
			else if (luachon3 == 4)
				page = 0;
			else if (luachon3 == 5)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 43) //trang 44: menu chuyen he 2 sang he khac SO NGUYEN
		{
			int luachon3;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> NHI PHAN" << endl << endl;
			cout << "1. Thap phan" << endl;
			cout << "2. Thap luc phan" << endl;
			cout << "3. Tro lai" << endl;
			cout << "4. HOME" << endl;
			cout << "5. Thoat" << endl;
			cout << "=============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon3;
			while (luachon3 != 1 && luachon3 != 2 && luachon3 != 3 && luachon3 != 4 && luachon3 != 5)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon3;
			}
			if (luachon3 == 1)
				page = 47;
			else if (luachon3 == 2)
				page = 48;
			else if (luachon3 == 3)
				page = 4;
			else if (luachon3 == 4)
				page = 0;
			else if (luachon3 == 5)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 44) // trang 45: menu chuyen he 16 sang he khac SO NGUYEN
		{
			int luachon3;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> THAP LUC PHAN" << endl << endl;
			cout << "1. Thap phan" << endl;
			cout << "2. Nhi phan" << endl;
			cout << "3. Tro lai" << endl;
			cout << "4. HOME" << endl;
			cout << "5. Thoat" << endl;
			cout << "=============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon3;
			while (luachon3 != 1 && luachon3 != 2 && luachon3 != 3 && luachon3 != 4 && luachon3 != 5)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon3;
			}
			if (luachon3 == 1)
				page = 49;
			else if (luachon3 == 2)
				page = 50;
			else if (luachon3 == 3)
				page = 4;
			else if (luachon3 == 4)
				page = 0;
			else if (luachon3 == 5)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 45) //trang 46: chuyen he 10 sang he 2 SO NGUYEN
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> HE 10 SANG 2" << endl << endl;
			cin.ignore();
			QInt a;
			ScanQInt(a, 1);
			cout << "==> Chuyen sang he 2: " << TraVeStringHe2(a) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 45;
			else if (luachon2 == 2)
				page = 42;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 46) //trang 47: chuyen he 10 sang he 16 SO NGUYEN
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> HE 10 SANG 16" << endl << endl;
			cin.ignore();
			QInt a;
			ScanQInt(a, 1);
			cout << "==> Chuyen sang he 16: " << He2sang16(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 46;
			else if (luachon2 == 2)
				page = 42;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 47)  //trang 48: chuyen he 2 sang he 10 SO NGUYEN
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> HE 2 SANG 10" << endl << endl;
			cin.ignore();
			QInt a;
			ScanQInt(a, 2);
			cout << "==> Chuyen sang he 10: " << He2sang10(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 47;
			else if (luachon2 == 2)
				page = 43;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 48)  //trang 49: chuyen he 2 sang he 16 SO NGUYEN
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> HE 2 SANG 16" << endl << endl;
			cin.ignore();
			QInt a;
			ScanQInt(a, 2);
			cout << "==> Chuyen sang he 16: " << He2sang16(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 48;
			else if (luachon2 == 2)
				page = 43;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 49)  //trang 50: chuyen he 16 sang he 10 SO NGUYEN
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> HE 16 SANG 10" << endl << endl;
			cin.ignore();
			QInt a;
			ScanQInt(a, 3);
			cout << "==> Chuyen sang he 10: " << He2sang10(TraVeStringHe2(a)) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 49;
			else if (luachon2 == 2)
				page = 44;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 50) //trang 51: chuyen he 16 sang he 2 SO NGUYEN
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO NGUYEN >> CHUYEN DOI >> HE 16 SANG 2" << endl << endl;
			cin.ignore();
			QInt a;
			ScanQInt(a, 3);
			cout << "==> Chuyen sang he 2: " << TraVeStringHe2(a) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 50;
			else if (luachon2 == 2)
				page = 44;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 51) // trang 52: chuyen he 10 sang 2 SO THUC
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO THUC >> CHUYEN DOI >> HE 10 SANG 2" << endl << endl;
			cin.ignore();
			Qfloat a;
			ScanQfloat(a, 1);
			cout << "==> Chuyen sang he 2: " << TraVeStringHe2float(a) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 51;
			else if (luachon2 == 2)
				page = 5;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
		if (page == 52) // trang 53: chuyen he 2 sang 10 SO THUC
		{
			int luachon2;
			system("cls");
			cout << endl << ">> SO THUC >> CHUYEN DOI >> HE 2 SANG 10" << endl << endl;
			cin.ignore();
			Qfloat a;
			ScanQfloat(a, 2);
			if (He2sang10float(TraVeStringHe2float(a)) == "0") cout << "==> Chuyen sang he 10: Khong chuyen duoc!" << endl;
			else cout << "==> Chuyen sang he 10: " << He2sang10float(TraVeStringHe2float(a)) << endl;
			cout << "==============" << endl;
			cout << "1. Tiep tuc chuyen doi" << endl;
			cout << "2. Tro lai" << endl;
			cout << "3. HOME" << endl;
			cout << "4. Thoat" << endl;
			cout << "==============" << endl << endl;
			cout << "==> Moi ban nhap lua chon: ";
			cin >> luachon2;
			while (luachon2 != 1 && luachon2 != 2 && luachon2 != 3 && luachon2 != 4)
			{
				cout << "   - Nhap lai lua chon: ";
				cin >> luachon2;
			}
			if (luachon2 == 1)
				page = 52;
			else if (luachon2 == 2)
				page = 5;
			else if (luachon2 == 3)
				page = 0;
			else if (luachon2 == 4)
			{
				cout << endl << " Cam on da su dung!";
				_getch();
				exit(0);
			}
		}
	}
}


int main()
{
	Console();
	return 0;
}