//파일이름: AccountHandler.cpp
//작성자: 이진우
//업데이트 정보: [2022. 03. 22] 파일버전 0.7
//내용 : Class별로 파일분할 -> 은행계좌관리프로그램2 프로젝트로 다시 작성

#ifndef __BANKING_COMMON_H__
#define __BANKING_COMMON_H__

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

//프로그램 사용자의 선택 메뉴
enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

//신용등급 추가
enum { LEVEL_A = 7, LEVEL_B = 4, LEVEL_C = 2 };

//계좌의 종류 추가
enum { NORMAL = 1, CREDIT = 2 };

#endif // !__BANKING_COMMON_H__