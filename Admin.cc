#pragma warning( disable : 4996)
#include<iostream>
#include<stdio.h>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include"Admin.h"
#include<math.h>
//#include"putin.h"
#include<iomanip>
using namespace std;
//void admin(Users_class *users,Commodity_class* commodity, Order_class*order,Bidlist_class*bidlist)
//{
	
//	int n;
//	cout << "请管理员选择操作O.O" << endl;
//	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//	cout << "1、查看所有商品2、搜索商品3、查看所有订单 4、查看所有用户5、删除用户6、下架商品7、注销" << endl;
//	cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//	n=cintnum(n);
//	while (n <= 7)
//	{
//		if (n == 1)
//		{
//			cout << "商品ID,   名称，        价格,      描述,               卖家ID,     上架时间，     商品状态" << endl;
//			Print_admincommodity(commodity);
//	    }
//		else if (n == 2)
//		{
//			Seek_adminCommodity(commodity);
//		}
//		else if (n == 3)
//		{
//			cout << "订单ID,  商品ID,      交易金额,    交易时间,             卖家ID,       买家ID,   状态" << endl;
//			Print_allorder(order);
//		}
//		else if (n == 4)
//		{
//			cout << "用户ID,  用户名,    密码,  联系方式,     地址,              钱包余额" << endl;
//			Print_alluser(users);
//		}
//		else if (n == 5)
//		{
//			Delete_User(users,commodity,order,bidlist);
			
//		}
//		else if (n == 6)
//		{
//			Deletegood(commodity);
//			//cout << commodity[1].get_condition()<<endl;
//		}
//		else if (n == 7)
//			return;
//		else cout << "请按要求操作!" << endl;
//		cout << "请管理员选择操作O.O" << endl;
//		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//		cout << "1、查看所有商品2、搜索商品3、查看所有订单 4、查看所有用户5、删除用户6、下架商品7、注销" << endl;
//		cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
//		 n=cintnum(n);
//	}
//}
//void Delete_User(Users_class *users,Commodity_class* commodity, Order_class*order,Bidlist_class*bidlist)
//{
//	char id[5];
//	cout << "请输入您想要删除的用户ID：";
//	strcpy(id,ccharstl4(id));
//	cout << "请确认您是否想要删除此用户" << endl;
//	int flag = 0;
//	int user_cnt=users->get_cnt();
//    int user_find;
//	for(int i=0;i<user_cnt;++i)
//	{
//		if (strcmp(id, users[i].get_userid()) == 0)
//		{
//			flag = 1;
//            user_find=i;
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//		cout << users[user_find].get_userid() << endl;
//		cout << users[user_find].get_username() << endl;
//		cout <<users[user_find].get_tele() << endl;
//		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//		cout << endl;
//		cout << "请确认是否删除（是-输入1；否-输入0）：";
//		int choose;
//		choose=cintnum(choose);
//		if (choose == 1)
//		{
//			users[user_find].set_status(1);
//			cout << "已删除";
//			write_users(users, "a.txt");
//			Admin_Deletegoods(commodity, id);
//			Admin_Deleteorder(order, id);
//			Admin_Deletebidlist(bidlist, id);
//		}
//		else
//			cout << "miss";
//	}
//	else
//		cout << "很抱歉，未找到指定用户" << endl;
//}
