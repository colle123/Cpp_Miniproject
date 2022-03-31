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
	string Software_Name;           // Software 이름
	string Software_Num;            // Software 품번
	string Software_Searial;        // Software 시리얼번호
	int proc;                       //작업 공정
public:
	Software() { };
	Software(string aSoftware_Name, string aSoftware_Num, string aSoftware_Searial, int proc = 1);
	void print_software_Info() const;

};

class Power
{
private:
	string Power_Name;           // Power 이름
	string Power_Num;            // Power 품번
	string Power_Searial;        // Power 시리얼번호
	int proc;                    //작업 공정
public:
	Power() { };
	Power(string aPower_Name, string aPower_Num, string aPower_Searial, int proc = 2);
	void print_Power_Info() const;
	Power& power_return();
};

class Case
{
private:
	string Case_Name;            // Case 이름
	string Case_Num;             // Case 품번
	string Case_Searial;         // Case 시리얼번호
	int proc;                    //작업 공정
public:
	Case() { };
	Case(string aCase_Name, string aCase_Num, string aCase_Searial, int proc = 3);
	void print_Case_Info() const;
	Case& case_return();
};

class SSD
{
private:
	string SSD_Name;            // SSD 이름
	string SSD_Num;             // SSD 품번
	string SSD_Searial;         // SSD 시리얼번호
	int proc;                   //작업 공정  
public:
	SSD() { };
	SSD(string aSSD_Name, string aSSD_Num, string aSSD_Searial, int proc = 4);
	void print_SSD_Info() const;
	SSD& ssd_return();
};

class HDD
{
private:
	string HDD_Name;            // HDD 이름
	string HDD_Num;             // HDD 품번
	string HDD_Searial;         // HDD 시리얼번호
	int proc;                   //작업 공정
public:
	HDD() { };
	HDD(string aHDD_Name, string aHDD_Num, string aHDD_Searial, int proc = 5);
	void print_HDD_Info() const;
	HDD& hdd_return();
};

class Memorry
{
private:
	string Memorry_Name;           // Memorry 이름
	string Memorry_Num;             // Memorry 품번
	string Memorry_Searial;         // Memorry 시리얼번호
	int proc;                       //작업 공정
public:
	Memorry() { };
	Memorry(string aMemorry_Name, string aMemorry_Num, string aMemorry_Searial, int proc = 6);
	void print_Memorry_Info() const;
	Memorry& Memorry_return();
};

class MB
{
private:
	string MB_Name;            // MB 이름
	string MB_Num;             // MB 품번
	string MB_Searial;         // MB 시리얼번호
	int proc;                  //작업 공정
public:
	MB() { }
	MB(string aMB_Name, string aMB_Num, string aMB_Searial, int proc = 7);
	void print_MB_Info() const;
	MB& MB_return();
};


class CPU
{
private:
	string CPU_Name;              // CPU 이름
	string CPU_Num;               // CPU 품번
	string CPU_Searial;           // CPU 시리얼번호
	int proc;                     //작업 공정
public:
	CPU() { }
	CPU(string aCPU_Name, string aCPU_Num, string aCPU_Searial, int proc = 8);
	void print_cpu_Info() const;
	CPU& CPU_return();
};


class BOM 
{
private:
	string Product_Searial;
	CPU* cpu;
	MB* mb;
	Memorry* ram;
	HDD* hdd;
	SSD* ssd;
	Case* pc_case;
	Power* pow;
	Software* software_os;

public:
	BOM();
	BOM(string aProduct_Searial, CPU acpu, MB amb, Memorry aram, HDD ahdd, SSD assd, Power apow, Case apc_case, Software asoftware_os);
	void Print_produt() const;
};





#endif 
