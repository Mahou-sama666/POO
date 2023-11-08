#include <iostream>
#include <cstring>
class Masinutza {
private:
	std::string marca;
	char* model;
	std::string NrInmatriculare;
	static int Total_masini;
public:
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

	Masinutza() {
		Total_masini++;
	}
};

int Masinutza::Total_masini = 0;

int main() {
	Masinutza m, n, p;
	std::cout<<Masinutza::getTotalMasini();
}