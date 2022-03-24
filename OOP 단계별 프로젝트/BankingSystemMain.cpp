//소프트웨어 버전: Banking System Ver 0.7
//파일이름: BankingSystemMain.cpp
//작성자: 이진우
//업데이트 정보: [2022. 03. 22] 파일버전 0.7
//내용 : Class별로 파일분할 -> 은행계좌관리프로그램2 프로젝트로 다시 작성

#include "BankingCommonDecl.h"
#include "AccountHandler.h"

int main(void)
{
	AccountHandler manager;
	int choice;

	while (1)
	{
		manager.ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE:
			manager.MakeAccount();
			break;
		case DEPOSIT:
			manager.DepositMoney();
			break;
		case WITHDRAW:
			manager.WithdrawMoney();
			break;
		case INQUIRE:
			manager.ShowAllAccInfo();
			break;
		case EXIT:
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}
	}
	return 0;
}