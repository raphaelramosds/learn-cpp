#include <iostream>
#include <vector>

void operator<<(std::ostream& it, std::vector<int> v) {
	it << "[ ";
	for (int i = 0; i < v.size(); i++)
		it << v[i] << " ";
	it << "]";
}


int main() {
	
  std::vector<int> v;
	
	// it é um iterador para um vetor de inteiros
	
	std::vector<int>::iterator it; 

	// Cria vetor
	
  	v.push_back(4); // coloca 4 na última posição de v
	v.push_back(3); 
	v.push_back(2); 
	v.push_back(9);

	// Operações

	v.pop_back(); 				// deleta ultimo elemento
	v.erase(v.begin() + 2); 	// delete 3° elemento
	v.insert(v.begin() + 2, 2); // coloque 4 na 3° posição

	// percorrê-lo
	
	std::cout << v;
	std::cout << std::endl;
	
	// percorrê-lo com iterador
	
	it = v.begin(); // aponte p/ o 1° elemento de v

	// v.end() retorna um iterator para o pós-último elemento
	
	for (it = v.begin(); it != v.end(); it++) {
		std::cout << *it << " "; // * acessa valor apontado por it
	}
	
}