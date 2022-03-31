#include"Item.h"
#include"handler.h"


int main(void)
{
	static int Num_product = 0;
	int Select_main = 0;
	Handler manager;
	product2* stub[100];

	
	// 샘플데이터 삽입 및 들어갔는지 확인
	manager.Init_Sample_ItemInfo();
	
	
	while (1)
	{
		manager.Menu_Main();
		cout << "선택 : ";
		cin >> Select_main;
		cout << endl;

		if (Select_main == 1)		// 1.1 BOM
		{
			manager.Menu_BOM();
		}

		else if (Select_main == 2)	// 1.2 생산계획
		{

		}

		else if (Select_main == 3)	// 1.3 공정
		{

		}

		else if (Select_main == 4)	// 1.4 불량확인
		{

		}

		else if (Select_main == 5)	// 1.5 종료
		{
			exit(1);
		}

		else
		{
			while (getchar() != '\n');
			cout << "잘못된 입력값입니다." << endl;
		}
		

	}

	return 0;
}


