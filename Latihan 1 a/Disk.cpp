class Disk{
	private:
	//atribut
	string tipe;
	int kapasitas;
	int harga;
	
	public:
	//constructor
	Disk(){
	};
	
	Disk(string tipe, int kapasitas, int harga){
		this->tipe = tipe;
		this->kapasitas = kapasitas;
		this->harga = harga;
	}
	
	//proses getter dan setter
	void setTipe(string tipe){
		this->tipe = tipe;
	}
	
	string getTipe()
	{
		return this->tipe;
	}
	
	void setKapasitas(int kapasitas){
		this->kapasitas = kapasitas;
	}
	
	int getKapasitas()
	{
		return this->kapasitas;
	}
	
	void setHarga(int harga){
		this->harga = harga;
	}
	
	int getHarga()
	{
		return this->harga;
	}
	
	//destructor
	~Disk(){};
};
	
	
	