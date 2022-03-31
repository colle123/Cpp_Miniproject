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
    Software() { }
    Software(string aSoftware_Name, string aSoftware_Num, string aSoftware_Searial, int proc = 1)
    {
        Software_Name = aSoftware_Name;
        Software_Num = aSoftware_Num;
        Software_Searial = aSoftware_Searial;
    }

    void print_software_Info() const
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
    string Power_Name;           // Power 이름
    string Power_Num;            // Power 품번
    string Power_Searial;        // Power 시리얼번호
    int proc;                    //작업 공정
public:
    Power() { }
    Power(string aPower_Name, string aPower_Num, string aPower_Searial, int proc = 2)
    {
        Power_Name = aPower_Name;
        Power_Num = aPower_Num;
        Power_Searial = aPower_Searial;
    }

    void print_Power_Info() const
    {
        cout << " < Power Info > " << endl;
        cout << this->Power_Name << endl;
        cout << this->Power_Num << endl;
        cout << this->Power_Searial << endl << endl;
    }
    Power& power_return()
    {
        return *this;
    }
};

class Case
{
private:
    string Case_Name;            // Case 이름
    string Case_Num;             // Case 품번
    string Case_Searial;         // Case 시리얼번호
    int proc;                    //작업 공정
public:
    Case() { }
    Case(string aCase_Name, string aCase_Num, string aCase_Searial, int proc = 3)
    {
        Case_Name = aCase_Name;
        Case_Num = aCase_Num;
        Case_Searial = aCase_Searial;
    }

    void print_Case_Info() const
    {
        cout << " < Case Info > " << endl;
        cout << this->Case_Name << endl;
        cout << this->Case_Num << endl;
        cout << this->Case_Searial << endl << endl;
    }
    Case& case_return()
    {
        return *this;
    }
};

class SSD
{
private:
    string SSD_Name;            // SSD 이름
    string SSD_Num;             // SSD 품번
    string SSD_Searial;         // SSD 시리얼번호
    int proc;                   //작업 공정  
public:
    SSD() { }
    SSD(string aSSD_Name, string aSSD_Num, string aSSD_Searial, int proc = 4)
    {
        SSD_Name = aSSD_Name;
        SSD_Num = aSSD_Num;
        SSD_Searial = aSSD_Searial;
    }

    void print_SSD_Info() const
    {
        cout << " < SSD Info > " << endl;
        cout << this->SSD_Name << endl;
        cout << this->SSD_Num << endl;
        cout << this->SSD_Searial << endl << endl;
    }
    SSD& ssd_return()
    {
        return *this;
    }
};

class HDD
{
private:
    string HDD_Name;            // HDD 이름
    string HDD_Num;             // HDD 품번
    string HDD_Searial;         // HDD 시리얼번호
    int proc;                   //작업 공정
public:
    HDD() { }
    HDD(string aHDD_Name, string aHDD_Num, string aHDD_Searial, int proc = 5)
    {
        HDD_Name = aHDD_Name;
        HDD_Num = aHDD_Num;
        HDD_Searial = aHDD_Searial;
    }

    void print_HDD_Info() const
    {
        cout << " < HDD Info > " << endl;
        cout << this->HDD_Name << endl;
        cout << this->HDD_Num << endl;
        cout << this->HDD_Searial << endl << endl;
    }
    HDD& hdd_return()
    {
        return *this;
    }
};

class Memorry
{
private:
    string* Memorry_Name;           // Memorry 이름
    string Memorry_Num;             // Memorry 품번
    string Memorry_Searial;         // Memorry 시리얼번호
    int proc;                       //작업 공정
public:
    Memorry() { }
    Memorry(string aMemorry_Name, string aMemorry_Num, string aMemorry_Searial, int proc = 6)
    {
        Memorry_Name = new string(aMemorry_Name);
        Memorry_Num = aMemorry_Num;
        Memorry_Searial = aMemorry_Searial;
    }

    void print_Memorry_Info() const
    {
        cout << " < Memorry Info > " << endl;
        cout << this->Memorry_Name << endl;
        cout << this->Memorry_Num << endl;
        cout << this->Memorry_Searial << endl << endl;
    }
    Memorry& Memorry_return()
    {
        return *this;
    }
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
    MB(string aMB_Name, string aMB_Num, string aMB_Searial, int proc = 7)
    {
        MB_Name = aMB_Name;
        MB_Num = aMB_Num;
        MB_Searial = aMB_Searial;
    }
    void print_MB_Info() const
    {
        cout << " < MB Info > " << endl;
        cout << this->MB_Name << endl;
        cout << this->MB_Num << endl;
        cout << this->MB_Searial << endl << endl;
    }
    MB& MB_return()
    {
        return *this;
    }
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
    CPU(string aCPU_Name, string aCPU_Num, string aCPU_Searial, int proc = 8)
    {
        CPU_Name = aCPU_Name;
        CPU_Num = aCPU_Num;
        CPU_Searial = aCPU_Searial;
    }
    void print_cpu_Info() const
    {
        cout << " < CPU Info > " << endl;
        cout << this->CPU_Name << endl;
        cout << this->CPU_Num << endl;
        cout << this->CPU_Searial << endl << endl;
    }
    CPU& CPU_return()
    {
        return *this;
    }
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
    BOM() { }
    
    BOM(string aProduct_Searial, CPU acpu, MB amb, Memorry aram, HDD ahdd, SSD assd, Power apow, Case apc_case, Software asoftware_os)
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
    void Print_produt() const
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
};

class POP {

private:
    BOM* aaa;

public:
    POP() { }

    POP(BOM& temp)
    {
        aaa = new BOM(temp);
    }

    void showpop() {
        aaa->Print_produt();
    }

};
class handler
{
private:
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

    POP *pop[100];
    int number = 0;

public:

    handler(){ }

	void makeSample()
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
	void makeBOM()
	{
		string name;
		int cpu_sel, mb_sel, ram_sel, hdd_sel, ssd_sel, pow_sel, case1_sel, os_sel;
		cout << "등록할 제품 이름을 입력해주세요: ";
		cin >> name;
		cout << "CPU를 선택해주세요: ";
		cin >> cpu_sel;
		cout << "M/B를 선택해주세요: ";
		cin >> mb_sel;
		cout << "Memory를 선택해주세요: ";
		cin >> ram_sel;
		cout << "HDD를 선택해주세요: ";
		cin >> hdd_sel;
		cout << "SSD를 선택해주세요: ";
		cin >> ssd_sel;
		cout << "POWER를 선택해주세요: ";
		cin >> pow_sel;
		cout << "CASE를 선택해주세요: ";
		cin >> case1_sel;
		cout << "OS를 선택해주세요: ";
		cin >> os_sel;
		temp[Num_product++] = new BOM(name, cpu[cpu_sel], mb[mb_sel], ram[ram_sel], hdd[hdd_sel], ssd[ssd_sel], pow[pow_sel], case1[case1_sel], os[os_sel]);
		temp1[Num_product1++] = BOM(name, cpu[cpu_sel], mb[mb_sel], ram[ram_sel], hdd[hdd_sel], ssd[ssd_sel], pow[pow_sel], case1[case1_sel], os[os_sel]);
        
        pop[number++] = new POP(temp1[0]);
       
	}
    void showBOM()
    {
        for (int i = 0; i < Num_product; i++) {
            /*temp[i]->Print_produt();*/
            pop[i]->showpop();
        }
    }

};

int main(void)
{
    handler handle;
	handle.makeSample();
	handle.makeBOM();
    handle.showBOM();
	return 0;
}
