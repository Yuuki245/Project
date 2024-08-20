#include<bits/stdc++.h>
using namespace std;

int main()
{	int key, key1;
	srand(time(NULL));
	key1 = rand() % (3 - 1 + 1) + 1;
	while(1)
	{
		cout << "\t\t=============== Keo Bua Bao ===============\n";
	cout << "[+] 1 = Keo\n[+] 2 = Bua\n[+] 3 = Bao\n";
	cout << "Nhap lua chon cua ban: "; cin >> key;
	if(key == 1) //Nguoi choi chon Keo
	{
		if(key1 == 2)
		cout << "Ban chon Keo\nMay chon Bua\nBan da thua !\n";
		else if(key1 == 3)
		cout << "Ban chon Keo\nMay chon Bao\nBan da thang !\n";
		else
		cout << "Ban chon Keo\nMay chon Keo\nBan da hoa !\n";
	}
	else if(key == 2)
	{
		if(key1 == 1)
		cout << "Ban chon Bua\nMay chon Keo\nBan da thang !\n";
		else if(key1 == 2)
		cout << "Ban chon Bua\nMay chon Bua\nBan da hoa !\n";
		else
		cout << "Ban chon Bua\nMay chon Bao\nBan da thua !\n";
	}
	else
	{
		if(key1 == 1)
		cout << "Ban chon Bao\nMay chon Keo\nBan da thua !\n";
		else if(key1 == 2)
		cout << "Ban chon Bao\nMay chon Bua\nBan da thang\n";
		else
		cout << "Ban chon Bao\nMay chon Bao\nBan da hoa\n";	
	}
	int lc; cout << "\t\t[0]Tiep tuc or [1]Thoat....\n";
	cin >> lc;
	if(lc == 1) break;
	else
	system("cls");
	}
}