#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
using namespace std;
		//D
		void tampilkan(){
			cout<<"selamat datang di supermrket alpro\n";
		}
		void login(){
		string usr;
		int pw;
		void admin();
		int role;
		cout<<endl;
			cout<<"sebelum masuk dilahkan login terlebih dahulu\n";
			cout<<"masukkan username: ";
			cin>>usr;
			cout<<"Masukkan password: ";
			cin>>pw;
			
			if (usr=="admin"&&pw==182){
				role=1;
			}
			else{
				cout<<"Data tidak ditemukan\n";
				return login();
			}
			if (role==1){
				admin();
			}
		}
		void admin(){
			void kasir();
			void rincian();
			void inputbarang();
			
			int pilihan;
			cout<<endl;
			cout<<"login berhasil";
			cout<<"Silahkan piih\n";
			cout<<"1. input barang\n2. kasir\n3. rincian supermaarket\n Pilihan anda: ";
			cin>>pilihan;
			if (pilihan == 1){
				 inputbarang();
			}else if (pilihan == 2){
				 kasir();
			}else if (pilihan == 3){
				 rincian();
			}
		}
		void kasir(){
			/*ifstream(text.txt){
				cout<<"data berhasil disimpan";
			}*/
			int jumlah ;
			string barang1, barang2, barang3;
			int harga1, harga2, harga3;
			cout<<"Barang 1: ";
			cin>>barang1;
						 cout<<"harga barang 1: ";
						 cin>>harga1;
			cout<<"Barang 2: ";
			cin>>barang2;
						 cout<<"harga barang 2: ";
						 cin>>harga2;
			cout<<"Barang 3: ";
			cin>>barang3;
						 cout<<"harga barang 3: ";
						 cin>>harga1;
		 
			jumlah = harga1+harga2+harga3;
			
	        if (jumlah>100000){
				jumlah = 100000*(15/100);
				cout<<jumlah;
			}
			else{
				jumlah;
			}
			
}

void rincian(){
	cout<<"File tersimpan kedalam txt";
	cout<<"Pelanggan ada 30 orang hari ini\n";
	cout<<"Pendapatan = 6.000.000\n";
	cout<<endl;
}

void inputbarang(){
	string barang1, barang2, barang3;
	int harga1, harga2, harga3;
	cout<<endl;
	cout<<"Barang 1: ";
	cin>>barang1;
	cout<<"Barang 2: ";
	cin>>barang2;
	cout<<"Barang 3: ";
	cin>>barang3;
	cout<<"File tersimpan kedalam txt\n";
	cout<<endl;
}


int main(){
	tampilkan();
	login();
	admin();
	kasir();
	rincian();
	return 0;
}
