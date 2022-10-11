#pragma warning( disable : 4996)
#include<iostream>
#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include"Users.h"
//#include"putin.h"
#include<math.h>
#include<iomanip>
//#include"PIM.h"
using namespace std;
int a = 1;

int Users_class::users_cnt=0;
//void User_register(Users_class*users)//用户注册
//{
//	char user_id[10];
//	if (a < 10)
//	{
//		char d[15] = { 'U','0','0' };
//		char c[5];
//		//itoa(a, c, 10);
//		sprintf(c,"%d",a);
//		strcat(d, c);
//		strcpy(user_id, d);
		
//	}
	
//	else
//		if (a >= 10 && a < 100)
//		{
//			char d[15] = { 'U','0'};
//			char c[5];
//			//itoa(a, c, 10);
//			sprintf(c,"%d",a);
//			strcat(d, c);
//			strcpy(user_id, d);
//		}
//		else
//			if (a >= 100 && a < 1000)
//			{
//				char d[15] = { 'U' };
//				char c[5];
//				//itoa(a, c, 10);
//				sprintf(c,"%d",a);
//				strcat(d, c);
//				strcpy(user_id, d);
//			}
//	++a;//分配用户ID
//	char stl2[100], stl3[100], stl4[100], stl5[100];//用户名，密码，联系方式，地址
//	cout << "请设置您的用户名（请勿写入逗号）：";
//	strcpy(stl2,ccharstl10(stl2));
//	int flag = 0;
//	int users_cnt=users->get_cnt();
//	while (1>0)
//	{
	
//	for (int i=0;i<users_cnt;++i)
//		{
//			if (strcmp(users[i].get_username(), stl2) == 0 && users[i].get_status()==0)//验证用户名是否重复，若重复需要用户重新输入
//				flag = 1;

//		}
//		if (flag == 0)
//			break;
//		else
//		{
//			cout << "用户名重复，请重新输入：";
//		    strcpy(stl2,ccharstl10(stl2));
//			flag = 0;
//		}
//	}
//	cout << "请设置密码：";
//	strcpy(stl3,ccharstl10(stl3));
//	cout << "请输入您的联系方式：";
//	strcpy(stl4,cchartele(stl4));
//	cout << "请输入您的地址（请勿写入逗号）";//如果写入逗号
//	strcpy(stl5,ccharstl10(stl5));
//	//if (check(stl5) == 1 || check(stl2) == 1)
//	//{
//	//	cout << "让你不要输入逗号了你还输，不给你注册了！" << endl;
//	//	return;
//	//}
//    users[users_cnt].set_user(user_id,stl2,stl3,stl4,stl5,0,0);
//	users->add_cnt();
	
//	write_users(users, "a.txt");
//}
//char* name_id(Users_class* users,char name[15])
//{
//	int user_cnt=users->get_cnt();
//	for(int i=0;i<user_cnt;++i)
//	{
//		if(strcmp(users[i].get_username(),name)==0)
//		return users[i].get_userid();
//	}
//}
//void Users(Users_class *users,Commodity_class* commodity, Order_class*order,Bidlist_class*bidlist,char name[15],char key[21])
//{
	    
//		int n;
//		cout << "请用户选择操作O.O" << endl;
//		cout << "////////////////////////////////////////////////" << endl;
//		cout << "1、注销登录2、我是买家3、我是卖家 4、个人信息管理" << endl;
//		cout << "////////////////////////////////////////////////" << endl;
//		int user_num=0;
//		int max_num=users[0].get_cnt();
//		//cout<<"num:"<<max_num<<endl;
//		int find_user=0;
//		while(user_num<max_num)
//		{
//			//cout <<"id:"<<users[user_num].get_username()<<endl;
//			if(strcmp(name,users[user_num].get_username())==0)
//		    {
//				find_user=1;
//				if(strcmp(key,users[user_num].get_key())==0)
//				{
//					if(users[user_num].get_balance()<0)
//					{
//						cout << "您的余额为负数，请您充值之后再进行操作！" << endl;
//						return;
//					}
//					else
//					{
//                        n=cintnum(n);
//						break;
//					}
//				}
//				else
//					{
//						cout << "密码错误，退出登录";
//						return;
//					}
//			}
//            ++user_num;
//		}
//		if(find_user==0)
//		{
//			cout << "用户不存在"<<endl;
//		}
//		while (n > 4 || n < 0)//若用户没有按规定输入1/2/3/4则需要重新输入
//		{
//			cout << "选择失败，没有此选项，请重新输入：";
//			n=cintnum(n);
//		}
//		while (n <= 4)
//		{
//			if (n == 1)//注销登录
//			{
//				return;
//			}
//			else if (n == 2)//买家
//			{
//				cout <<"bingo～"<<name<<"好久不见！"<<endl;
//				buyer_user(users,commodity,order,bidlist,name);
//			}
//			else if (n == 3)//卖家
//			{

//				seller_user(users,commodity,order,name);

//			}
//			else if (n == 4)//个人信息管理
//			{

//				person(users, commodity, order, name);

//			}
//			else
//				cout << "操作违规！请您输入1-4之间的数字！" << endl;
//			cout << "请用户选择操作O.O" << endl;
//			cout << "////////////////////////////////////////////////" << endl;
//			cout << "1、注销登录2、我是买家3、我是卖家 4、个人信息管理" << endl;
//			cout << "////////////////////////////////////////////////" << endl;
//			n=cintnum(n);
//			while (n > 4 || n < 0)
//			{
//				cout << "选择失败，没有此选项，请重新输入：";
//				n=cintnum(n);
//			}
//		}
	
//}

//int idname_match(Users_class*users,char* name,char*key)
//{
//		int user_cnt=users->get_cnt();
//	for(int i=0;i<user_cnt;++i)
//	{
//		if(strcmp(users[i].get_username(),name)==0&&strcmp(key,users[i].get_key())==0)
//		return 1;
//	}
//	return 0;
//}
void write_users(Users_class*users)
{
    FILE* fp1 = fopen("/home/ytlp/Desktop/bidpf/a.txt", "w");

    if (fp1 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }
    int users_cnt=users->get_cnt();
    fprintf(fp1, "%s,%s,%s,%s,%s,%s,%s\n", "user_id","user_name","key",  "tele", "location","balance", "status");
    for (int i=0;i<users_cnt;++i)
    {
        fprintf(fp1, "%s,%s,%s,%s,%s,%.1f,%d\n", users[i].get_userid(),  users[i].get_username(),  users[i].get_key(),  users[i].get_tele(),  users[i].get_location(), users[i].get_balance(), users[i].get_status());
    }
    fclose(fp1);
}
//void Print_alluser(Users_class *users)
//{
//	int user_cnt=users->get_cnt();
//	for(int i=0;i<user_cnt;++i)
//	{
//		cout << users[i].get_userid() << setw(8)<<users[i].get_username() << setw(8)  <<fixed << setprecision(1)<< users[i].get_key() << setw(20) << users[i].get_tele() << setw(20) << users[i].get_location() << setw(12) << users[i].get_balance() << setw(6) <<endl;
//	}
//}
void read_user(Users_class *users)
{
    FILE* fp1 = fopen("/home/ytlp/Desktop/bidpf/a.txt", "r");
	char word[201];
	if (fp1 == NULL)
	{
		puts("Could not open files");
		exit(0);
	}
	int result;
	char stl1[100], stl2[100], stl3[100], stl4[100], stl5[100],stl6[100],stl7[100];
	char userid[7];
    a=1;
	fscanf(fp1, "%200s", &word);
	while (!feof(fp1))
	{
		if (fscanf(fp1, "%200s", &word) != EOF)
		{
			int cnt=users->get_cnt();
			result = sscanf(word, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s", stl1, stl2, stl3, stl4, stl5, stl6,stl7);
			double ni = atof(stl6);
			int sta = atoi(stl7);
			strcpy(userid, stl1);
			if (a < 10)
			{
				char b[15] = { 'U','0','0'};
				char c[5];
				//itoa(a, c, 10);
				sprintf(c,"%d",a);
				strcat(b, c);
				strcpy(userid, b);
			}
			else
				if (a >= 10 && a < 100)
				{
					char b[15] = { 'U','0',};
					char c[5];
					//itoa(a, c, 10);
					sprintf(c,"%d",a);
					strcat(b, c);
					strcpy(userid, b);
				}
				else
					if(a>=100&& a < 1000)
					{
						char b[15] = { 'U' };
						char c[5];
						//itoa(a, c, 10);
						sprintf(c,"%d",a);
						strcat(b, c);
						strcpy(userid, b);
					}
			++a;//分配用户Id,不管有没有初始文件和初始Id都会重新分配Id
			users[cnt].set_user(userid,stl2,stl3,stl4,stl5,ni,sta);
			users->add_cnt();
		}
		else
			break;

	}
	fclose(fp1);
}
