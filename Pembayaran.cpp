#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int kamar, harga, lama, bayar;
	string nkamar;

	cout<<"SISTEM INFORMASI PENYEWAAN KAMAR HOTEL ADITIYA"<<endl;
	cout<<endl;
	cout<<"No   Jenis Kamar          Harga "<<endl;
	cout<<"1.   Romoela              Rp:500.000"<<endl;
	cout<<"2.   Safira               Rp:1.000.000"<<endl;
	cout<<"3.   Artacitra            Rp:1.500.000"<<endl;
	cout<<"********************************"<<endl;
	cout<<endl;
	
	cout<<"Pilh Jenis kamar : ";
	cin>>kamar;
	
	if (kamar==1)
	{
		harga=500000;
		nkamar="Romoela";
	}
	else if (kamar==2)
	{
		harga=1000000;
		nkamar="Safira";
	}
	else if (kamar==3)
	{
		harga=1500000;
		nkamar="Artacitra";
	}
	
	cout<<"Kamar yang anda pilih adalah "<<nkamar<<" dengan harga Rp:"<<harga<<"/Hari"<<endl;
	cout<<"Berapa lama anda ingin menyewa kamar tersebut : ";
	cin>>lama;
	
	bayar=lama*harga;
	
	cout<<endl;
	cout<<"Jenis kamar pilihan anda : "<<nkamar<<endl;
	cout<<"Lama penyewaan anda "<<lama<<" hari"<<endl;
	cout<<"Total harga penyewaan yang harus anda bayar adalah  Rp; "<<bayar<<endl;

getch();
}
