//
//#include"handler.h"
//#include"Item.h"
//
//
//	void Handler::Menu_ManufacturePlanning()
//	{
//		
//		int option;
//		while (1)
//		{
//			cout << "==============생산계획==============" << endl;
//			cout << "(1) 생산계획 추가" << endl;
//			cout << "(2)생산 계획 삭제" << endl;
//			cout << "(3)생산 계획 조회" << endl;
//			cout << "(4)뒤 로 가 기" << endl;
//
//			cin >> option;
//			if (option == 1)
//				Add_ManufacturePlanning();
//			else if (option == 2)
//				Delete_ManufacturePlanning();
//			else if (option == 3)
//				Show_ManufacturePlanning();
//			else
//			{
//				cout << "잘못입력" << endl;
//				break;
//			}
//		}
//	}
//
//	void Handler:: Add_ManufacturePlanning()				//(BOM에서 시리얼번호 받아옴)
//	{
//		string sirial;
//		int date;
//		int amount;
//		string model;
//
//		//제품 받아와서 선택
//		cout << "===========================생산계획=============================" << endl;
//		///BOM에서 받아와 부품 리스트 출력
//
//		cout << "생산할 Srial번호를 입력하세요 : "; cin >> sirial;
//		//생산할 날짜, 개수 입력
//		cout << "생산할 날짜를 입력하세요 : "; cin >> date;
//		cout << "생산할 개수를 입력하세요 : "; cin >> amount;
//		cout << "생산할 모델을 선택해주세요 : "; cin >> model;
//
//		stub[Num_Memproduct++] = new Plan(sirial, date, amount);
//		stub[0]->Print_Plan();
//
//		//handler에 넘겨줄 생산계획 배열 생성
//	}
//
//	void Handler::Show_ManufacturePlanning()              //모든 계획 출력
//	{
//		cout << "-------------------------" << endl;
//		for (int i = 0; i < Num_Memproduct; i++)
//			stub[i]->Print_Plan();
//		cout << "-------------------------" << endl;
//	}
//
//	void Handler::Delete_ManufacturePlanning()
//	{
//		string sirial;
//		cout << "시리얼을 입력하세요" << endl;
//		cin >> sirial;
//
//		for (int i = 0; i < Num_Memproduct; i++)
//		{
//			if (sirial == stub[i]->getMemSrial())
//			{
//				delete stub[i];						//생산게획 시리얼 검색하여 삭제
//				for (int j = i; j < Num_Memproduct; j++)
//				{
//					stub[j] = stub[j + 1];			//삭제된 배열 뒤에 있는 배열을 한칸 앞으로 삽임
//				}
//				Num_Memproduct--;
//				cout << "계획을 삭제했습니다." << endl;
//				return;
//			}
//		}
//		cout << "해당 계획이 없습니다." << endl;
//	}
//
//	///////////////////////////////////////////////////////////bom코드, 생산계획코드, 개수 리턴
//
//
