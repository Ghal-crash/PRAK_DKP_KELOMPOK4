#include<iostream>
using namespace std;

//PROGRAM RENTAL MOBIL - KELOMPOK 4
//Namira Nurfaliani
//Shafa Naura Amuktya Dewani
//Faisal Akbar
//Galih Aditya Fernanda

void header(){
	cout<<"===   P R O G R A M   R E N T A L   M O B I L   ===\n";
	cout<<"[1] H O N D A\n";
	cout<<"[2] T O Y O T A\n";
	cout<<"[3] S U Z U K I\n";
	cout<<"[4] K E L U A R\n";
	cout<<"===================================================\n";
}
void footer(){
	cout<<"\n===   T E R I M A   K A S I H   Y A   T E L A H   M E N G G U N A K A N   J A S A   K A M I   ===\n";
	cout<<"\t\t\t===   K E E P   S A F E T Y   R I D I N G   ===\n\n";
}

int diskon(){
}

class hargaTarif{
	public:
		void garis(){
			cout<<"----------------------------------"<<endl;
		}
		int tarifRental(int waktuRental){
		int lamaRental;
		cout<<"\n=== T A R I F   L A M A   R E N T A L   ===\n";
		cout<<"[1] PerJam\t\t Rp 15.000\n";
		cout<<"[2] PerHari\t\t Rp 300.000\n";
		while(lamaRental >= 0){
		cout<<"Masukkan Pilihan Rental : ";
		cin>>lamaRental;
		switch(lamaRental){
			case 1:
				do{
					cout<<"Lama Jam Rental (1-24): ";
					cin>>waktuRental;
					if(waktuRental >=1 && waktuRental <=24){
						return waktuRental * 15000;
					}else{
						cout<<"Silakan Masukkan Angka 1 - 24"<<endl;
					}
				}while(waktuRental>24);
			break;
			case 2:
				do{
					cout<<"Lama Hari Rental (1-31): ";
					cin>>waktuRental;
					if(waktuRental>=1 && waktuRental<=31){
						return waktuRental *300000;
					}else{
						cout<<"Silakan Masukkan Angka 1 - 31"<<endl;
					}
				}while(waktuRental>31);
			break;
			default:
				cout<<"Masukkan Sesuai Angka\n";
				}
			}
		}
		void mobilToyota(int pilihMobil){	
		cout<<"\n===   T O Y O T A   S E R I E S   ===\n";
		cout<<"[1] K I J A N G    I N N O V A\n";
		cout<<"[2] A V A N Z A\n";
		cout<<"[3] Y A R I S\n";
		cout<<"[4] A L P H A R D\n";
		cout<<"[5] F O R T U N E R\n";
		cout<<"[6] K E L U A R \n";
		cout<<"=====================================\n";
			do{
				cout<<"Silakan Pilih Nomor Mobil : ";
				cin>>pilihMobil;
				switch(pilihMobil){
					case 1:
						garis();
						cout<<"Anda Memilih Mobil Kijang Innova"<<endl;
						garis();
					break;
					case 2:
						garis();
						cout<<"Anda Memilih Mobil Avanza"<<endl;
						garis();
					break;
					case 3:
						garis();
						cout<<"Anda Memilih Mobil Yaris"<<endl;
						garis();
					break;
					case 4:
						garis();
						cout<<"Anda Memilih Mobil Alphard"<<endl;
						garis();
					break;
					case 5:
						garis();
						cout<<"Anda Memilih Mobil Fortuner"<<endl;
						garis();
					break;
					case 6:
						exit(6);
					break;	
					default:
						cout<<"Silakan Pilih Mobil Sesuai Angka\n"<<endl;
				}
			}while(pilihMobil>=7);
		}	
		void mobilSuzuki(int pilihMobil){
			cout<<"\n===   S U Z U K I   S E R I E S   ===\n";
			cout<<"[1] E R T I G A\n";
			cout<<"[2] A P V\n";
			cout<<"[3] A Y L A\n";
			cout<<"[4] I G N I S\n";
			cout<<"[5] K A R I M U N\n";
			cout<<"[6] K E L U A R \n"; 
			cout<<"=====================================\n";
			do{	
				cout<<"Silakan Pilih Nomor Mobil : ";
				cin>>pilihMobil;
				switch(pilihMobil){
					case 1:
						garis();
						cout<<"Anda Memilih Mobil Ertiga"<<endl;
						garis();
					break;
					case 2:
						garis();
						cout<<"Anda Memilih Mobil APV"<<endl;
						garis();
					break;
					case 3:
						garis();
						cout<<"Anda Memilih Mobil Ayla"<<endl;
						garis();
					break;
					case 4:
						garis();
						cout<<"Anda Memilih Mobil Ignis"<<endl;
						garis();
					break;
					case 5:
						garis();
						cout<<"Anda Memilih Mobil Karimun"<<endl;
						garis();
					break;
					case 6:
						exit(6);
					break;
					default:
						cout<<"\nSilakan Pilih Mobil Sesuai Angka\n";
				}
			}while(pilihMobil>=7);
		}
		void mobilHonda(int pilihMobil){
			cout<<"\n===   H O N D A   S E R I E S   ===\n";
			cout<<"[1] J A Z Z\n";
			cout<<"[2] B R I O\n";
			cout<<"[3] H I A C E\n";
			cout<<"[4] H R - V\n";
			cout<<"[5] M O B I L I O\n";
			cout<<"[6] K E L U A R \n";
			cout<<"===================================\n";
			do{	
				cout<<"Silakan Pilih Nomor Mobil : ";
				cin>>pilihMobil;
				switch(pilihMobil){
					case 1:
						garis();
						cout<<"Anda Memilih Mobil Jazz"<<endl;
						garis();
					break;
					case 2:
						garis();
						cout<<"Anda Memilih Mobil Brio"<<endl;
						garis();
					break;
					case 3:
						garis();
						cout<<"Anda Memilih Mobil HiAce"<<endl;
						garis();
					break;
					case 4:
						garis();
						cout<<"Anda Memilih Mobil HR-V"<<endl;
						garis();
					break;
					case 5:
						garis();
						cout<<"Anda Memilih Mobil Mobilio"<<endl;
						garis();
					break;
					case 6:
						exit(6);
					break;
					default:
						cout<<"Silakan Pilih Mobil Sesuai Angka\n\n";
				}
			}while(pilihMobil>=7);
		}		
};
	
int main(){
	int harga, pilihMobil;
	string namaMobil, ulang;
	hargaTarif MyObj;
	while(pilihMobil>=0){
		header();
			cout<<"Masukkan Pilihan Mobil : ";
			cin>>pilihMobil;
			switch(pilihMobil){
				case 1:
					MyObj.mobilHonda(pilihMobil);
					cout<<"\nTOTAL HARGA : Rp "<<MyObj.tarifRental(harga)<<endl<<endl;
					footer();
				break;
				case 2:
					MyObj.mobilToyota(pilihMobil);
					cout<<"\nTOTAL HARGA : Rp "<<MyObj.tarifRental(harga)<<endl<<endl;
				break;
				case 3:
					MyObj.mobilSuzuki(pilihMobil);	
					cout<<"\nTOTAL HARGA : Rp "<<MyObj.tarifRental(harga)<<endl<<endl;
				break;
				case 4:
					exit(4);
				break;
				default:
					cout<<"Silakan Pilih Sesuai Angka\n\n";
			}
		}
 	footer();
}
