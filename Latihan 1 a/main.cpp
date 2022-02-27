#include <iostream>
#include <string>

using namespace std;
#include "Pc.cpp"

int main(){
	Pc pc;
	Processor pr;
	//mengeset atribut class processor
	pr.setNama("Intel Pentium");
	pr.setHarga(1649000);
	//mencetak atribut class processor
	cout << ("====================================") << endl;
	cout << ("1. Kelas Processor :") << endl;
	cout << ("====================================") << endl;
	cout << "Nama Processor  -> " << pr.getNama() << endl;
	cout << "Harga Processor -> " << pr.getHarga() << endl;
	cout << ("====================================") << endl;
	
	//mengeset atribut class disk
	Disk d;
	d.setTipe("HDD");
	d.setKapasitas(256);
	d.setHarga(200000);
	//mencetak atribut class disk
	cout << ("2. Kelas Disk :") << endl;
	cout << ("====================================") << endl;
	cout << "Tipe Disk -> " << d.getTipe() << endl;
	cout << "Kapasitas Disk -> " << d.getKapasitas() << endl;
	cout << "Harga Disk -> " << d.getHarga() << endl;
	cout << ("====================================") << endl;
	
	//mengeset atribut class ram
	Ram r;
	r.setKapasitas(4);
	r.setHarga(700000);
	//mencetak atribut class ram
	cout << ("3. Kelas Ram :") << endl;
	cout << ("====================================") << endl;
	cout << "Kapasitas Ram -> " << r.getKapasitas() << endl;
	cout << "Harga Ram -> " << r.getHarga() << endl;
	cout << ("====================================") << endl;
	
	//mengeset atribut class pc sekaligus mencetaknya
	pc.setProcessor(pr);
	cout << ("4. Kelas PC :") << endl;
	cout << ("====================================") << endl;
	cout << "Nama Processor -> " << pc.getProcessor().getNama() << endl;
	cout << "Harga Processor -> " << pc.getProcessor().getHarga() << endl;
	pc.setDisk(d);
	cout << "Tipe Disk -> " << pc.getDisk().getTipe() << endl;
	cout << "Kapasitas Disk -> " << pc.getDisk().getKapasitas() << endl;
	cout << "Harga Disk -> " << pc.getDisk().getHarga() << endl;
	pc.setRam(r);
	cout << "Kapasitas Ram -> " << pc.getRam().getKapasitas() << endl;
	cout << "Harga Ram -> " << pc.getRam().getHarga() << endl;
	pc.setTotalPrice(pr.getHarga(), d.getHarga(), r.getHarga());
	cout << "Total Harga -> " << pc.getTotalPrice() << endl;
	cout << ("====================================") << endl;
	
}