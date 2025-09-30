#ifndef VETOR2D_H
#define VETOR2D_H

class Vetor2d {
	
	private:
		float x,y;
		
	public:
	
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