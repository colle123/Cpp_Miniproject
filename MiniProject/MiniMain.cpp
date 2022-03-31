#include"Item.h"
#include"handler.h"
#include "mes_plan.h"

static int Num_product = 0;

int main(void)
{

	int Select_main = 0;
	Handler manager;
	// product2* stub[100];

	
	// 샘플데이터 삽입
	manager.Init_Sample_ItemInfo();
	
	
	while (1)
	{
		manager.Menu_Main();
		cout << "선택 : ";
		cin >> Select_main;
		cout << endl;

		if (Select_main == 1)		// 1.1 BOM
		{
		}

		else if (Select_main == 2)	// 1.2 생산계획
		{
			manager.Menu_ManufacturePlanning();
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


