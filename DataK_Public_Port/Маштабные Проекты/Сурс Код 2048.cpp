#include "SFML/Graphics.hpp"
#include <string>
#include <conio.h>

//#include <windows.h>
using namespace sf;
class Hero {
private:
	Image RawImage;
	Texture ObjTexture;
	Sprite ObjSprite;
	float X = 100, Y = 100;
	int xrec,yrec;
public:
	Hero(std::string FilePath);
	void move(float _X, float _Y);
	//
	void changeSprite(int _temp) {
		int sx, sy, dx=107, dy=107;
		switch (_temp) {
		case 0: sx = 4 * 14 + 3 * 107; sy = 1 * 14 + 0 * 107; break; //NaN
		case 1: sx = 3 * 14 + 2 * 107; sy = 1 * 14 + 0 * 107; break; //2
		case 2: sx = 2 * 14 + 1 * 107; sy = 1 * 14 + 0 * 107; break; //4
		case 3: sx = 1 * 14 + 0 * 107; sy = 1 * 14 + 0 * 107; break; //8
		case 4: sx = 3 * 14 + 2 * 107; sy = 2 * 14 + 1 * 107; break; //16
		case 5: sx = 2 * 14 + 1 * 107; sy = 2 * 14 + 1 * 107; break; //32
		case 6: sx = 1 * 14 + 0 * 107; sy = 3 * 14 + 2 * 107; break; //64
		case 7: sx = 2 * 14 + 1 * 107; sy = 3 * 14 + 2 * 107; break; //128
		case 8: sx = 3 * 14 + 2 * 107; sy = 3 * 14 + 2 * 107; break; //256
		case 9: sx = 4 * 14 + 3 * 107; sy = 3 * 14 + 2 * 107; break; //512
		case 10: sx = 4 * 14 + 3 * 107; sy = 4 * 14 + 3 * 107; break; //1024
		case 11: sx = 3 * 14 + 2 * 107; sy = 4 * 14 + 3 * 107; break; //2048
		}
		ObjSprite.setTextureRect(IntRect(sx, sy, dx, dy));
		xrec = sx;
		yrec = sy;
	}
	void setLoc(int _3x, int _3y) {
		int rx, ry;
		rx = (_3x + 1) * 14 + _3x * 107; ry = (_3y + 1) * 14 + _3y * 107;
		X = rx;
		Y = ry;
		ObjSprite.setPosition(X, Y);

	}
	//
	Sprite getSprite() { return ObjSprite; }
	void setRect(int __x, int __y, int _1x, int _1y) {
		ObjSprite.setTextureRect(IntRect(__x, __y, _1x, _1y));
		xrec = __x;
		yrec = __y;
	}
	void newSetRect(int dx, int dy) {
		ObjSprite.setTextureRect(IntRect(xrec, yrec, dx, dy));
	}
	void setPos(int _2x, int _2y) { X = _2x;
	Y = _2y; 
	ObjSprite.setPosition(X, Y);
	}
};
void Hero::move(float _X, float _Y) {
	X += _X;
	Y += _Y;
	ObjSprite.setPosition(X, Y);
}
Hero::Hero(std::string FilePath) {
	RawImage.loadFromFile(FilePath);
	ObjTexture.loadFromImage(RawImage);
	ObjSprite.setTexture(ObjTexture);
	ObjSprite.setPosition(0, 0);
	ObjSprite.setTextureRect(IntRect(0, 0, 500, 500));

}
int table[4][4];
Hero Cell("2048tile-1.png");
sf::RenderWindow screen(sf::VideoMode(500, 500), "SFML Demo");
sf::Event event;
Clock Mycl;
int timee;
void animateNew() {
	for (int counter = 0; counter < 107;counter++) {
		
		Mycl.restart();
		timee = Mycl.getElapsedTime().asMilliseconds();
		while (timee < 2) {
			timee = Mycl.getElapsedTime().asMilliseconds();
		}
		for (int i = 0;i < 4;i++) {
			for (int j = 0;j < 4;j++) {
				
				Cell.changeSprite(table[i][j]);
				Cell.newSetRect(107, counter + 1);
				Cell.setLoc(i, j);
			//	screen.clear();
				screen.draw(Cell.getSprite());
				
			}
		}
		screen.display();
	}

}


void newGen(){
  int AmountOfZeros = 0;
  int CoordsOfZeroX[16];
  int CoordsOfZeroY[16];
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			if (table[i][j]== 0) {
				AmountOfZeros++;
				CoordsOfZeroX[AmountOfZeros-1] = i;
				CoordsOfZeroY[AmountOfZeros-1] = j;
			}
		}
	}
	if (AmountOfZeros == 0) {
		while (1) {
		}
	}
	int randomm = rand() % AmountOfZeros;
	table[CoordsOfZeroX[randomm]][CoordsOfZeroY[randomm]] = 1;
}
int main() {
	int hapenagain = 0;
	int NowPressedS = 0;
	int NowPressedA = 0;
	int NowPressedD = 0;
	int NowPressedW = 0;
	for (int i = 0;i < 4;i++) {
		for (int j = 0;j < 4;j++) {
			table[i][j] = 0;

		}
	}

	Hero Table("MainMap.png");
	
	table[1][0] = 1;
	table[1][1] = 1;
	table[1][3] = 1;
	table[2][1] = 4;
	table[2][3] = 6;
	
	


	

	



	
	while (screen.isOpen()) {
		// –икл обработки событий
		while (screen.pollEvent(event)) {
			if (event.type == sf::Event::EventType::Closed)
				screen.close();
		}
		
		
		//Далее Движения
		int j;
		int LastPressedS = NowPressedS;
		int LastPressedD = NowPressedD;
		int LastPressedA = NowPressedA;
		int LastPressedW = NowPressedW;
		if (Keyboard::isKeyPressed(Keyboard::S)) {NowPressedS = 1;}else {NowPressedS = 0;}
		if (Keyboard::isKeyPressed(Keyboard::D)) {NowPressedD = 1;}else {NowPressedD = 0;}
		if (Keyboard::isKeyPressed(Keyboard::A)) {NowPressedA = 1;}else {NowPressedA = 0;}
		if (Keyboard::isKeyPressed(Keyboard::W)) {NowPressedW = 1;}else {NowPressedW = 0;}
		//S
		if ( !(LastPressedS) && (NowPressedS)  ) {
			for (int cou2 = 0;cou2 < 4;cou2++) {
				for (int j = 2;j > -1;j--) { // пересчет не c 3, т.к. последний ряд двигать не надо
					for (int i = 0; i < 4; i++) { //не имеет значение порядoк ай
						int ThatCellX = i;int ThatCellY = j; //всегда так
						int NextCellX = i;int NextCellY = j + 1; //зависит от направления
						int thata = table[ThatCellX][ThatCellY]; //thata == That (A) Amount
						int nexta = table[NextCellX][NextCellY];
						if (thata != 0) { //если пустая клетка ничего не предпринимать
							if (thata == nexta) { //Коллизия "скрещивания"
								table[ThatCellX][ThatCellY] = 0;
								table[NextCellX][NextCellY]++;
							}
							if (nexta == 0) { //Ничего впереди нет => клеточка проходит сквозь неё
								table[NextCellX][NextCellY] = table[ThatCellX][ThatCellY];
								table[ThatCellX][ThatCellY] = 0;

							}
						}
					}
				}
			}
			newGen();
			animateNew();
		}
		//W
		if (!(LastPressedW) && (NowPressedW)) {
			for (int cou2 = 0;cou2 < 4;cou2++) {
				for (int j = 1;j < 4;j++) { // пересчет не c 3, т.к. последний ряд двигать не надо
					for (int i = 0; i < 4; i++) { //не имеет значение порядoк ай
						int ThatCellX = i;int ThatCellY = j; //всегда так
						int NextCellX = i;int NextCellY = j - 1; //зависит от направления
						int thata = table[ThatCellX][ThatCellY]; //thata == That (A) Amount
						int nexta = table[NextCellX][NextCellY];
						if (thata != 0) { //если пустая клетка ничего не предпринимать
							if (thata == nexta) { //Коллизия "скрещивания"
								table[ThatCellX][ThatCellY] = 0;
								table[NextCellX][NextCellY]++;
							}
							if (nexta == 0) { //Ничего впереди нет => клеточка проходит сквозь неё
								table[NextCellX][NextCellY] = table[ThatCellX][ThatCellY];
								table[ThatCellX][ThatCellY] = 0;

							}
						}
					}
				}
			}
			newGen();
			animateNew();
		}
		//A
		if (!(LastPressedA) && (NowPressedA)) {
			for (int cou2 = 0;cou2 < 4;cou2++) {
				for (int j = 0;j < 4;j++) { // пересчет не c 3, т.к. последний ряд двигать не надо
					for (int i = 1; i < 4; i++) { //не имеет значение порядoк ай
						int ThatCellX = i;int ThatCellY = j; //всегда так
						int NextCellX = i-1;int NextCellY = j; //зависит от направления
						int thata = table[ThatCellX][ThatCellY]; //thata == That (A) Amount
						int nexta = table[NextCellX][NextCellY];
						if (thata != 0) { //если пустая клетка ничего не предпринимать
							if (thata == nexta) { //Коллизия "скрещивания"
								table[ThatCellX][ThatCellY] = 0;
								table[NextCellX][NextCellY]++;
							}
							if (nexta == 0) { //Ничего впереди нет => клеточка проходит сквозь неё
								table[NextCellX][NextCellY] = table[ThatCellX][ThatCellY];
								table[ThatCellX][ThatCellY] = 0;

							}
						}
					}
				}
			}
			newGen();
			animateNew();
		}
		//D
		if (!(LastPressedD) && (NowPressedD)) {
			for (int cou2 = 0;cou2 < 4;cou2++) {
				for (int j = 0;j < 4;j++) { // пересчет не c 3, т.к. последний ряд двигать не надо
					for (int i = 2; i > -1; i--) { //не имеет значение порядoк ай
						int ThatCellX = i;int ThatCellY = j; //всегда так
						int NextCellX = i + 1;int NextCellY = j; //зависит от направления
						int thata = table[ThatCellX][ThatCellY]; //thata == That (A) Amount
						int nexta = table[NextCellX][NextCellY];
						if (thata != 0) { //если пустая клетка ничего не предпринимать
							if (thata == nexta) { //Коллизия "скрещивания"
								table[ThatCellX][ThatCellY] = 0;
								table[NextCellX][NextCellY]++;
							}
							if (nexta == 0) { //Ничего впереди нет => клеточка проходит сквозь неё
								table[NextCellX][NextCellY] = table[ThatCellX][ThatCellY];
								table[ThatCellX][ThatCellY] = 0;

							}
						}
					}
				}
			}
			newGen();
			animateNew();
		}
		//Далее прорисовка
		screen.clear();
		screen.draw(Table.getSprite());
		Cell.newSetRect(107,107);
		for (int i = 0;i < 4;i++) {
			for (int j = 0;j < 4;j++) {
				Cell.changeSprite(table[i][j]);
				Cell.setLoc(i, j);
				screen.draw(Cell.getSprite());
			}
		}

		screen.display();
		/*
		int LastPressed = NowPressed;
		int NowPressed = (bool)(Keyboard::isKeyPressed(Keyboard::G));
		
		 while( (NowPressed == 0) || !(((NowPressed == 1) && (LastPressed == 0))) ){

		}
		 table[1][1] = 3;
		 */
	
	}
}