class Processor{
	private:
	//atribut
	string nama;
	int harga;
	
	public:
	//constructor
	Processor(){
	};
	
	Processor(string nama, int harga){
		this->nama = nama;
		this->harga = harga;
	}
	
	//proses getter dan setter
	void setNama(string nama){
		this->nama = nama;
	}
	
	string getNama()
	{
		return this->nama;
	}
	
	void setHarga(int harga){
		this->harga = harga;
	}
	
	int getHarga()
	{
		return this->harga;
	}
	
	//destructor
	~Processor(){};
};
	
	
	