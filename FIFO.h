class FIFO {
	int elementNum;
	int* pData;
public:
	~FIFO();
	FIFO();
	void insert(int element);
	void pop();
	void print();

};