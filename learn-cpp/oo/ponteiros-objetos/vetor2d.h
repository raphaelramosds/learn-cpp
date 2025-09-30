#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
	
	private:
		float x, y;
		
	public: 
	
		// Construtores
		
		Vetor2d();  // construtor padrão
		Vetor2d(float x_, float y_); // construtor com argumentos
		
		// Métodos ordinários
		
		void print();
		
		float getX();
		float setX(float x);
		
		float getY();
		float setY(float y);
};

#endif
