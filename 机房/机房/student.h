#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"Identity.h"
#include"globalFile.h"
#include"computerRoom.h"
#include"orderFile.h"
using namespace std;



class Student : public Identity {
public:
	//默认构造
	Student();

	//有参构造  参数：学号，姓名，密码
	Student(int id, string name, string pwd);

	//菜单 
	void operMenu();

	//申请预约
	void applyOrder();

	//查看自己的预约
	void showMyOrder();

	//查看所有预约
	void showAllorder();

	//取消预约 
	void cancelOrder();

	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom> vCom;


};