#ifndef __HANDLER_H__
#define __HANDLER_H__

#include"Item.h"


class Handler
{
private:
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
