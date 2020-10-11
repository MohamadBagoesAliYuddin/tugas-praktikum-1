/* Program menghitung billing warnet */
/* Menghitung lama pemakaian dalam jam menit detik */

/* Nama   = Mohamad Bagoes Ali Yuddin  */
/* Nim    = 20051397048                */
/* Prodi  = Manajemen Informatika      */
/* kelas  = 2020 B                     */

#include <iostream>
using namespace std;
int main()

{
	int jamj1,menitj1,detikj1,jamj2,menitj2,detikj2,selisihjam,selisihmenit,selisihdetik,jumlahdetik,jumlahpembayaran;
	const int harga = 5000 ;
	string pagar = "==================================================================";
	
	cout << "Program Penghitungan Biaya Pemakaian Anda" << endl;
	cout << pagar << endl;
	
	
	cout <<"-------------------";
	cout <<"Bagoes Net";
	cout <<"-------------------"<<endl;
	
	cout << pagar << endl;
	cout <<"AWAL PENGGUNAAN  " <<endl << endl;
	cout <<"Masukkan Jam   Mulai    = "; cin >> jamj1;
	cout <<"Masukkan Menit Mulai    = "; cin >> menitj1;
	cout <<"Masukkan Detik Mulai    = "; cin >> detikj1;
	cout << pagar << endl;
	cout <<endl;
	
	cout << pagar << endl;
	cout <<"SELESAI PENGGUNAAN  " <<endl << endl;
	cout <<"Masukkan Jam   Selesai  = "; cin >> jamj2;
	cout <<"Masukkan Menit Selesai  = "; cin >> menitj2;
	cout <<"Masukkan Detik Selesai  = "; cin >> detikj2;
	cout << pagar << endl;
	cout <<endl;
	
	selisihjam = jamj2 - jamj1;
	selisihmenit = menitj2 - menitj1;
	selisihdetik = detikj2 - detikj1;
	
	jumlahdetik = (selisihjam * 3600) + (selisihmenit * 60) + selisihdetik;
	jumlahpembayaran = (jumlahdetik * harga / 3600);
	
	cout << pagar << endl;
	cout << endl;
	cout << "HASIL AKHIR " << endl << endl;
	cout << "Lama  Penggunaan        = " << selisihjam << " jam, " << selisihmenit <<" menit, " << selisihdetik <<" detik." << endl;
	cout << "Total Pembayaran        = Rp." << jumlahpembayaran << ",-" << endl;
	cout << pagar << endl << endl << endl; 
	cout << "Terima kasih telah berkunjung ke Bagoes Net" << endl;
	
	
	return 0;
}
