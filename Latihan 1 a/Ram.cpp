class Ram{
	private:
	//atribut
	int kapasitas;
	int harga;
	
	public:
	//constructor
	Ram(){
	};
	
	Ram(int kapasitas, int harga){
		this->kapasitas = kapasitas;
		this->harga = harga;
	}
	
	//proses getter dan setter
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
	~Ram(){};
};
	
	
	