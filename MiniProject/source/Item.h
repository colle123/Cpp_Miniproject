#ifndef __ITEM_H__
#define __ITEM_H__

#include<iostream>
#include<cstring>
#include<vector>
#include<Windows.h>

#pragma warning(disable:4996)

using namespace std;

class Software
{
private:
	char* Software_Name;			// Software 이름
	char* Software_Num;				// Software 품번
	char* Software_Searial;			// Software 시리얼번호
public:
	Software() { };
	Software(const char* aSoftware_Name, const char* aSoftware_Num, const char* aSoftware_Searial);
	void print_software_Info() const;
};

class Power
{
private:
	char* Power_Name;				// Power 이름
	char* Power_Num;				// Power 품번
	char* Power_Searial;			// Power 시리얼번호
public:
	Power() { };
	Power(const char* aPower_Name, const char* aPower_Num, const char* aPower_Searial);
	void print_Power_Info() const;
};

class Case
{
private:
	char* Case_Name;				// Case 이름
	char* Case_Num;				// Case 품번
	char* Case_Searial;			// Case 시리얼번호
public:
	Case() { };
	Case(const char* aCase_Name, const char* aCase_Num, const char* aCase_Searial);
	void print_Case_Info() const;
};

class SSD
{
private:
	char* SSD_Name;				// SSD 이름
	char* SSD_Num;				// SSD 품번
	char* SSD_Searial;			// SSD 시리얼번호
public:
	SSD() { };
	SSD(const char* aSSD_Name, const char* aSSD_Num, const char* aSSD_Searial);

	void print_SSD_Info() const;

};

class HDD
{
private:
	char* HDD_Name;				// HDD 이름
	char* HDD_Num;				// HDD 품번
	char* HDD_Searial;			// HDD 시리얼번호
public:
	HDD() { };
	HDD(const char* aHDD_Name, const char* aHDD_Num, const char* aHDD_Searial);
	void print_HDD_Info() const;
};

class Memorry
{
private:
	char* Memorry_Name;				// Memorry 이름
	char* Memorry_Num;				// Memorry 품번
	char* Memorry_Searial;			// Memorry 시리얼번호
public:
	Memorry() { };
	Memorry(const char* aMemorry_Name, const char* aMemorry_Num, const char* aMemorry_Searial);
	void print_Memorry_Info() const;
};

class MB
{
private:
	char* MB_Name;				// MB 이름
	char* MB_Num;				// MB 품번
	char* MB_Searial;			// MB 시리얼번호
public:
	MB() { }
	MB(const char* aMB_Name, const char* aMB_Num, const char* aMB_Searial);
	void print_MB_Info() const;
};


class CPU
{
private:
	char* CPU_Name;				// CPU 이름
	char* CPU_Num;				// CPU 품번
	char* CPU_Searial;			// CPU 시리얼번호
public:
	CPU() { }
	CPU(const char* aCPU_Name, const char* aCPU_Num, const char* aCPU_Searial);
	void print_cpu_Info() const;
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
	product2(const char* aProduct_Searial, CPU& acpu, MB& amb, Memorry& aram, HDD& ahdd, SSD& assd, Power& apow, Case& apc_case, Software& asoftware_os);
	void Print_produt() const;
};





#endif 
