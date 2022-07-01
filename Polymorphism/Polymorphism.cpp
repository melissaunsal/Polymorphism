#include <iostream>
using namespace std;
class Oyuncu {
public:
	int level;
	string isim;
	Oyuncu(string isim) : isim(isim), level(1) {}

	virtual void sutcek() {
		cout << isim << " oyuncu" << level * 10 << " hizinda bir sut cekiyor" << endl;

	}
	void antreman() {
		cout << "antreman yapiyor.." << endl;
		level++;

	}

};
class Tsubasa :public Oyuncu
{
private :
	void kartalsutu() {
		cout << isim << " oyuncu" << level * 20 << " hizinda bir sut cekiyor" << endl;
	}
public:
	Tsubasa() :Oyuncu("Tsubasa") {}
	
		void sutcek() 
		{
			if (rand() % 2)
				kartalsutu();
			else
				Oyuncu::sutcek();
		}

	
	

};
int main()
{
	//polymorphism de aynı diziye yerleştirdik 
	Oyuncu* dizi[11];
	dizi[0] = new	Oyuncu("Genzo");
	dizi[1] = new	Oyuncu("enzo");
	dizi[2] = new	Oyuncu("Genz");
	dizi[3] = new	Oyuncu("Geno");
	dizi[4] = new	Oyuncu("Gen");
	dizi[5] = new	Oyuncu("Ge");
	dizi[6] = new	Oyuncu("Genzoe");
	dizi[7] = new	Oyuncu("Genzoy");
	dizi[8] = new	Oyuncu("Genzot");
	dizi[9] = new	Tsubasa();
	dizi[10] = new	Oyuncu("Genzoo");

	for (int i = 0; i < 10; i++) {
		int x = rand() % 11;
		dizi[x]->sutcek();
	}

	return 0;
}
