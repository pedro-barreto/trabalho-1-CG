#include <GL/glut.h>
#include <iostream>
using namespace std;

//WIDTH E HEIGHT DA JANELA

float h = 600;
float w = 600;

//TAMANHO DAS PECAS

float largura = 50 , altura = 50;

//POSICAO DAS PECAS

float vermelhoPosX = 070  , vermelhoPosY = 070;
float verdePosX    = 070  , verdePosY    = 270;
float azulPosX     = 110 , azulPosY      = 470;
float cianoPosX    = 270 , cianoPosY     = 130;
float amarelaPosX  = 270 , amarelaPosY   = 310;
float roxoPosX     = 470 , roxoPosY      = 070;
float laranjaPosX  = 470 , laranjaPosY   = 270;

//VERIFICADOR, VAI VERIFICAR SE A PECA FOI SELECIONADA PARA PODE ROTACIONAR OU ARRASTAR

bool vermelho = false;
bool verde    = false;
bool azul     = false;
bool ciano    = false;
bool amarelo  = false;
bool roxo     = false;
bool laranja  = false;


//RGB DAS PECAS
float r , g , b ;

//RGB DAS BORDAS PARA MOSTRAR QUE FORAM SELECIONADAS
float rBorda = 0 , gBorda = 0 , bBorda = 0 ;


//FUNCAO PARA CRIAR 1 QUADRADO, JA QUE TODAS AS PECAS SAO FEITAS COM 4 QUADRADOS
void quadrado(float posX, float posY){

	//COR QUE VAI SER DEFINIDA NA CRIACAO DAS PECAS
	glColor3f(r,g,b);

		//FIZ UM QUADRADO COM 2 TRIANGULOS
		glBegin(GL_TRIANGLE_STRIP);

			//AS 4 POSICOES DO QUADRADO
			glVertex2f(posX           , posY          );
			glVertex2f(posX           , posY + altura );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );		

		glEnd();

	//COR DA BORDA QUE VAI SER DEFINIDA COM O CLICK
	glColor3f(rBorda,gBorda,bBorda);

		//UM LINE LOOP PARA CIRCULAR O QUADRADO
		glBegin(GL_LINE_LOOP);

			//AS 4 POSICOES DO CONTORNO
			glVertex2f(posX           , posY          );
			glVertex2f(posX + largura , posY          );
			glVertex2f(posX + largura , posY + altura );
			glVertex2f(posX           , posY + altura );

		glEnd();

}

//PECA VERMELHA
void pecaVermelha(){

	//COR DA PECA
	r = 1; g = 0; b = 0;

	if(vermelho == true){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(vermelhoPosX           , vermelhoPosY          );
	quadrado(vermelhoPosX + largura , vermelhoPosY          );
	quadrado(vermelhoPosX           , vermelhoPosY - altura );
	quadrado(vermelhoPosX + largura , vermelhoPosY - altura );

}

//PECA VERDE
void pecaVerde(){

	//COR DA PECA
	r = 0; g = 1; b = 0;

	if(verde == true){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(verdePosX           , verdePosY              );
	quadrado(verdePosX           , verdePosY -     altura );
	quadrado(verdePosX           , verdePosY - 2 * altura );
	quadrado(verdePosX + largura , verdePosY - 2 * altura );

}

//PECA AZUL
void pecaAzul(){

	//COR DA PECA
	r = 0; g = 0; b = 1;

	if(azul == true){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(azulPosX           , azulPosY              );
	quadrado(azulPosX           , azulPosY -     altura );
	quadrado(azulPosX           , azulPosY - 2 * altura );
	quadrado(azulPosX - largura , azulPosY - 2 * altura );

}

//PECA CIANA
void pecaCiana(){

	//COR DA PECA
	r = 0; g = 1; b = 1;

	if(ciano == true){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(cianoPosX , cianoPosY              );
	quadrado(cianoPosX , cianoPosY + altura     );
	quadrado(cianoPosX , cianoPosY - altura     );
	quadrado(cianoPosX , cianoPosY - 2 * altura );

}

//PECA AMARELA
void pecaAmarela(){

	//COR DA PECA
	r = 1; g = 1; b = 0;

	if(amarelo == true){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(amarelaPosX           , amarelaPosY          );
	quadrado(amarelaPosX - largura , amarelaPosY          );
	quadrado(amarelaPosX + largura , amarelaPosY          );
	quadrado(amarelaPosX           , amarelaPosY - altura );

}

//PECA ROXA
void pecaRoxa(){

	//COR DA PECA
	r = 0.5; g = 0; b = 1;

	if(roxo == true){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(roxoPosX           , roxoPosY          );
	quadrado(roxoPosX + largura , roxoPosY          );
	quadrado(roxoPosX           , roxoPosY - altura );
	quadrado(roxoPosX - largura , roxoPosY - altura );

}

//PECA LARANJA
void pecaLaranja(){

	//COR DA PECA
	r = 1 ; g = 0.5 ; b = 0 ;

	if(laranja == true){

		//SE A PECA FOR SELECIONADA O CONTORNO DELA FICARA BRANCO
		rBorda = 1 , gBorda = 1 , bBorda = 1;

	}else{

		//CASO CONTRARIO O CONTORNO VOLTARA A SER PRETO
		rBorda = 0 , gBorda = 0 , bBorda = 0;

	}

	//CONSTRUCAO DA PECA, CADA QUADRADO PRECISA DAS COORDENADAS X e Y
	quadrado(laranjaPosX           , laranjaPosY          );
	quadrado(laranjaPosX - largura , laranjaPosY          );
	quadrado(laranjaPosX           , laranjaPosY - altura );
	quadrado(laranjaPosX + largura , laranjaPosY - altura );

}

//FUNCAO INICIALIZAR, COR DE FUNDO MEIO AZULADA E TAMANHO DAS LINHA 3, PARA DA MAIS DESTAQUE NO CONTORNO DAS PECA
void inicializar() {

	glClearColor(0.2,0.5,1,1);
    glLineWidth(3.0);

}

//FUNCAO MOUSE
void mouseClique(int button, int state, int x, int y){
	
	//VERIFICA SE O USUARIO CLICOU COM O BOTAO ESQUERDO
	if(button == GLUT_LEFT && state == GLUT_DOWN){ 
		
		//AJUSTE DA COORDENADA Y
		float vermelhoPosYR = w - vermelhoPosY - altura;
		float verdePosYR    = w - verdePosY    - altura;
		float azulPosYR     = w - azulPosY     - altura;
		float cianoPosYR    = w - cianoPosY    - altura;
		float amarelaPosYR  = w - amarelaPosY  - altura;
		float roxoPosYR     = w - roxoPosY     - altura;
		float laranjaPosYR  = w - laranjaPosY  - altura;

		//VERIFICA SE A AREA/POSICAO DO VEMELHO FOI SELECIONADO
		if(x >= vermelhoPosX  && x <= vermelhoPosX  + 2 * largura && 
		   y >= vermelhoPosYR && y <= vermelhoPosYR + 2 * altura){

			//CASO SEJA TRUE VERMELHO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = true;
			verde = false;
			azul = false;
			ciano = false;
			amarelo = false;
			roxo = false;
			laranja = false;

		//VERIFICA SE A AREA/POSICAO DO VERDE FOI SELECIONADO
		}else if(x >= verdePosX  && x <= verdePosX  +     largura && 
		         y >= verdePosYR && y <= verdePosYR + 3 * altura  ||
			     x >= verdePosX  && x <= verdePosX  + 2 * largura && 
				 y >= verdePosYR + 2 * altura && y <= verdePosYR + 3* altura){

			//CASO SEJA TRUE VERDE SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde = true;
			azul = false;
			ciano = false;
			amarelo = false;
			roxo = false;
			laranja = false;

		//VERIFICA SE A AREA/POSICAO DO AZUL FOI SELECIONADO
		}else if(x >= azulPosX  && x <= azulPosX  +     largura && 
		         y >= azulPosYR && y <= azulPosYR + 3 * altura  ||
			     x >= azulPosX - largura && x <= azulPosX + largura && 
				 y >= azulPosYR + 2 * altura && y <= azulPosYR + 3* altura){

			//CASO SEJA TRUE AZUL SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde = false;
			azul = true;
			ciano = false;
			amarelo = false;
			roxo = false;
			laranja = false;

		//VERIFICA SE A AREA/POSICAO DO CIANO FOI SELECIONADO
		}else if(x >= cianoPosX && x <= cianoPosX + largura && 
		         y >= cianoPosYR - altura && y <= cianoPosYR + 3 * altura){

			//CASO SEJA TRUE CIANO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde = false;
			azul = false;
			ciano = true;
			amarelo = false;
			roxo = false;
			laranja = false;

		//VERIFICA SE A AREA/POSICAO DO AMARELO FOI SELECIONADO
		}else if(x >= amarelaPosX - largura && x <= amarelaPosX +  2 * largura && 
		         y >= amarelaPosYR && y <= amarelaPosYR + altura ||
			     x >= amarelaPosX  && x <= amarelaPosX + largura && 
				 y >= amarelaPosYR + altura && y <= amarelaPosYR + 2 * altura){

			//CASO SEJA TRUE AMARELO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde = false;
			azul = false;
			ciano = false;
			amarelo = true;
			roxo = false;
			laranja = false;

		//VERIFICA SE A AREA/POSICAO DO ROXO FOI SELECIONADO
		}else if(x >= roxoPosX  && x <= roxoPosX  + 2 * largura && 
		         y >= roxoPosYR && y <= roxoPosYR + altura ||
			     x >= roxoPosX - largura && x <= roxoPosX + largura && 
				 y >= roxoPosYR + altura && y <= roxoPosYR + 2 * altura){

			//CASO SEJA TRUE ROXO SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde = false;
			azul = false;
			ciano = false;
			amarelo = false;
			roxo = true;
			laranja = false;

		//VERIFICA SE A AREA/POSICAO DO LARANJA FOI SELECIONADO
		}else if(x >= laranjaPosX - largura && x <= laranjaPosX + largura && 
		         y >= laranjaPosYR && y <= laranjaPosYR + altura ||
			     x >= laranjaPosX  && x <= laranjaPosX + 2 * largura && 
				 y >= laranjaPosYR + altura && y <= laranjaPosYR + 2 * altura){

			//CASO SEJA TRUE LARANJA SERA SELECIONADO E TODAS AS OUTRAS SERAM DESMARCADAS
			vermelho = false;
			verde = false;
			azul = false;
			ciano = false;
			amarelo = false;
			roxo = false;
			laranja = true;

		//CASO NENHUMA DAS ALTERNATIVAS SEJA TRUE SERA CONSIDERADO QUE O CLICK FOI NO FUNDO
		}else{

			//JA QUE O CLICK NAO FOI EM NENHUMA PECA, TODOS SERAO DESMARCADOS
			vermelho = false;
			verde = false;
			azul = false;
			ciano = false;
			amarelo = false;
			roxo = false;
			laranja = false;

		}

    }

}

//FUNCAO DESENHA PARA RENDERIZAR
void desenha() {

	//SERVE PARA APAGAR O QUE TEM NA TELA E DENHAR NOVAMENTE
	glClear(GL_COLOR_BUFFER_BIT);

	//SERVE PARA AJUSTAR PARA A MESMA PROPORCAO DA TELA, PARA QUE O CLICK FUNCIONE
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0,w,0,h,-1,1);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

		//RENDERIZACAO DE TODAS AS PECAS
		pecaVermelha();

		pecaVerde();

		pecaAzul();

		pecaCiana();
		
		pecaAmarela();
	
		pecaRoxa();	

		pecaLaranja();

	glFlush();

}

//FUNCAO MAIN PARA DEFINIR A JANELA E CHAMAR TODAS AS FUNCOES ANTERIORES
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