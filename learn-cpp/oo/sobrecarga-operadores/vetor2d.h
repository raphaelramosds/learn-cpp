#ifndef VETOR2D_H
#define VETOR2D_H

#include <iostream>

class Vetor2d {
	
	private:
		float x,y;
		
	public:
	
		// Protótipos dos construtores
			
		Vetor2d(float x = 0, float y = 0);
		
		// Protótipos das funções
	
		void setX(float x_);
		float getX();
		
		void setY(float y_);
		float getY();
		
		float norma();
		
		float angulo();
		
		Vetor2d unitario();
		
		// Produto Escalar
		
		float multiplica(Vetor2d v);
		
		// Operadores com sobrecarga
		
		Vetor2d operator + (Vetor2d v);
		Vetor2d operator * (float a);

		friend std::ostream& operator<<(std::ostream& os, Vetor2d &v);
};

// Funções não amigas

Vetor2d operator*(float a, Vetor2d v);

#endif