// Tugas TETI LAB Skill - Pemrograman

/* 
   Nama				: ALI MOCHTAR AHDINA SABILARROSYAD
   NIM				: 22/497386/TK/54509
   Program studi	: Teknik Biomedis
*/

// Program untuk menghitung jarak, kecepatan, dan waktu yang ditempuh

#include<iostream>
using namespace std;

double length, time, velocity2;  //deklarasi variabel untuk input jarak, waktu, kecepatan

class MyVelocity{  //kelas untuk menyimpan data fungsi untuk mencari kecepatan
	public :
		int velocity(){
			return (length/time);
		}
		void set_values(int s,int t){
			length = s;
			time = t;
		}
};

class MyLength{ //kelas untuk menyimpan data fungsi untuk mencari jarak
	public:
		double meters=1000;
		float velocity2;
		float length(){
			return (velocity2*time);
		}
		void set_values(int v, int t){
			velocity2=v;
			time=t;
		}
		double Met(){
			return ((velocity2*time)*meters);
		}
};

class MyTime{ //kelas untuk menyimpan data fungsi untuk mencari waktu
	public:
		double minuteS=60, seconds=3600;
		double time1(){
			return (length/velocity2);
		}
		void set_values(int v, int s){
			velocity2=v;
			length=s;
		}
		double minute(){
			return ((length/velocity2)*minuteS);
		}
		double second(){
			return ((length/velocity2)*seconds);
		}
};

int main(){ // fungsi untuk menginputkan data dan menampilkan outputnya

	int c;
	cout<<"-----[ "<<"Nama		: ALI MOCHTAR AHDINA SABILARROSYAD"<<" ]-----"<<endl;
	cout<<"-----[ "<<"NIM		: 22/497386/TK/54509              "<<" ]-----"<<endl;
	cout<<"-----[ "<<"Prodi		: Teknik Biomedis                 "<<" ]-----"<<endl;
	cout<<"-----[ "<<"Kelompok		: Nikola Tesla                    "<<" ]-----"<<endl;
	cout<<endl<<endl;
	cout<<"------ "<<"Tugas Pemrograman TLS"<<" ------"<<endl;
	cout<<endl<<endl;
	cout<<"--{ "<<"Mencari kecepatan, jarak, dan waktu"<<" }--"<<endl;
	cout<<endl;
	cout<<"Masukkan input 1 untuk mencari kecepatan."<<endl;
	cout<<"Masukkan input 2 untuk mencari jarak yang ditempuh."<<endl;
	cout<<"Masukkan input 3 untuk mencari waktu yang dibutuhkan."<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"|| > Masukkan input untuk menjalankan program : ";
	cin>>c;
	cout<<endl;
	
	
	if (c==1){
		cout<<"------ "<<"     INPUT DATA      "<<" ------"<<endl;
		cout<<endl;
		MyVelocity kecepatan;
		cout<<"Masukkan jarak (dalam KM): ";
		cin>>length;
		cout<<endl;
		cout<<"Masukkan waktu (dalam Jam): ";
		cin>>time;
		cout<<endl;
		kecepatan.set_values(length, time);
		cout<<"------ "<<"        HASIL        "<<" ------"<<endl;
		cout<<endl;
		cout<<"Kecepatannya adalah : "<<kecepatan.velocity()<<" KM/Jam."<<endl;
		
		return 0;
	}
	else {
		if(c==2){
			cout<<"------ "<<"     INPUT DATA      "<<" ------"<<endl;
			cout<<endl;
			MyLength jarak;
			cout<<"Masukkan kecepatan (KM/H) : ";
			cin>>velocity2;
			cout<<endl;
			cout<<"Masukkan waktu (dalam Jam): ";
			cin>>time;
			cout<<endl;
			jarak.set_values(velocity2,time);
			cout<<"------ "<<"        HASIL        "<<" ------"<<endl;
			cout<<endl;
			cout<<"Jaraknya adalah : "<<jarak.length()<<" Kilometer."<<endl;
			cout<<endl;
			cout<<"Jarak dalam Meter : "<<jarak.Met()<<" Meter."<<endl;
			
			return 0;
		}
		else{
			if(c==3){
				cout<<"------ "<<"     INPUT DATA      "<<" ------"<<endl;
				cout<<endl;
				MyTime waktu1;
				cout<<"Masukkan kecepatan (KM/H) : ";
				cin>>velocity2;
				cout<<endl;
				cout<<"Masukkan jarak (dalam KM) : ";
				cin>>length;
				cout<<endl;
				cout<<endl;
				waktu1.set_values(velocity2,length);
				cout<<"------ "<<"        HASIL        "<<" ------"<<endl;
				cout<<endl;
				cout<<"Waktunya adalah : "<<waktu1.time1()<<" Jam."<<endl;
				cout<<endl;
				cout<<"Waktu dalam Menit adalah "<<waktu1.minute()<<" Menit."<<endl;
				cout<<endl;
				cout<<"Waktu dalam Detik adalah "<<waktu1.second()<<" Detik."<<endl;
				
				return 0;
			}
			else{
				cout<<"Input data "<<c<<" tidak ditemukan !! Tekan tombol manapun untuk mengakhiri program !!"<<endl;
			
				return 0;
			}	
		}
	}
}
