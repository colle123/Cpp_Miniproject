#ifndef __HANDLER_H__
#define __HANDLER_H__

#pragma once
#include"Item.h"
//#include"PoP.h"

class Plan
{
private:
	string Err_sirial;
	int Plan_date;
	int Amount;
	string BOM_Num;


public:
	Plan(const string plan_sirial, int plan_date, int Amount,string aBOM_Num) : Plan_date(plan_date), Amount(Amount),BOM_Num(aBOM_Num)
	{
		Err_sirial = plan_sirial;
	}
	//handler에 넘겨줄 생산계획 배열에 개수리턴하는 함수
	int getAmount() { return Amount; }
	string getMemSrial() { return Err_sirial; }

	virtual void Print_Plan() const
	{
		cout << "-------------------------" << endl;
		cout << "Plan Sirial : " << Err_sirial << endl;
		cout << "Plan date : " << Plan_date << endl;
		cout << "Plan amount : " << Amount << endl;
		cout << "target BOM_Num : " << BOM_Num << endl;
		cout << "-------------------------" << endl;
	}
};


class Handler
{
private:
	int Num_Memproduct = 0;
	Plan* stub[100];
	
	CPU cpu[100];
	int cpu_count = 0;

	MB mb[100];
	int mb_count = 0;

	Memorry ram[100];
	int ram_count = 0;

	HDD hdd[100];
	int hdd_count = 0;

	SSD ssd[100];
	int ssd_count = 0;

	Power pow[100];
	int pow_count = 0;

	Case case1[100];
	int case1_count = 0;

	Software os[100];
	int os_count = 0;

	BOM *temp[100];
	int Num_product = 0;

    BOM temp1[100];
    int Num_product1 = 0;

    //POP *pop[100];
    int number = 0;

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
	void Show_BOM_Searial();

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
