#include <iostream>
#include <conio.h>
#include <time.h>
#define MAX 100
using namespace std;

int SNT(int x)
{
	for (int i = 2; i<x; i++)
		if (x%i == 0) return 0;
	return 1;
}

void SNTMang1(int a[], int n)
{
	for (int i = 0; i<n; i++)
		if (SNT(a[i])) cout << a[i] << " ";
}

int SHT(int x)
{
	int s = 0;
	for (int i = 1; i<x; i++)
		if (x%i == 0) s += i;
	if (s == x) return 1;
	return 0;
}

void SHTMang1(int a[], int n)
{
	for (int i = 0; i<n; i++)
		if (SHT(a[i])) cout << a[i] << " ";
}

int SCP(float x)
{
	float t = sqrt(x);
	if (t*t == x) return 1;
	return 0;
}

void SCPMang1(int a[], int n)
{
	for (int i = 0; i<n; i++)
		if (SCP(a[i])) cout << a[i] << " ";
}

int USCLN(int x, int y)
{
	int a = abs(x), b = abs(y), i;
	if (x<y) i = x;
	else i = y;
	for (; ; i--)
		if (x%i == 0 && y%i == 0) return i;
}

int BSCNN(int x, int y)
{
	int i = 1;
	while (i%x != 0 && i%y != 0) i++;
	return i;
}

int snthang(int m, int y)
{
	switch (m)
	{
	case 1:case 3:case 5:case 7:case 8:case 10:case 12: return 31;
	case 4:case 6:case 9:case 11: return 30;
	case 2: if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) return 29;
		return 28;
	}
}

void NhapMang1(int z[], int n)
{
	for (int i = 0; i<n; i++)
	{
		cout << "Nhap a[" << i << "] = ";
		cin >> z[i];
	}
}

void XuatMang1(int z[], int n)
{
	cout << "\nMang da nhap: a[" << n << "] = {";
	for (int i = 0; i<n; i++)
	{
		cout << z[i];
		if (i<n - 1) cout << ",";
	}
	cout << "}";
}

int DemSoChan(int z[], int n)
{
	int d = 0;
	for (int i = 0; i<n; i++)
		if (z[i] % 2 == 0) d++;
	return d;
}

int MaxMang1(int a[], int n)
{
	int max = a[0];
	for (int i = 0; i<n; i++)
		if (a[i]>max) max = a[i];
	return max;
}

int MinMang1(int a[], int n)
{
	int min = a[0];
	for (int i = 1; i<n; i++)
		if (a[i]<min) min = a[i];
	return min;
}

int DemMaxMang1(int a[], int n)
{
	int min = MinMang1(a, n), d = 0;
	for (int i = 0; i<n; i++)
		if (min == a[i]) d++;
	return d;
}

int DemMinMang1(int a[], int n)
{
	int min = MinMang1(a, n), d = 0;
	for (int i = 0; i<n; i++)
		if (min == a[i]) d++;
	return d;
}

int DemSNTMang1(int z[], int n)
{
	int d = 0;
	for (int i = 0; i<n; i++)
		if (SNT(z[i])) d++;
	return d;
}

void ViTriSNTMang1(int z[], int n)
{
	for (int i = 0; i<n; i++)
		if (SNT(z[i]))
			cout << "\n   + So nguyen to: " << z[i] << " - Vi tri: " << i;
}

int DemSCPMang1(int z[], int n)
{
	int d = 0, t;
	for (int i = 0; i<n; i++)
	{
		t = sqrt((double)z[i]);
		if (z[i] == t*t) d++;
	}
	return d;
}

void ViTriSCPMang1(int z[], int n)
{
	int t;
	for (int i = 0; i<n; i++)
	{
		t = sqrt((double)z[i]);
		if (z[i] == t*t)
			cout << "\n   + So chinh phuong: " << z[i] << " - Vi tri: " << i;
	}
}

int DemSHTMang1(int z[], int n)
{
	int d = 0, t;
	for (int i = 0; i<n; i++)
		if (SHT(z[i])) d++;
	return d;
}

void ViTriSHTMang1(int z[], int n)
{
	int t;
	for (int i = 0; i<n; i++)
		if (SHT(z[i]))
			cout << "\n   + So hoan thien: " << z[i] << " - Vi tri: " << i;
}

void TaoMang2(int a[][MAX], int r, int c)
{
	srand(time(0));
	for (int i = 0; i<r; i++)
		for (int j = 0; j<c; j++)
			a[i][j] = rand() % 10;
}

void NhapMang2(int a[][MAX], int r, int c)
{
	for (int i = 0; i<r; i++)
		for (int j = 0; j<c; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMang2(int a[][MAX], int r, int c)
{
	cout << "\nMang hai chieu: a[" << r << "][" << c << "]\n\n\t";
	for (int i = 0; i<r; i++)
	{
		for (int j = 0; j<c; j++)
			cout << a[i][j] << "\t";
		cout << "\n\t";
	}
}

void NhapMaTranVuong(float a[][MAX], int n)
{
	for (int i = 0; i<n; i++)
		for (int j = 0; j<n; j++)
		{
			cout << "Nhap a[" << i << "][" << j << "] = ";
			cin >> a[i][j];
		}
}

void XuatMaTranVuong(float a[][MAX], int n)
{
	cout << "\n\n\t";
	for (int i = 0; i<n; i++)
	{
		for (int j = 0; j<n; j++)
			cout << a[i][j] << "\t";
		cout << "\n\t";
	}
}

void PhanRaLU(float A[][MAX], float L[][MAX], float U[][MAX], int n)
{
	for (int k = 0; k<n; k++)
	{
		U[k][k] = A[k][k];
		L[k][k] = 1;
		for (int i = k + 1; i<n; i++)
		{
			L[i][k] = A[i][k] / U[k][k];
			U[k][i] = A[k][i];
			U[i][k] = 0;
			L[k][i] = 0;
		}
		for (int i = k + 1; i<n; i++)
			for (int j = k + 1; j<n; j++)
				A[i][j] = A[i][j] - L[i][k] * U[k][j];
	}
}

double DinhThucMaTranTamGiac(float a[][MAX], int n)
{
	double temp = 1;
	for (int i = 0; i<n; i++)
		temp *= a[i][i];
	return temp;
}

int TongDuongCheo(int a[][MAX], int r, int c)
{
	if (r != c) return 0;
	int s = 0;
	for (int i = 0; i<r; i++)
		for (int j = 0; j<c; j++)
			if (i == j) s += a[i][j];
	return s;
}

struct A
{
	int a, b, c;
};

struct B
{
	char name[30];
	A n;
};

void option1()
{
	cout << "\n1. Tim so lon nhat\n";
	int a1[MAX], n1;
	cout << "\nSo luong so can xu ly: ";
	cin >> n1;
	cout << "Nhap cac so can xu ly: ";
	for (int i = 0; i<n1; i++)
		cin >> a1[i];
	cout << "\nSo lon nhat la: " << MaxMang1(a1, n1);
}

void option2()
{
	cout << "\n2. Tim so nho nhat\n";
	int a2[MAX], n2;
	cout << "\nSo luong so can xu ly: ";
	cin >> n2;
	cout << "Nhap cac so can xu ly: ";
	for (int i = 0; i<n2; i++)
		cin >> a2[i];
	cout << "\nSo nho nhat la: " << MinMang1(a2, n2);
}

void option3()
{
	cout << "\n3. Kiem tra so nguyen to\n";
	int a3[MAX], n3;
	cout << "\nSo luong so can xu ly: ";
	cin >> n3;
	cout << "Nhap cac so can xu ly: ";
	for (int i = 0; i<n3; i++)
		cin >> a3[i];
	cout << "\nSo nguyen to: ";
	SNTMang1(a3, n3);
}

void option4()
{
	cout << "\n4. Kiem tra so hoan thien\n";
	int a4[MAX], n4;
	cout << "\nSo luong so can xu ly: ";
	cin >> n4;
	cout << "Nhap cac so can xu ly: ";
	for (int i = 0; i<n4; i++)
		cin >> a4[i];
	cout << "\nSo hoan thien: ";
	SHTMang1(a4, n4);
}

void option5()
{
	cout << "\n5. Kiem tra so chinh phuong\n";
	int a5[MAX], n5;
	cout << "\nSo luong so can xu ly: ";
	cin >> n5;
	cout << "Nhap cac so can xu ly: ";
	for (int i = 0; i<n5; i++)
		cin >> a5[i];
	cout << "\nSo chinh phuong: ";
	SCPMang1(a5, n5);
}

void option6()
{
	cout << "\n6. Tim uoc so chung lon nhat trong 2 so\n";
	int x1, x2;
	cout << "\nNhap 2 so can xu ly: ";
	cin >> x1 >> x2;
	cout << "\nUoc so chung lon nhat: " << USCLN(x1, x2);
}

void option7()
{
	cout << "\n7. Tim boi so chung nho nhat trong 2 so\n";
	int x3, x4;
	cout << "\nNhap 2 so can xu ly: ";
	cin >> x3 >> x4;
	cout << "\nBoi so chung nho nhat: " << BSCNN(x3, x4);
}

void option8()
{
	cout << "\n8. Xuat cac so nguyen to dau tien\n";
	int x5, x6 = 1;
	cout << "\nNhap so luong so nguyen to dau tien: ";
	cin >> x5;
	cout << "So nguyen to: ";
	for (int i = 1; i <= x5; i++)
		if (SNT(x6))
		{
			cout << x6 << " ";
			x6++;
		}
		else
		{
			x6++;
			i--;
		}
}

void option9()
{
	cout << "\n9. In lich\n";
	int d, y, m = 1;
	cout << "\nNhap nam: ";
	cin >> y;
	cout << "Nhap thu dau tien cua nam: ";
	cin >> d;
	while (d<2 || d>7)
	{
		cout << "Nhap sai. Nhap lai: ";
		cin >> d;
	}
	for (; m <= 12; m++)
	{
		cout << "\nThang " << m << "\n";
		cout << "Hai\tBa\tTu\tNam\tSau\tBay\tCn\n";
		int j = 2;
		for (int i = 2; i<d; i++)
		{
			cout << "\t";
			j++;
		}
		for (int i = 1; i <= snthang(m, y); i++)
		{
			if (j>8)
			{
				cout << "\n";
				j = 2;
			}
			cout << i << "\t";
			j++;
		}
		cout << "\n";
		d = j;
	}
}

void option10()
{
	cout << "\n10. Phan tich mang 1 chieu\n";
	int a6[MAX], n6;
	cout << "\nNhap so phan tu cua mang mot chieu: ";
	cin >> n6;
	NhapMang1(a6, n6);
	XuatMang1(a6, n6);
	cout << "\n - So luong so chan: " << DemSoChan(a6, n6);
	cout << "\n - So lon nhat: " << MaxMang1(a6, n6);
	cout << "\n - So luong so lon nhat: " << DemMaxMang1(a6, n6);
	cout << "\n - So nho nhat: " << MinMang1(a6, n6);
	cout << "\n - So luong so nho nhat: " << DemMinMang1(a6, n6);
	cout << "\n - So luong so nguyen to: " << DemSNTMang1(a6, n6);
	ViTriSNTMang1(a6, n6);
	cout << "\n - So luong so chinh phuong: " << DemSCPMang1(a6, n6);
	ViTriSCPMang1(a6, n6);
	cout << "\n - So luong so hoan thien: " << DemSHTMang1(a6, n6);
	ViTriSHTMang1(a6, n6);
}

void option11()
{
	cout << "\n11. Tinh tong duong cheo mang 2 chieu\n";
	int a[MAX][MAX], r, c, answer;
	cout << "\nNhap so dong: ";
	cin >> r;
	cout << "Nhap so cot: ";
	cin >> c;
	cout << "\n";
	if ((TongDuongCheo(a, r, c)) != 0)
	{
		cout << "Ban muon nhap mang hay tao ngau nhien?";
		cout << "\n1 = Nhap mang\n2 = Tao ngau nhien";
		cout << "\n\nLua chon: ";
		cin >> answer;
		while (answer != 1 || answer != 2)
		{
			if (answer == 1)
			{
				cout << "\n";
				NhapMang2(a, r, c);
				XuatMang2(a, r, c);
				break;
			}
			else if (answer == 2)
			{
				TaoMang2(a, r, c);
				XuatMang2(a, r, c);
				break;
			}
			else
			{
				cout << "Chon sai. Xin chon lai: ";
				cin >> answer;
			}
		}
		cout << "\nTong duong cheo chinh: " << TongDuongCheo(a, r, c);
	}
	else cout << "Mang hinh chu nhat. Chi tinh tong duong cheo mang hinh vuong.";
}

void option12()
{
	cout << "\n12. Tinh dinh thuc ma tran vuong\n";
	int n7;
	float A[MAX][MAX], L[MAX][MAX], U[MAX][MAX];
	cout << "\nNhap cap ma tran: ";
	cin >> n7;
	cout << "\n";
	NhapMaTranVuong(A, n7);
	cout << "\nMa tran vuong vua nhap:";
	XuatMaTranVuong(A, n7);
	PhanRaLU(A, L, U, n7);
	cout << "\nDet(A) = " << DinhThucMaTranTamGiac(U, n7);
}

void Menu()
{
	cout << "=================MENU================\n";
	cout << "1.  Tim so lon nhat\n";
	cout << "2.  Tim so nho nhat\n";
	cout << "3.  Kiem tra so nguyen to\n";
	cout << "4.  Kiem tra so hoan thien\n";
	cout << "5.  Kiem tra so chinh phuong\n";
	cout << "6.  Tim uoc so chung lon nhat\n";
	cout << "7.  Tim boi so chung nho nhat\n";
	cout << "8.  Xuat cac so nguyen to dau tien\n";
	cout << "9.  In lich\n";
	cout << "10. Phan tich mang 1 chieu\n";
	cout << "11. Tinh tong duong cheo mang 2 chieu\n";
	cout << "12. Tinh dinh thuc ma tran vuong\n";
	cout << "\n0.  Thoat\n";
	cout << "=====================================\n";
}

int ChooseMenu()
{
	int menu;
	cout << "\nChon cong viec (0-12): ";
	cin >> menu;
	if (menu >= 0 && menu <= 12)
		return menu;
	else do
	{
		cout << "Nhap sai. Vui long nhap lai (0-12): ";
		cin >> menu;
	} while (menu<0 || menu>12);
	return menu;
}

void ProcessMenu()
{
	int chon = ChooseMenu();
	switch (chon)
	{
	case 0:
		exit(1);
	case 1:
		system("cls");
		option1();
		cout << "\n\n";
		system("pause");
		break;
	case 2:
		system("cls");
		option2();
		cout << "\n\n";
		system("pause");
		break;
	case 3:
		system("cls");
		option3();
		cout << "\n\n";
		system("pause");
		break;
	case 4:
		system("cls");
		option4();
		cout << "\n\n";
		system("pause");
		break;
	case 5:
		system("cls");
		option5();
		cout << "\n\n";
		system("pause");
		break;
	case 6:
		system("cls");
		option6();
		cout << "\n\n";
		system("pause");
		break;
	case 7:
		system("cls");
		option7();
		cout << "\n\n";
		system("pause");
		break;
	case 8:
		system("cls");
		option8();
		cout << "\n\n";
		system("pause");
		break;
	case 9:
		system("cls");
		option9();
		cout << "\n\n";
		system("pause");
		break;
	case 10:
		system("cls");
		option10();
		cout << "\n\n";
		system("pause");
		break;
	case 11:
		system("cls");
		option11();
		cout << "\n\n";
		system("pause");
		break;
	case 12:
		system("cls");
		option12();
		cout << "\n\n";
		system("pause");
		break;
	}
}

void main()
{
	while (1)
	{
		system("cls");
		cout << "\nPOWERED BY: Khiem Tran";
		cout << "\nEmail: gia_khiem@live.com\n\n";
		Menu();
		ProcessMenu();
	}
}