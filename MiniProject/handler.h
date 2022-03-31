#ifndef __HANDLER_H__
#define __HANDLER_H__

#include"Item.h"

class Plan
{
private:
	string Err_sirial;
	int Plan_date;
	int Amount;


public:
	Plan(const string plan_sirial, int plan_date, int Amount) : Plan_date(plan_date), Amount(Amount)
	{
		Err_sirial = plan_sirial;
	}
	//handler에 넘겨줄 생산계획 배열에 개수리턴하는 함수
	int getAmount() { return Amount; }
	string getMemSrial() { return Err_sirial; }

	virtual void Print_Plan() const
	{
		cout << "Plan Sirial : " << Err_sirial << endl;
		cout << "Plan date : " << Plan_date << endl;
		cout << " Plan amount : " << Amount << endl;
	}
};


class Handler
{
private:
	int Num_Memproduct = 0;
	Plan* stub[100];


public:
	Handler(void);
	// 샘플데이터입력
	void Init_Sample_ItemInfo(void);

	// 메인메뉴
	void Menu_Main(void);

	// BOM
	void Menu_BOM();
	void Add_BOM();
	void Delete_BOM();
	void Show_BOM();
	
	// 생산계획
	void Menu_ManufacturePlanning();
	void Add_ManufacturePlanning();
	void Delete_ManufacturePlanning();
	void Show_ManufacturePlanning();
	
	// 공정
	void manufature();

	// 불량정보
	void Show_NGInfo();

};

#endif 
