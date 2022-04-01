#pragma once
#include"handler.h"
#include"Item.h"

Handler::Handler() {}

template <typename T>
void print_product_for(T product, int count)
{
	for (int i = 0; i < count; i++)
	{
		product[i].print_Info();
	}
}

void Handler::Menu_Main(void)
{
	system("cls");
	cout << endl;
	cout << "=====[Main]=====" << endl;
	cout << endl;
	cout << "1. BOM" << endl;
	cout << "2. 생산계획" << endl;
	cout << "3. 공정" << endl;
	cout << "4. 불량정보확인" << endl;
	cout << "5. 프로그램 종료" << endl << endl;
}

void Handler::Init_Sample_ItemInfo(void)
{
	cpu[cpu_count++] = CPU("CPU1", "CPU001", "20220330-CP1-001");
	cpu[cpu_count++] = CPU("CPU2", "CPU002", "20220330-CP2-001");
	cpu[cpu_count++] = CPU("CPU3", "CPU003", "20220330-CP3-001");

	mb[mb_count++] = MB("MB1", "MB001", "20220330-MB1-001");
	mb[mb_count++] = MB("MB2", "MB002", "20220330-MB2-001");
	mb[mb_count++] = MB("MB3", "MB003", "20220330-MB3-001");

	ram[ram_count++] = Memorry("ram1", "ram001", "20220330-ram1-001");
	ram[ram_count++] = Memorry("ram2", "ram002", "20220330-ram2-001");
	ram[ram_count++] = Memorry("ram3", "ram003", "20220330-ram3-001");

	hdd[hdd_count++] = HDD("hdd1", "hdd001", "20220330-hdd1-001");
	hdd[hdd_count++] = HDD("hdd2", "hdd002", "20220330-hdd2-001");
	hdd[hdd_count++] = HDD("hdd3", "hdd003", "20220330-hdd3-001");

	ssd[ssd_count++] = SSD("ssd1", "ssd001", "20220330-ssd1-001");
	ssd[ssd_count++] = SSD("ssd2", "ssd002", "20220330-ssd2-001");
	ssd[ssd_count++] = SSD("ssd3", "ssd003", "20220330-ssd3-001");

	pow[pow_count++] = Power("pow1", "pow001", "20220330-pow1-001");
	pow[pow_count++] = Power("pow2", "pow002", "20220330-pow2-001");
	pow[pow_count++] = Power("pow3", "pow003", "20220330-pow3-001");

	case1[case1_count++] = Case("case1", "case1001", "20220330-case1-001");
	case1[case1_count++] = Case("case2", "case1002", "20220330-case2-001");
	case1[case1_count++] = Case("case3", "case1003", "20220330-case3-001");

	os[os_count++] = Software("os1", "os1001", "20220330-os1-001");
	os[os_count++] = Software("os2", "os1002", "20220330-os2-001");
	os[os_count++] = Software("os3", "os1003", "20220330-os3-001");
}

void Handler::Menu_BOM(void)
{
	int Select_BOM;

	while (1)
	{
		system("cls");
		cout << endl;
		cout << "=====[BOM]=====" << endl;
		cout << endl;
		cout << "1. BOM 추가" << endl;
		cout << "2. BOM 조회" << endl;
		cout << "3. BOM 삭제" << endl;
		cout << "4. 뒤로가기" << endl;
		cout << "선택 : ";
		cin >> Select_BOM;

		if (Select_BOM == 1)
		{
			Add_BOM();
		}
		else if (Select_BOM == 2)
		{
			Show_BOM();
		}

		else if (Select_BOM == 3)
		{
			Delete_BOM();
		}

		else if (Select_BOM == 4)
		{
			break;
		}

		else
		{
			while (getchar() != '\n');
			cout << "잘못된 입력값입니다." << endl;
		}
	}
}

void Handler::Add_BOM()
{
	string name, serial_num;
	int cpu_sel, mb_sel, ram_sel, hdd_sel, ssd_sel, pow_sel, case1_sel, os_sel;
	cout << "등록할 제품 이름을 입력해주세요: ";
	cin >> name;
	cout << "시리얼번호를 입력해주세요: ";
	cin >> serial_num;

	print_product_for(cpu, cpu_count);
	cout << "CPU를 선택해주세요: ";
	cin >> cpu_sel;

	print_product_for(mb, mb_count);
	cout << "M/B를 선택해주세요: ";
	cin >> mb_sel;

	print_product_for(ram, ram_count);
	cout << "Memory를 선택해주세요: ";
	cin >> ram_sel;

	print_product_for(hdd, hdd_count);
	cout << "HDD를 선택해주세요: ";
	cin >> hdd_sel;

	print_product_for(ssd, ssd_count);
	cout << "SSD를 선택해주세요: ";
	cin >> ssd_sel;

	print_product_for(pow, pow_count);
	cout << "POWER를 선택해주세요: ";
	cin >> pow_sel;

	print_product_for(case1, case1_count);
	cout << "CASE를 선택해주세요: ";
	cin >> case1_sel;

	print_product_for(os, os_count);
	cout << "OS를 선택해주세요: ";
	cin >> os_sel;
	temp[Num_product++] = new BOM(name, serial_num, cpu[cpu_sel], mb[mb_sel], ram[ram_sel], hdd[hdd_sel], ssd[ssd_sel], pow[pow_sel], case1[case1_sel], os[os_sel]);
	temp1[Num_product1++] = BOM(name, serial_num, cpu[cpu_sel], mb[mb_sel], ram[ram_sel], hdd[hdd_sel], ssd[ssd_sel], pow[pow_sel], case1[case1_sel], os[os_sel]);

	//(2)pop에 BOM 넣는과정(지워도 될부분) 
	/*pop[number++] = new POP(temp1[0]);*/
}

void Handler::Delete_BOM()
{
	cout << endl << "미구현" << endl << endl;
}

void Handler::Show_BOM()
{
	for (int i = 0; i < Num_product; i++) {
		temp[i]->Print_produt();
		//pop[i]->showpop();
	}
	system("pause");
}

void Handler::Show_BOM_Searial()
{
	for (int i = 0; i < Num_product; i++) {
		cout <<"<" << i + 1 << "번 BOM >" << endl;
		cout <<"BOM 번호 :" << temp[i]->return_Product_Searial() << endl;
		cout << "품명 : " << temp[i]->return_bom_name() << endl << endl;
		//pop[i]->showpop();
	}
}


void Handler::Show_NGInfo()
{
	cout << endl << "미구현" << endl << endl;
}

void Handler::manufature()
{
	srand((unsigned int)time(NULL));
	cout << endl << "CPU 조립중...";
	if (rand() % 500000000 == 1)
	{
		cout << endl << "!!! 오류발생 !!!" << endl << endl;
		system("pause");
		return;
	}
	else cout << "OK" << endl << endl;

	cout << endl << "HDD 조립중...";
	if (rand() % 500000000 == 1)
	{
		cout << endl << "!!! 오류발생 !!!" << endl << endl;
		system("pause");
		return;
	}
	else cout << "OK" << endl << endl;

	cout << endl << "SSD 조립중...";
	if (rand() % 500000000 == 1)
	{
		cout << endl << "!!! 오류발생 !!!" << endl << endl;
		system("pause");
		return;
	}
	else cout << "OK" << endl << endl;

	cout << endl << "MB 조립중...";
	if (rand() % 500000000 == 1)
	{
		cout << endl << "!!! 오류발생 !!!" << endl << endl;
		system("pause");
		return;
	}
	else cout << "OK" << endl << endl;

	cout << endl << "CASE 조립중...";
	if (rand() % 500000000 == 1)
	{
		cout << endl << "!!! 오류발생 !!!" << endl << endl;
		system("pause");
		return;
	}
	else cout << "OK" << endl << endl;

	cout << endl << "POWER 조립중...";
	if (rand() % 500000000 == 1)
	{
		cout << endl << "!!! 오류발생 !!!" << endl << endl;
		system("pause");
		return;
	}
	else cout << "OK" << endl << endl;
	
	system("pause");
}

void Handler::Menu_ManufacturePlanning() {
	int choice;

	while (1) {
		system("cls");
		cout << endl;
		cout << "=====[생산계획]=====" << endl;
		cout << endl;
		cout << "1. 생산계획 추가" << endl;
		cout << "2. 생산계획 삭제" << endl;
		cout << "3. 생산계획 조회" << endl;
		cout << "4. 뒤로가기" << endl << endl;
		cout << "입력 : "; cin >> choice;

		if (choice == 1)
			Add_ManufacturePlanning();
		else if (choice == 2)
			Delete_ManufacturePlanning();
		else if (choice == 3)
			Show_ManufacturePlanning();
		else if (choice == 4)
			break;
		else cout << "잘못된 입력입니다." << endl;
	}
}


void Handler::Add_ManufacturePlanning()				//(BOM에서 시리얼번호 받아옴)
{
	string sirial;
	int date;
	int amount;
	string model;

	//제품 받아와서 선택
	cout << "===========================생산계획=============================" << endl;
	///BOM에서 받아와 부품 리스트 출력

	cout << "작업지시 번호를 입력하세요 : "; cin >> sirial;
	//생산할 날짜, 개수 입력
	cout << "생산할 날짜를 입력하세요 : "; cin >> date;
	cout << "생산할 개수를 입력하세요 : "; cin >> amount;
	cout << endl;
	Show_BOM_Searial();
	cout << "생산할 BOM 번호를 선택해주세요 : "; cin >> model;

	stub[Num_Memproduct] = new Plan(sirial, date, amount, model);
	cout << endl;
	stub[Num_Memproduct]->Print_Plan();
	cout << endl;
	++Num_Memproduct;
	system("pause");
	//handler에 넘겨줄 생산계획 배열 생성
}

void Handler::Show_ManufacturePlanning()              //모든 계획 출력
{
	vector<Plan*> plan;
	vector<Plan*>::reverse_iterator iter;

	for (int i = 0; i < Num_Memproduct; i++)
	{
		plan.push_back(stub[i]);
	}
	for (iter = plan.rbegin(); iter != plan.rend(); ++iter)
	{
		(*iter)->Print_Plan();
	}
	system("pause");
}

void Handler::Delete_ManufacturePlanning()
{
	string sirial;
	cout << "시리얼을 입력하세요" << endl;
	cin >> sirial;

	for (int i = 0; i < Num_Memproduct; i++)
	{
		if (sirial == stub[i]->getMemSrial())
		{
			delete stub[i];						//생산게획 시리얼 검색하여 삭제
			for (int j = i; j < Num_Memproduct; j++)
			{
				stub[j] = stub[j + 1];			//삭제된 배열 뒤에 있는 배열을 한칸 앞으로 삽임
			}
			Num_Memproduct--;
			cout << "계획을 삭제했습니다." << endl;
			system("pause");
			return;
		}
	}
	cout << "해당 계획이 없습니다." << endl;
	system("pause");
}

