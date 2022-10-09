#include <iostream>
using namespace std;

//objek rekening
struct Rekening
{
	//state (ciri-ciri)
	int NoRek;
	int PIN;
	string Pemilik;
	int Saldo;
		
	//behavior (perilaku)
	void Deposit()
	{
		cout << "Ini adalah prosedur deposit saldo.";
	}
	
	void Transfer()
	{
		cout << "Ini adalah prosedur transfer saldo.";
	}
	
	void Tarik()
	{	
		cout << "Ini adalah prosedur penarikan saldo.";
	}
};

//objek nasabah
struct Nasabah
{
	//state (ciri-ciri)
	string Nama;
	int NIK;
	string TempatLahir;
	int TanggalLahir;
	int BulanLahir;
	int TahunLahir;
	char JenisKelamin;
	string NamaIbu;
		
	//behavior (perilaku)
	void BukaRekening()
	{
		cout << "Ini adalah prosder pembukaan rekening baru.";	
	}
		
	void TutupRekening()
	{
		cout << "Ini adalah prosedur penutupan rekening.";
	}
};

//program utama
int main()
{
	Rekening rekening;
	Nasabah nasabah;
	int pilihan, input;
	
	cout << "Selamat datang di Bank Toyib" << endl;
	cout << "----------------------------" << endl;
	cout << "1. Teller" << endl;
	cout << "2. Customer Service" << endl << endl;
	cout << "Silakan pilih (1/2): ";
	cin >> pilihan;
	cout << endl;
	cout << "----------------------------" << endl;
	
	//jika pilihan = 1, maka akan berinteraksi dengan objek ATM
	if (pilihan == 1)
	{
		cout << "1. Deposit saldo" << endl;
		cout << "2. Transfer saldo" << endl;
		cout << "3. Tarik saldo" << endl << endl;
		cout << "Input: ";
		cin >> input;
		
		switch(input)
		{
			//jika input = 1
			case 1:
				rekening.Deposit();  //memanggil prosedur deposit saldo
				break;
			
			//jika input = 2	
			case 2:
				rekening.Transfer(); //memanggil prosedur transfer saldo
				break;
				
			//jika input = 3
			case 3:
				rekening.Tarik();    //memanggil prosedur tarik saldo
				break;
				
			//jika input selain 1, 2, atau 3
			default:
				cout << "Input tidak valid.";
		}
	}
	
	//jika pilihan = 2, maka akan berinteraksi dengan objek Rekening
	else if (pilihan == 2)
	{
		cout << "1. Buka rekening baru" << endl;
		cout << "2. Tutup rekening" << endl << endl;
		cout << "Input: ";
		cin >> input;
		
		switch(input)
		{
			//jika input = 1
			case 1: 
				nasabah.BukaRekening();  //memanggil prosedur buka rekening baru
				break;
				
			//jika input = 2
			case 2:
				nasabah.TutupRekening(); //memanggil prosedur tutup rekening
				break;
				
			//jika input selain 1 atau 2
			default:
				cout << "Input tidak valid.";
		}
	}
	
	return 0;
}
