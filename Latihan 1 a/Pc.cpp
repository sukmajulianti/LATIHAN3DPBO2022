#include "Processor.cpp"
#include "Disk.cpp"
#include "Ram.cpp"

class Pc{
	private:
	//atribut
	Processor processor;
	Disk disk;
	Ram ram;
	int totalPrice;
	
	public:
	//constructor
	Pc(){};
	
	Pc(Processor processor, Disk disk, Ram ram){
		this->processor = processor;
		this->disk = disk;
		this->ram = ram;
		this->totalPrice = processor.getHarga() + ram.getHarga() + disk.getHarga();
	};
	
	//getter dan setter
	void setProcessor(Processor processor){
		this->processor = processor;
	};
	
	Processor getProcessor(){
		return this->processor;
	};
	
	void setDisk(Disk disk){
		this->disk = disk;
	};
	
	Disk getDisk(){
		return this->disk;
	};
	
	void setRam(Ram ram){
		this->ram = ram;
	};
	
	Ram getRam(){
		return this->ram;
	};
	
	void setTotalPrice(int processorPrice, int diskPrice, int ramPrice){
		this->totalPrice = processorPrice + diskPrice + ramPrice;
	};
	
	int getTotalPrice(){
		return this->totalPrice;
	};
	
	//destructor
	~Pc(){};
};