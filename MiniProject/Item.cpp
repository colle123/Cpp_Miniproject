#include"Item.h"

// Software

//Software::Software() { }
Software::Software(const char* aSoftware_Name, const char* aSoftware_Num, const char* aSoftware_Searial)
{
	Software_Name = new char[strlen(aSoftware_Name) + 1];
	strcpy(Software_Name, aSoftware_Name);

	Software_Num = new char[strlen(aSoftware_Num) + 1];
	strcpy(Software_Num, aSoftware_Num);

	Software_Searial = new char[strlen(aSoftware_Searial) + 1];
	strcpy(Software_Searial, aSoftware_Searial);
}

void Software::print_software_Info() const
{
	cout << " < SoftWare Info > " << endl;
	cout << this->Software_Name << endl;
	cout << this->Software_Num << endl;
	cout << this->Software_Searial << endl << endl;
}

// Power

//Power::Power() { }
Power::Power(const char* aPower_Name, const char* aPower_Num, const char* aPower_Searial)
{
	Power_Name = new char[strlen(aPower_Name) + 1];
	strcpy(Power_Name, aPower_Name);

	Power_Num = new char[strlen(aPower_Num) + 1];
	strcpy(Power_Num, aPower_Num);

	Power_Searial = new char[strlen(aPower_Searial) + 1];
	strcpy(Power_Searial, aPower_Searial);
}

void Power::print_Power_Info() const
{
	cout << " < Power Info > " << endl;
	cout << this->Power_Name << endl;
	cout << this->Power_Num << endl;
	cout << this->Power_Searial << endl << endl;
}


// Case

//Case::Case() { }
Case::Case(const char* aCase_Name, const char* aCase_Num, const char* aCase_Searial)
{
	Case_Name = new char[strlen(aCase_Name) + 1];
	strcpy(Case_Name, aCase_Name);

	Case_Num = new char[strlen(aCase_Num) + 1];
	strcpy(Case_Num, aCase_Num);

	Case_Searial = new char[strlen(aCase_Searial) + 1];
	strcpy(Case_Searial, aCase_Searial);
}

void Case::print_Case_Info() const
{
	cout << " < Case Info > " << endl;
	cout << this->Case_Name << endl;
	cout << this->Case_Num << endl;
	cout << this->Case_Searial << endl << endl;
}


// SSD

//SSD::SSD() { }
SSD::SSD(const char* aSSD_Name, const char* aSSD_Num, const char* aSSD_Searial)
{
	SSD_Name = new char[strlen(aSSD_Name) + 1];
	strcpy(SSD_Name, aSSD_Name);

	SSD_Num = new char[strlen(aSSD_Num) + 1];
	strcpy(SSD_Num, aSSD_Num);

	SSD_Searial = new char[strlen(aSSD_Searial) + 1];
	strcpy(SSD_Searial, aSSD_Searial);
}

void SSD::print_SSD_Info() const
{
	cout << " < SSD Info > " << endl;
	cout << this->SSD_Name << endl;
	cout << this->SSD_Num << endl;
	cout << this->SSD_Searial << endl << endl;
}


// HDD

//HDD::HDD() { }
HDD::HDD(const char* aHDD_Name, const char* aHDD_Num, const char* aHDD_Searial)
{
	HDD_Name = new char[strlen(aHDD_Name) + 1];
	strcpy(HDD_Name, aHDD_Name);

	HDD_Num = new char[strlen(aHDD_Num) + 1];
	strcpy(HDD_Num, aHDD_Num);

	HDD_Searial = new char[strlen(aHDD_Searial) + 1];
	strcpy(HDD_Searial, aHDD_Searial);
}

void HDD::print_HDD_Info() const
{
	cout << " < HDD Info > " << endl;
	cout << this->HDD_Name << endl;
	cout << this->HDD_Num << endl;
	cout << this->HDD_Searial << endl << endl;
}


// Memorry

//Memorry::Memorry() { }
Memorry::Memorry(const char* aMemorry_Name, const char* aMemorry_Num, const char* aMemorry_Searial)
{
	Memorry_Name = new char[strlen(aMemorry_Name) + 1];
	strcpy(Memorry_Name, aMemorry_Name);

	Memorry_Num = new char[strlen(aMemorry_Num) + 1];
	strcpy(Memorry_Num, aMemorry_Num);

	Memorry_Searial = new char[strlen(aMemorry_Searial) + 1];
	strcpy(Memorry_Searial, aMemorry_Searial);
}

void Memorry::print_Memorry_Info() const
{
	cout << " < Memorry Info > " << endl;
	cout << this->Memorry_Name << endl;
	cout << this->Memorry_Num << endl;
	cout << this->Memorry_Searial << endl << endl;
}


// MB

//MB::MB() { }
MB::MB(const char* aMB_Name, const char* aMB_Num, const char* aMB_Searial)
{
	MB_Name = new char[strlen(aMB_Name) + 1];
	strcpy(MB_Name, aMB_Name);

	MB_Num = new char[strlen(aMB_Num) + 1];
	strcpy(MB_Num, aMB_Num);

	MB_Searial = new char[strlen(aMB_Searial) + 1];
	strcpy(MB_Searial, aMB_Searial);
}
void MB::print_MB_Info() const
{
	cout << " < MB Info > " << endl;
	cout << this->MB_Name << endl;
	cout << this->MB_Num << endl;
	cout << this->MB_Searial << endl << endl;
}


// CPU

//CPU::CPU() { }
CPU::CPU(const char* aCPU_Name, const char* aCPU_Num, const char* aCPU_Searial)
{
	CPU_Name = new char[strlen(aCPU_Name) + 1];
	strcpy(CPU_Name, aCPU_Name);

	CPU_Num = new char[strlen(aCPU_Num) + 1];
	strcpy(CPU_Num, aCPU_Num);

	CPU_Searial = new char[strlen(aCPU_Searial) + 1];
	strcpy(CPU_Searial, aCPU_Searial);
}
void CPU::print_cpu_Info() const
{
	cout << " < CPU Info > " << endl;
	cout << this->CPU_Name << endl;
	cout << this->CPU_Num << endl;
	cout << this->CPU_Searial << endl << endl;
}


// product2


product2::product2(const char* aProduct_Searial, CPU& acpu, MB& amb, Memorry& aram, HDD& ahdd, SSD& assd, Power& apow, Case& apc_case, Software& asoftware_os)
	//:cpu(acpu) mb(amb), ram(aram), hdd(ahdd), ssd(assd), pc_case(apc_case), pow(apow), software_os(asoftware_os)
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

	Product_Searial = new char[strlen(aProduct_Searial) + 1];
	strcpy(Product_Searial, aProduct_Searial);
}

void product2::Print_produt() const
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