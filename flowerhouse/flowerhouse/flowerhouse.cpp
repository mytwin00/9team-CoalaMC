#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <CoalaMOD.h>
#pragma comment(lib, "CoalaMOD.lib")

int px, py, pz;
BlockID stone = createBlock(BLOCK_STONE);
DoorID door1 = createDoor(DOOR_OAK, true, HINGE_RIGHT);
DoorID door2 = createDoor(DOOR_OAK, true, HINGE_LEFT);
BlockID air = createBlock(BLOCK_AIR);
PaneID pane1 = createPane(PANE_GLASS);
FlowerID flower = createFlower(FLOWER_RED_TULIP);
FlowerID flower1 = createFlower(FLOWER_WHITE_TULIP);
FlowerID flower2 = createFlower(FLOWER_OXEYE_TULIP);
FlowerID flower3 = createFlower(FLOWER_AZURE_BLUET);
BlockID glow = createBlock(BLOCK_GLOWSTONE);
BlockID glass = createBlock(BLOCK_GLASS);
TerracottaID t = createTerracotta(TERRACOTTA_GLAZED, COLOR_LIGHT_GRAY);


int o;
int p;
int k;
int u;

//����ä
void mini1(int x, int y, int z);
void air1(int x, int y, int z);
void moon1(int x, int y, int z);
void moon2(int x, int y, int z);
void win1(int x, int y, int z);
//��
void ggot(int x, int y, int z);
void ggot1(int x, int y, int z);
void ggot2(int x, int y, int z);
void ggot3(int x, int y, int z);
void ggot4(int x, int y, int z);
void ggot5(int x, int y, int z);
//���ε�
void garo(int x, int y, int z);
//������
void MODU1(int x, int y, int z);
void MODU2(int x, int y, int z);
void MODU3(int x, int y, int z);
void MODU4(int x, int y, int z);
void MODU5(int x, int y, int z);
//����ū��
void jotna(int x, int y, int z);
void jotnaair(int x, int y, int z);
void saee(int x, int y, int z);
void saee1(int x, int y, int z);

int main()
{  
	int x = 400;
	int y = 4;
	int z = 200;
	//������
	for (int i = 0;i < 3;i++) {
		MODU1(x,y,z);
		MODU2(x, y, z);
		MODU3(x, y, z);
		MODU4(x, y, z);
		MODU5(x, y, z);
		x += 15;
	}
	
	//ū��
	jotna(350, 4, 200);
	jotnaair(351, 4, 201);
	saee(351, 7, 201);
	saee(351, 13, 201);
	saee1(351, 9, 201);
	jotna(350, 10, 200);
	jotnaair(351, 10, 201);
	//1����
	ggot3(351, 4, 201);
	ggot4(361, 4, 201);
	ggot5(371, 4, 201);
}

//��

void ggot(int x, int y, int z)
{
	for (int i = 0; i < 4; i = i + 1)
	{
		locateBlock(flower, x + i, y, z + o);
		for (int o = 0; o < 4; o = o + 1)
		{
			locateBlock(flower, x + i, y, z + o);
		}
	}
}

//��
void ggot1(int x, int y, int z)
{
	for (int i = 0; i < 4; i = i + 1)
	{
		locateBlock(flower1, x + i, y, z + o);
		for (int o = 0; o < 4; o = o + 1)
		{
			locateBlock(flower1, x + i, y, z + o);
		}
	}
}

//��
void ggot2(int x, int y, int z)
{
	for (int i = 0; i < 4; i = i + 1)
	{
		locateBlock(flower2, x + i, y, z + o);
		for (int o = 0; o < 4; o = o + 1)
		{
			locateBlock(flower2, x + i, y, z + o);
		}
	}
}

//����ä
void mini1(int x, int y, int z)
{
	for (int i = 0; i < 6; i = i + 1)
	{
		locateBlock(stone, x + i, y + o, z + p);

		for (int o = 0; o < 6; o = o + 1) {

			locateBlock(stone, x + i, y + o, z + p);

			for (int p = 0; p < 6; p = p + 1) {
				locateBlock(stone, x + i, y + o, z + p);

			}

		}
	}



}
//����
void air1(int x, int y, int z)
{
	for (int i = 0; i < 4; i = i + 1)
	{
		locateBlock(air, x + i, y + o, z + p);

		for (int o = 0; o <= 4; o = o + 1) {

			locateBlock(air, x + i, y + o, z + p);

			for (int p = 0; p < 4; p = p + 1) {
				locateBlock(air, x + i, y + o, z + p);

			}

		}
	}
	//��������
	locateBlock(glow, x + 1, y + 3, z + 1);
	locateBlock(glow, x + 1, y + 3, z + 2);
	locateBlock(glow, x + 2, y + 3, z + 1);
	locateBlock(glow, x + 2, y + 3, z + 2);
}
//��
void moon1(int x, int y, int z)
{
	installDoor(door1, x, y, z, FACING_EAST);

}

void moon2(int x, int y, int z)
{
	installDoor(door2, x, y, z, FACING_EAST);
}

//â��?
void win1(int x, int y, int z)
{
	for (int k = 0; k < 6; k = k + 1)
	{
		locateBlock(pane1, x + k, y, z + u);
		for (int u = 0; u < 6; u = u + 1)
		{
			locateBlock(pane1, x + k, y, z + u);

		}

	}

}

//���ε�
void garo(int x, int y, int z)
{
	locateBlock(stone, x, y, z);
	locateBlock(stone, x, y + 1, z);
	locateBlock(stone, x, y + 2, z);
	locateBlock(stone, x, y + 3, z);
	locateBlock(glow, x, y + 4, z);

}
//����
/*void MODU(int x, int y, int z) {
	//����ä
	mini1(x, y, z);
	moon1(x, y, z + 3);
	moon2(x, y, z + 2);
	air1(x + 1, y, z + 1);
	win1(x, y + 4, z);
	//����ä
	mini1(x, y, z + 13);
	moon1(x, y, z + 16);
	moon2(x, y, z + 15);
	air1(x + 1, y, z + 14);
	win1(x, 8, z + 13);
	//���ε�
	garo(x - 5, y, z - 4);
	garo(x - 5, y, z + 9);
	garo(x - 5, y, z + 22);
	garo(x - 5, y, z + 35);
	//����ä
	mini1(x, y, z + 26);
	moon1(x, y, z + 29);
	moon2(x, y, z + 28);
	air1(x + 1, y, z + 27);
	win1(x, 8, z + 26);
	//��
	ggot(x + 1, y, z + 1);
	ggot1(x + 1, y, z + 14);
	ggot2(x + 1, y, z + 27);


} */
void MODU1(int x, int y, int z) {
	//����ä
	mini1(x, y, z);
	moon1(x, y, z + 3);
	moon2(x, y, z + 2);
	air1(x + 1, y, z + 1);
	win1(x, y + 4, z);
}

void MODU2(int x, int y, int z) {
	//����ä
	mini1(x, y, z + 13);
	moon1(x, y, z + 16);
	moon2(x, y, z + 15);
	air1(x + 1, y, z + 14);
	win1(x, 8, z + 13);
}

void MODU3(int x, int y, int z) {
	//���ε�
	garo(x - 5, y, z - 4);
	garo(x - 5, y, z + 9);
	garo(x - 5, y, z + 22);
	garo(x - 5, y, z + 35);
}

void MODU4(int x, int y, int z) {
	//����ä
	mini1(x, y, z + 26);
	moon1(x, y, z + 29);
	moon2(x, y, z + 28);
	air1(x + 1, y, z + 27);
	win1(x, 8, z + 26);
}

void MODU5(int x, int y, int z) {
	//��
	ggot(x + 1, y, z + 1);
	ggot1(x + 1, y, z + 14);
	ggot2(x + 1, y, z + 27);
}
//2�� ��
void ggot3(int x, int y, int z) {
	for (int i = 0; i < 10; i = i + 1)
	{
		locateBlock(flower3, x + i, y, z + p);
		for (int p = 0; p < 28; p = p + 1) {
			locateBlock(flower3, x + i, y, z + p);
		}
	}
}

void ggot4(int x, int y, int z) {
	for (int i = 0; i < 10; i = i + 1)
	{
		locateBlock(flower, x + i, y, z + p);
		for (int p = 0; p < 28; p = p + 1) {
			locateBlock(flower, x + i, y, z + p);
		}
	}
}

void ggot5(int x, int y, int z) {
	for (int i = 0; i < 8; i = i + 1)
	{
		locateBlock(flower2, x + i, y, z + p);
		for (int p = 0; p < 28; p = p + 1) {
			locateBlock(flower2, x + i, y, z + p);
		}
	}
}




//����ū��
//Ʋ

void jotna(int x, int y, int z)
{
	for (int i = 0; i < 30; i = i + 1)
	{
		locateBlock(glass, x + i, y + o, z + p);
		for (int o = 0; o < 5; o = o + 1) {
			locateBlock(glass, x + i, y + o, z + p);
			for (int p = 0; p < 30; p = p + 1) {
				locateBlock(glass, x + i, y + o, z + p);
			}
		}
	}
}
//����
void jotnaair(int x, int y, int z)
{
	for (int i = 0; i < 28; i = i + 1)
	{
		locateBlock(air, x + i, y + o, z + p);
		for (int o = 0; o <= 3; o = o + 1) {
			locateBlock(air, x + i, y + o, z + p);
			for (int p = 0; p < 28; p = p + 1) {
				locateBlock(air, x + i, y + o, z + p);
			}
		}
	}
}

//���� ����
void saee(int x, int y, int z)
{
	for (int i = 0; i < 28; i = i + 1)
	{
		locateBlock(glow, x + i, y, z + p);
		for (int p = 0; p < 28; p = p + 1) {
			locateBlock(glow, x + i, y, z + p);
		}
	}
}

void saee1(int x, int y, int z)
{
	for (int i = 0; i < 28; i = i + 1)
	{
		locateBlock(t, x + i, y, z + p);
		for (int p = 0; p < 28; p = p + 1) {
			locateBlock(t, x + i, y, z + p);
		}
	}
}
