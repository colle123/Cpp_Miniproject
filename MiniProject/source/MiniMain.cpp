#include<iostream>
using namespace std;

class product
{
private:
	char* Num_item; // 품번
	char* Sirial_num; //시리얼번호
public:
	product(const char* a, const char* b)
	{
		Num_item = new char[strlen(a) + 1];
		strcpy(Num_item, a);
		Sirial_num = new char[strlen(b) + 1];
		strcpy(Sirial_num, b);
	}

};

class CPU:public product
{
private:
	char* size;	// 규격? / 이름? / 인텔/암드 등의 호환성? 그정도
	
public:
	CPU(const char* a, const char* b, const char* c) :product(a, b)
	{
		size = new char[strlen(c) + 1];
		strcpy(size, c);
	}
};

int main(void)
{
	product* material[100];				// 품목갯수;
	material[0] = new CPU("품번", "시리얼번호", "규격");

	return 0;
}