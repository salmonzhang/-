#pragma once
#include<iostream>
#include<string>
using namespace std;

class Worker
{
public:
	//��ʾ������Ϣ
	virtual void showInfo() = 0;

	//��ȡ��λ����
	virtual string getDeptName() = 0;

	int m_Id = 0; //ְ�����

	string m_Name; //ְ������

	int m_DeptId = 0; //ְ�����ڲ������Ʊ��

};