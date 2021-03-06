//파일이름: Account.h
//작성자: 이진우
//업데이트 정보: [2022. 03. 24] 파일버전 0.9

#ifndef __ACCOUNT_H__
#define __ACCOUNT_H__

#include "String.h"

class Account
{
private:
	int accID;
	int balance;
	String cusName;  //char* cusName을 수정
public:
	Account(int ID, int money, String name);
	//Account(int ID, int money, char* name);
	//Account(const Account& ref);
	//Account& operator=(const Account& ref);      //추가된 문장

	int GetAccID() const;
	virtual void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
	//~Account();
};
#endif // !__ACCOUNT_H__