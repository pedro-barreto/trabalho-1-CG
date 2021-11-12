#include <GL/glut.h>
#include <iostream>
using namespace std;

float w = 600;
float h = 600;

float largura = 50 , altura = 50;

float vermelhoPosX = 50 , vermelhoPosY = 50;
float verdePosX = 50 , verdePosY = 250;
float azulPosX = 50, azulPosY = 450;
float cianoPosX = 250, cianoPosY = 50;
float amarelaPosX = 250, amarelaPosY = 250 ;
float roxoPosX = 450, roxoPosY = 50;
float laranjaPosX = 450, laranjaPosY = 250;

float r, g, b;

void quadrado(float posX, float posY){

	glColor3f(r,g,b);

		glBegin(GL_TRIANGLE_STRIP);

			glVertex2f(posX           , posY          );
			glVertex2f(posX           , posY + altura );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );		

		glEnd();

	glColor3f(0,0,0);

		glBegin(GL_LINE_LOOP);

			glVertex2f(posX           , posY          );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );
			glVertex2f(posX           , posY + altura );

		glEnd();

}


void pecaVermelha(){

	r = 1; g = 0; b = 0;

	quadrado(vermelhoPosX , vermelhoPosY);
	quadrado(vermelhoPosX + largura , vermelhoPosY);
	quadrado(vermelhoPosX , vermelhoPosY - altura );
	quadrado(vermelhoPosX + largura , vermelhoPosY - altura );

}

void pecaVerde(){

	r = 0; g = 1; b = 0;

	quadrado(verdePosX , verdePosY);
	quadrado(verdePosX , verdePosY - 1 * altura );
	quadrado(verdePosX , verdePosY - 2 * altura );
	quadrado(verdePosX + largura , verdePosY - 2 * altura );

}

void pecaAzul(){

	r = 0; g = 0; b = 1;

	quadrado(azulPosX, azulPosY);
	quadrado(azulPosX, azulPosY - 1 * altura );
	quadrado(azulPosX, azulPosY - 2 * altura );
	quadrado(azulPosX - largura , azulPosY - 2 * altura );

}


void pecaCiana(){

	r = 0; g = 1; b = 1;

	quadrado(cianoPosX, cianoPosY );
	quadrado(cianoPosX , cianoPosY + altura     );
	quadrado(cianoPosX , cianoPosY - altura     );
	quadrado(cianoPosX , cianoPosY - 2 * altura );

}

void pecaAmarela(){

	r = 1; g = 1; b = 0;

	quadrado(amarelaPosX, amarelaPosY);
	quadrado(amarelaPosX - largura     , amarelaPosY);
	quadrado(amarelaPosX + largura     , amarelaPosY);
	quadrado(amarelaPosX               , amarelaPosY - altura );

}

void pecaRoxa(){

	r = 0.5; g = 0; b = 1;

	quadrado(roxoPosX , roxoPosY);
	quadrado(roxoPosX + largura     , roxoPosY          );
	quadrado(roxoPosX               , roxoPosY - altura );
	quadrado(roxoPosX - largura     , roxoPosY - altura );

}

void pecaLaranja(){

	r = 1; g = 0.5; b = 0;

	quadrado(laranjaPosX , laranjaPosY );
	quadrado(laranjaPosX - largura     , laranjaPosY);
	quadrado(laranjaPosX              , laranjaPosY - altura );
	quadrado(laranjaPosX + largura     , laranjaPosY - altura );

}

void inicializar() {

	glClearColor(0.2,0.5,1,1);
    glLineWidth(3.0);

}

void mouseClique(int button, int state, int x, int y){
	
	if(button == GLUT_LEFT && state == GLUT_DOWN){ 
        
		float vermelhoPosYR = w - vermelhoPosY - altura;
		float verdePosYR = w - verdePosY - altura;
		float azulPosYR = w - azulPosY - altura;
		float cianoPosYR = w - cianoPosY - altura;
		float amarelaPosYR = w - amarelaPosY - altura;
		float roxoPosYR = w - roxoPosY - altura;
		float laranjaPosYR = w - laranjaPosY - altura;


		if(x >= vermelhoPosX && x <= vermelhoPosX + 2 * largura && y >= vermelhoPosYR && y <= vermelhoPosYR + 2 * altura){

			cout << "clicou na vermelha" << endl;

		}else if(x >= verdePosX && x <= verdePosX + largura && y >= verdePosYR && y <= verdePosYR + 3 * altura ||
			x >= verdePosX && x <= verdePosX + 2 * largura && y >= verdePosYR + 2 * altura && y <= verdePosYR + 3* altura){

			cout << "clicou na verde" << endl;

		}else if(x >= azulPosX && x <= azulPosX + largura && y >= azulPosYR && y <= azulPosYR + 3 * altura ||
			x >= azulPosX - largura && x <= azulPosX + largura && y >= azulPosYR + 2 * altura && y <= azulPosYR + 3* altura){

			cout << "clicou na azul" << endl;

		}else if(x >= cianoPosX && x <= cianoPosX + largura && y >= cianoPosYR - altura && y <= cianoPosYR + 3 * altura){

			cout << "clicou na ciana" << endl;

		}else if(x >= amarelaPosX - largura && x <= amarelaPosX + 2 * largura && y >= amarelaPosYR && y <= amarelaPosYR + altura ||
			x >= amarelaPosX && x <= amarelaPosX + largura && y >= amarelaPosYR + altura && y <= amarelaPosYR + 2 * altura){

			cout << "clicou na amarela" << endl;

		}else if(x >= roxoPosX && x <= roxoPosX + 2 * largura && y >= roxoPosYR && y <= roxoPosYR + altura||
			x >= roxoPosX - largura && x <= roxoPosX + largura && y >= roxoPosYR + altura && y <= roxoPosYR + 2 * altura){

			cout << "clicou na roxa" << endl;

		}else if(x >= laranjaPosX - largura && x <= laranjaPosX + largura && y >= laranjaPosYR && y <= laranjaPosYR + altura||
			x >= laranjaPosX && x <= laranjaPosX + 2 * largura && y >= laranjaPosYR + altura && y <= laranjaPosYR + 2 * altura){

			cout << "clicou na laranja" << endl;

		}else{

			cout << "Não clicou em nada" << endl;

		}

    }
}

void desenha() {

	glClear(GL_COLOR_BUFFER_BIT);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,w,0,h,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

		pecaVermelha();

		pecaVerde();

		pecaAzul();

		pecaCiana();
		
		pecaAmarela();
	
		pecaRoxa();	

		pecaLaranja();

	glFlush();

}

int main(int argc, char** argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
    glutInitWindowPosition(450, 150);
    glutInitWindowSize(w, h);
    glutCreateWindow("Teste");

	inicializar();

	glutDisplayFunc(desenha);

	glutMouseFunc(mouseClique);

	glutMainLoop();

}

//cd Trabalho-1-CG
//g++ tetris.cpp -o main.exe -lopengl32 -lfreeglut
//start main.exe