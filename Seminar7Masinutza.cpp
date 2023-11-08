#include <iostream>
#include <cstring>
class Masinutza {
private:
	std::string marca;
	char* model;
	std::string NrInmatriculare;
	static int Total_masini;
public:
	//Setteri
	void setMarca(std::string marca) {
		this->marca = marca;
	}
	void setModel(char* model) {
		if (this->model)
			delete[] model;
		this->model = new char[strlen(model) + 1];
		strcpy_s(this->model, strlen(model) + 1, model);
	}
	void setNrInmat(std::string nr) {
		NrInmatriculare = nr;
	}
	static int setTotM(int m) {
		Total_masini = m;
	}

	//Getteri
	std::string getMarca() {
		return marca;
	}

	char* getModel() {
		return model;
	}

	std::string getNrInm() {
		return NrInmatriculare;
	}
	
	static int getTotalMasini() {
		return Total_masini;
	}

	//Constructori
	Masinutza() {
		Total_masini++;
	}

	Masinutza(const Masinutza& m) {
		marca = m.marca;
		model = new char[strlen(m.model) + 1];
		strcpy_s(model, strlen(m.model) + 1, m.model);
		NrInmatriculare = m.NrInmatriculare;
		Total_masini++;
	}

	//Destructor
	~Masinutza() {
		delete[] model;
	}

	//Overload Op
	Masinutza& operator=(const Masinutza& m){
		if(model) delete[] model;
		marca = m.marca;
		model = new char[strlen(m.model) + 1];
		strcpy_s(model, strlen(m.model) + 1, m.model);
		NrInmatriculare = m.NrInmatriculare;
	}

	friend std::ostream& operator<<(std::ostream& os, const Masinutza& m){
	os<<m.marca<<' '<<m.model<<' '<<m.NrInmatriculare<<'\n'<<m.Total_masini;
    return os;
	}

	friend std::istream& operator>>(std::istream& is, Masinutza& m){
    is>>m.marca>>m.model>>m.NrInmatriculare;
	Masinutza::Total_masini++;
    return is;
	}


};

int Masinutza::Total_masini = 0;

int main() {
	Masinutza m, n, p;
	std::cout<<Masinutza::getTotalMasini();
}