#include <iostream>
#include <string>
using namespace std;

class kadal{
	public:
		void bersuara(string bunyi);
		string jenisMakanan;
		string warnaKulit;
};

int main(){
	kadal Biawak,Komodo,Tokek;
	
	Biawak.warnaKulit = "HITAM KUNING ";
	Komodo.warnaKulit  = "HITAM ";
	Tokek.warnaKulit = "PUTIH BINTIK MERAH ";
	
	Biawak.jenisMakanan = "Ayam, Kelinci.";
	Komodo.jenisMakanan = "Rusa, Babi, Kerbau.";
	Tokek.jenisMakanan = "Nyamuk, Jangrik.";
	
	cout <<"Komodo berwarna " <<(Komodo.warnaKulit);
	cout <<"makanannya " <<(Komodo.jenisMakanan);
	Komodo.bersuara("sleip");
	
	cout <<"Tokek berwarna " <<(Tokek.warnaKulit);
	cout <<"makanannya " <<(Tokek.jenisMakanan);
	Tokek.bersuara("tretektektek tokke");
}
void kadal::bersuara(string bunyi){
	cout << " Bunyinya "<<bunyi<< " !!"<<endl;
}
