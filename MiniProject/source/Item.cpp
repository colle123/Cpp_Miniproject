#include"Item.h"

// Software

Software::Software(string aSoftware_Name, string aSoftware_Num, string aSoftware_Searial, int proc = 1)
{
	Software_Name = aSoftware_Name;
	Software_Num = aSoftware_Num;
	Software_Searial = aSoftware_Searial;
}

void Software::print_software_Info() const
{
	cout << " < SoftWare Info > " << endl;
	cout << this->Software_Name << endl;
	cout << this->Software_Num << endl;
	cout << this->Software_Searial << endl << endl;
}

// Power

Power::Power(string aPower_Name, string aPower_Num, string aPower_Searial, int proc = 2)
{
	Power_Name = aPower_Name;
	Power_Num = aPower_Num;
	Power_Searial = aPower_Searial;
}

void Power::print_Power_Info() const
{
	cout << " < Power Info > " << endl;
	cout << this->Power_Name << endl;
	cout << this->Power_Num << endl;
	cout << this->Power_Searial << endl << endl;
}
Power& Power::power_return()
{
	return *this;
}

// Case

Case::Case(string aCase_Name, string aCase_Num, string aCase_Searial, int proc = 3)
{
	Case_Name = aCase_Name;
	Case_Num = aCase_Num;
	Case_Searial = aCase_Searial;
}

void Case::print_Case_Info() const
{
	cout << " < Case Info > " << endl;
	cout << this->Case_Name << endl;
	cout << this->Case_Num << endl;
	cout << this->Case_Searial << endl << endl;
}
Case& Case::case_return()
{
	return *this;
}

// SSD

SSD::SSD(string aSSD_Name, string aSSD_Num, string aSSD_Searial, int proc = 4)
{
	SSD_Name = aSSD_Name;
	SSD_Num = aSSD_Num;
	SSD_Searial = aSSD_Searial;
}

void SSD::print_SSD_Info() const
{
	cout << " < SSD Info > " << endl;
	cout << this->SSD_Name << endl;
	cout << this->SSD_Num << endl;
	cout << this->SSD_Searial << endl << endl;
}
SSD& SSD::ssd_return()
{
	return *this;
}


// HDD

HDD::HDD(string aHDD_Name, string aHDD_Num, string aHDD_Searial, int proc = 5)
{
	HDD_Name = aHDD_Name;
	HDD_Num = aHDD_Num;
	HDD_Searial = aHDD_Searial;
}

void HDD::print_HDD_Info() const
{
	cout << " < HDD Info > " << endl;
	cout << this->HDD_Name << endl;
	cout << this->HDD_Num << endl;
	cout << this->HDD_Searial << endl << endl;
}
HDD& HDD::hdd_return()
{
	return *this;
}

// Memorry

Memorry::Memorry(string aMemorry_Name, string aMemorry_Num, string aMemorry_Searial, int proc = 6)
{
	Memorry_Name = aMemorry_Name;
	Memorry_Num = aMemorry_Num;
	Memorry_Searial = aMemorry_Searial;
}

void Memorry::print_Memorry_Info() const
{
	cout << " < Memorry Info > " << endl;
	cout << this->Memorry_Name << endl;
	cout << this->Memorry_Num << endl;
	cout << this->Memorry_Searial << endl << endl;
}
Memorry& Memorry::Memorry_return()
{
	return *this;
}

// MB

MB::MB(string aMB_Name, string aMB_Num, string aMB_Searial, int proc = 7)
{
	MB_Name = aMB_Name;
	MB_Num = aMB_Num;
	MB_Searial = aMB_Searial;
}
void MB::print_MB_Info() const
{
	cout << " < MB Info > " << endl;
	cout << this->MB_Name << endl;
	cout << this->MB_Num << endl;
	cout << this->MB_Searial << endl << endl;
}
MB& MB::MB_return()
{
	return *this;
}


// CPU

CPU::CPU(string aCPU_Name, string aCPU_Num, string aCPU_Searial, int proc = 8)
{
	CPU_Name = aCPU_Name;
	CPU_Num = aCPU_Num;
	CPU_Searial = aCPU_Searial;
}
void CPU::print_cpu_Info() const
{
	cout << " < CPU Info > " << endl;
	cout << this->CPU_Name << endl;
	cout << this->CPU_Num << endl;
	cout << this->CPU_Searial << endl << endl;
}

CPU& CPU::CPU_return()
{
	return *this;
}



// BOM

BOM::BOM() {}

BOM::BOM(string aProduct_Searial, CPU acpu, MB amb, Memorry aram, HDD ahdd, SSD assd, Power apow, Case apc_case, Software asoftware_os)
{
	// 멤버변수가 포인터 이므로 얘들이 가리킬 녀석을 임시로 만들어줘야함
	cpu = new CPU(acpu);
	mb = new MB(amb);
	ram = new Memorry(aram);
	hdd = new HDD(ahdd);
	ssd = new SSD(assd);
	pc_case = new Case(apc_case);
	pow = new Power(apow);
	software_os = new Software(asoftware_os);

	Product_Searial = aProduct_Searial;
}

void BOM::Print_produt() const
{
	// 각 클래스의 멤버는 private이므로 해당 클래스에서 함수로 접근해야 멤버의 값을 참조가능
	// 즉, print_cpu_Info();를 그냥 쓰면 '< SoftWare Info >' 여기까지 출력후 멤버내 값 조회가 불가능!
	cpu->print_cpu_Info();
	mb->print_MB_Info();
	ram->print_Memorry_Info();
	hdd->print_HDD_Info();
	ssd->print_SSD_Info();
	pc_case->print_Case_Info();
	pow->print_Power_Info();
	software_os->print_software_Info();
}
