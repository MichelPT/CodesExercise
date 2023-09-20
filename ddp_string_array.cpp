//PROGRAM DATA BUKU PERPUSTAKAAN
#include <iostream> 
#include <iomanip>
using namespace std;

int main ()
{
    int loop = 0;
	string penulis, judul;
	char tahunTerbit[5];
	int stok, harga, jumlahHarga;
	
	//JUDUL PROGRAM
	cout<<left<<setw(10)<<" "<<"==========================================================================================\n";
	cout<<left<<setw(10)<<" "<<"\t\t\t\t\tProgram Toko Buku"<<endl;
	cout<<left<<setw(10)<<" "<<"==========================================================================================\n";
	
	//INPUT DATA
	cout<<endl;
	cout<<left<<setw(10)<<" "<<"INPUT DATA\n";

    while (loop<3)
    {
        //--------------------------MODIFIKASI KODE DI BAWAH!---------------------------------------
        cout<<left<<setw(10)<<" "<<"------------------------------------------------------------------------------------------"<<endl;
        cout<<left<<setw(10)<<" "<<"Nama Penulis\t: ";
        getline(cin, penulis);
        cout<<left<<setw(10)<<" "<<"Judul Buku\t: ";
        getline(cin, judul);
        cout<<left<<setw(10)<<" "<<"Tahun Terbit\t: ";
        cin>>tahunTerbit;
        cout<<left<<setw(10)<<" "<<"Jumlah Stok\t: ";
        cin>>stok;
        cout<<left<<setw(10)<<" "<<"Harga\t\t: ";
        cin>>harga;
        cout<<left<<setw(10)<<" "<<"------------------------------------------------------------------------------------------"<<endl; 
        //--------------------------MODIFIKASI KODE DI ATAS!---------------------------------------
        cin.ignore();
        loop++;
    }
    

	//HITUNG JUMLAH HARGA
	jumlahHarga=stok*harga;
	
	//OUTPUT DATA
	cout<<endl;
	cout<<left<<setw(10)<<" "<<"OUTPUT DATA\n";
	cout<<left<<setw(10)<<" "<<"------------------------------------------------------------------------------------------"<<endl;
	cout <<left<<setw(10)<<" "
	<<left<<setw(15)<< "Judul"<<" | "
	<<left<<setw(20)<<" Penulis "<<" | "
	<<left<<setw(14)<<" Tahun Terbit "<<" | "
	<<left<<setw(6)<<" Stok "<<" | "
	<<left<<setw(7)<<" Harga "<<" | "
	<<" Jumlah Harga "
	<<endl;
	cout<<left<<setw(10)<<" "<<"------------------------------------------------------------------------------------------"<<endl;
    //--------------------------MODIFIKASI KODE DI BAWAH!---------------------------------------
	cout <<left<<setw(10)<<" "
	<<left<<setw(15)<< judul <<" | "
	<<left<<setw(20)<<penulis<<" |  "
	<<left<<setw(13)<<tahunTerbit<<" |  "
	<<left<<setw(5)<<stok<<" |  "
	<<left<<setw(6)<<harga<<" |  "
	<<jumlahHarga
	<<endl;
	return 0;
    //--------------------------MODIFIKASI KODE DI ATAS!-----------------------------------------
}
