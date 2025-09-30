#include <iostream>                                                                                                                                                                                                                                                                                                                        

class Vetor2D {
	
	private:
		float x,y;
		
	public:
		// Usa "_" só para x ter o valor do parâmetro recebido em setX
	
		void setX (float x_) x = x_ > 0 ? x_ : x; // valor atual se negativo		
		float getX() return x;
};

int main (void) {
	Vetor2D v;
	v.setX(3);
	v.setX(-40);
	std::cout << v.getX();
}
