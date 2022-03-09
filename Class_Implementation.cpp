#include "FIFO.h"
#include <iostream>
#include <iostream>
using namespace std;
FIFO::FIFO() {
	elementNum = 0;
	pData = NULL;
}
FIFO::~FIFO() {
	elementNum = 0;
	free(pData);
	pData = NULL;
}

void FIFO::insert(int element) {
	elementNum++;
	int* ptemp = (int*)malloc(elementNum * sizeof(int));
	ptemp[0] = element;
	for (int i = 1;i < elementNum ;i++)
		ptemp[i] = pData[i-1];
	free(pData);
	pData = NULL;
	pData = (int*)malloc(elementNum * sizeof(int));
	for (int i = 0;i < elementNum ;i++)
		pData[i] = ptemp[i];
	free(ptemp);
	ptemp = NULL;
}

void FIFO::pop() {
	elementNum--;
	int* ptemp = (int*)malloc(elementNum * sizeof(int));
	for (int i = 0;i < elementNum ;i++)
		ptemp[i] = pData[i];
	free(pData);
	pData = NULL;
	pData = (int*)malloc(elementNum * sizeof(int));
	for (int i = 0;i < elementNum;i++)
		pData[i] = ptemp[i];
	free(ptemp);
	ptemp = NULL;
}
void FIFO::print() {
	cout << endl;
	for (int i = 0;i < elementNum;i++)
		cout << pData[i]<<endl;
	cout << endl;
}


