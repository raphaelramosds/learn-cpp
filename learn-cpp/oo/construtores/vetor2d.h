#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
	
	private:
		float x,y;
		
	public:
	
		// Protótipos dos construtores
			
		Vetor2d();
		Vetor2d(float x, float y);
		~Vetor2d();

		Vetor2d(Vetor2d &v); // copy constructor
		
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
		
		// Produto por escalar
		
		Vetor2d multiplica(float a);
};

#endif