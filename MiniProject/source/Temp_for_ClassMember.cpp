#include<iostream>
#include<cstring>
#include<vector>
#include<Windows.h>

#pragma warning(disable:4996)

using namespace std;




class Software
{
private:
	char* Software_Name;				// Software 이름
	char* Software_Num;				// Software 품번
	char* Software_Searial;			// Software 시리얼번호
public:
	Software() { }
	Software(const char* aSoftware_Name, const char* aSoftware_Num, const char* aSoftware_Searial)
	{
		Software_Name = new char[strlen(aSoftware_Name) + 1];
		strcpy(Software_Name, aSoftware_Name);

		Software_Num = new char[strlen(aSoftware_Num) + 1];
		strcpy(Software_Num, aSoftware_Num);

		Software_Searial = new char[strlen(aSoftware_Searial) + 1];
		strcpy(Software_Searial, aSoftware_Searial);
	}

	void print_software_Info()
	{
		cout << " < SoftWare Info > " << endl;
		cout << this->Software_Name << endl;
		cout << this->Software_Num << endl;
		cout << this->Software_Searial << endl << endl;
	}
};

class Power
{
private:
	char* Power_Name;				// Power 이름
	char* Power_Num;				// Power 품번
	char* Power_Searial;			// Power 시리얼번호
public:
	Power() { }
	Power(const char* aPower_Name, const char* aPower_Num, const char* aPower_Searial)
	{
		Power_Name = new char[strlen(aPower_Name) + 1];
		strcpy(Power_Name, aPower_Name);

		Power_Num = new char[strlen(aPower_Num) + 1];
		strcpy(Power_Num, aPower_Num);

		Power_Searial = new char[strlen(aPower_Searial) + 1];
		strcpy(Power_Searial, aPower_Searial);
	}

	void print_Power_Info()
	{
		cout << " < Power Info > " << endl;
		cout << this->Power_Name << endl;
		cout << this->Power_Num << endl;
		cout << this->Power_Searial << endl << endl;
	}
};

class Case
{
private:
	char* Case_Name;				// Case 이름
	char* Case_Num;				// Case 품번
	char* Case_Searial;			// Case 시리얼번호
public:
	Case() { }
	Case(const char* aCase_Name, const char* aCase_Num, const char* aCase_Searial)
	{
		Case_Name = new char[strlen(aCase_Name) + 1];
		strcpy(Case_Name, aCase_Name);

		Case_Num = new char[strlen(aCase_Num) + 1];
		strcpy(Case_Num, aCase_Num);

		Case_Searial = new char[strlen(aCase_Searial) + 1];
		strcpy(Case_Searial, aCase_Searial);
	}

	void print_Case_Info()
	{
		cout << " < Case Info > " << endl;
		cout << this->Case_Name << endl;
		cout << this->Case_Num << endl;
		cout << this->Case_Searial << endl << endl;
	}
};

class SSD
{
private:
	char* SSD_Name;				// SSD 이름
	char* SSD_Num;				// SSD 품번
	char* SSD_Searial;			// SSD 시리얼번호
public:
	SSD() { }
	SSD(const char* aSSD_Name, const char* aSSD_Num, const char* aSSD_Searial)
	{
		SSD_Name = new char[strlen(aSSD_Name) + 1];
		strcpy(SSD_Name, aSSD_Name);

		SSD_Num = new char[strlen(aSSD_Num) + 1];
		strcpy(SSD_Num, aSSD_Num);

		SSD_Searial = new char[strlen(aSSD_Searial) + 1];
		strcpy(SSD_Searial, aSSD_Searial);
	}

	void print_SSD_Info()
	{
		cout << " < SSD Info > " << endl;
		cout << this->SSD_Name << endl;
		cout << this->SSD_Num << endl;
		cout << this->SSD_Searial << endl << endl;
	}
};

class HDD
{
private:
	char* HDD_Name;				// HDD 이름
	char* HDD_Num;				// HDD 품번
	char* HDD_Searial;			// HDD 시리얼번호
public:
	HDD() { }
	HDD(const char* aHDD_Name, const char* aHDD_Num, const char* aHDD_Searial)
	{
		HDD_Name = new char[strlen(aHDD_Name) + 1];
		strcpy(HDD_Name, aHDD_Name);

		HDD_Num = new char[strlen(aHDD_Num) + 1];
		strcpy(HDD_Num, aHDD_Num);

		HDD_Searial = new char[strlen(aHDD_Searial) + 1];
		strcpy(HDD_Searial, aHDD_Searial);
	}

	void print_HDD_Info()
	{
		cout << " < HDD Info > " << endl;
		cout << this->HDD_Name << endl;
		cout << this->HDD_Num << endl;
		cout << this->HDD_Searial << endl << endl;
	}
};

class Memorry
{
private:
	char* Memorry_Name;				// Memorry 이름
	char* Memorry_Num;				// Memorry 품번
	char* Memorry_Searial;			// Memorry 시리얼번호
public:
	Memorry() { }
	Memorry(const char* aMemorry_Name, const char* aMemorry_Num, const char* aMemorry_Searial)
	{
		Memorry_Name = new char[strlen(aMemorry_Name) + 1];
		strcpy(Memorry_Name, aMemorry_Name);

		Memorry_Num = new char[strlen(aMemorry_Num) + 1];
		strcpy(Memorry_Num, aMemorry_Num);

		Memorry_Searial = new char[strlen(aMemorry_Searial) + 1];
		strcpy(Memorry_Searial, aMemorry_Searial);
	}

	void print_Memorry_Info()
	{
		cout << " < Memorry Info > " << endl;
		cout << this->Memorry_Name << endl;
		cout << this->Memorry_Num << endl;
		cout << this->Memorry_Searial << endl << endl;
	}
};

class MB
{
private:
	char* MB_Name;				// MB 이름
	char* MB_Num;				// MB 품번
	char* MB_Searial;			// MB 시리얼번호
public:
	MB() { }
	MB(const char* aMB_Name, const char* aMB_Num, const char* aMB_Searial)
	{
		MB_Name = new char[strlen(aMB_Name) + 1];
		strcpy(MB_Name, aMB_Name);

		MB_Num = new char[strlen(aMB_Num) + 1];
		strcpy(MB_Num, aMB_Num);

		MB_Searial = new char[strlen(aMB_Searial) + 1];
		strcpy(MB_Searial, aMB_Searial);
	}
	void print_MB_Info()
	{
		cout << " < MB Info > " << endl;
		cout << this->MB_Name << endl;
		cout << this->MB_Num << endl;
		cout << this->MB_Searial << endl << endl;
	}
};


class CPU
{
private:
	char* CPU_Name;				// CPU 이름
	char* CPU_Num;				// CPU 품번
	char* CPU_Searial;			// CPU 시리얼번호
public:
	CPU() { }
	CPU(const char* aCPU_Name, const char* aCPU_Num, const char* aCPU_Searial)
	{
		CPU_Name = new char[strlen(aCPU_Name) + 1];
		strcpy(CPU_Name, aCPU_Name);

		CPU_Num = new char[strlen(aCPU_Num) + 1];
		strcpy(CPU_Num, aCPU_Num);

		CPU_Searial = new char[strlen(aCPU_Searial) + 1];
		strcpy(CPU_Searial, aCPU_Searial);
	}
	void print_cpu_Info()
	{
		cout << " cpu Info " << endl;
		cout << this->CPU_Name << endl;
		cout << this->CPU_Num << endl;
		cout << this->CPU_Searial << endl;
	}
};

class product2 : public CPU, public MB, public Memorry, public HDD, public SSD, public Case, public Power, public Software
{
private:
	char* Product_Searial;
	CPU* cpu;
	MB* mb;
	Memorry* ram;
	HDD* hdd;
	SSD* ssd;
	Case* pc_case;
	Power* pow;
	Software* software_os;

public:
	product2(const char* aProduct_Searial, CPU acpu, MB amb, Memorry aram, HDD ahdd, SSD assd, Power apow, Case apc_case, Software asoftware_os)
		//:cpu(acpu) mb(amb), ram(aram), hdd(ahdd), ssd(assd), pc_case(apc_case), pow(apow), software_os(asoftware_os)
	{
		cpu = new CPU(acpu);
		mb = new MB(amb);
		ram = new Memorry(aram);
		hdd = new HDD(ahdd);
		ssd = new SSD(assd);
		pc_case = new Case(apc_case);
		pow = new Power(apow);
		software_os = new Software(asoftware_os);

		Product_Searial = new char[strlen(aProduct_Searial) + 1];
		strcpy(Product_Searial, aProduct_Searial);
	}

	void Print_produt()
	{
		cpu->print_cpu_Info();
		mb->print_MB_Info();
		ram->print_Memorry_Info();
		hdd->print_HDD_Info();
		ssd->print_SSD_Info();
		pc_case->print_Case_Info();
		pow->print_Power_Info();
		software_os->print_software_Info();
	}

};


int main(void)
{
	// 샘플데이터
	CPU cpu1("CPU1", "CPU001", "20220330-CP1-001");
	MB mb1("MB1", "MB001", "20220330-MB1-001");
	Memorry ram1("ram1", "ram001", "20220330-ram1-001");
	HDD hdd1("hdd1", "hdd001", "20220330-hdd1-001");
	SSD ssd1("ssd1", "ssd001", "20220330-ssd1-001");
	Power pow1("pow1", "pow001", "20220330-pow1-001");
	Case case1("case1", "case1001", "20220330-case1-001");
	Software os1("os1", "os1001", "20220330-os1-001");
	
	int Num_product = 0;

	product2* stub[100];

	stub[0] = new product2("PC02", cpu1, mb1, ram1, hdd1, ssd1, pow1, case1, os1);
	stub[0]->Print_produt();

	return 0;
}
