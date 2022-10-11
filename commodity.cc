#pragma warning( disable : 4996)
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include"commodity.h"
#include"putin.h"
#include<math.h>
#include<iomanip>
using namespace std;
int b = 1;
int Commodity_class::commodity_cnt=0; 
//void seek_key(Commodity_class * commodity)
//{
//	char want[21];
//	cout << "请输入您想要搜索的商品名称：";
//	strcpy(want,ccharstl20(want));
//	int commodity_cnt=commodity->get_cnt();
//	int flag=0;
//	for(int i=0;i<commodity_cnt;++i)
//	{
		
//			if (strcmp(commodity[i].get_condition(), "onAuction") == 0 || strcmp(commodity[i].get_condition(), "removed") == 0)
//			{
				
//				if(strstr(commodity[i].get_commodityname(),want)!=NULL)
//				{	cout << "名称：" << commodity[i].get_commodityname() << endl;
//							cout << "描述:" <<kgstl(commodity[i].get_discription()) << endl;
//							cout << "上架时间:" << commodity[i].get_date() << endl;
//							cout << "卖家ID:" <<commodity[i].get_sellerid()<< endl;
//							cout << "商品状态:" << commodity[i].get_condition() << endl;
//							flag=1;
//				}
				
				
//			}
			
//	}
//	if (flag == 0)

//		cout << "无结果。" << endl;
//}
//void Seek_adminCommodity(Commodity_class * commodity)
//{
//	char want[21];
//	cout << "请输入您想要搜索的商品名称：";
//	strcpy(want,ccharstl20(want));
//	int commodity_cnt=commodity->get_cnt();
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		  cout << endl;
//		   cout << commodity[i].get_commodityid() << setw(10) << commodity[i].get_commodityname() << setw(12) << fixed << setprecision(1) << commodity[i].get_price() << setw(8) <<kgstl(commodity[i].get_discription()) << setw(8) <<commodity[i].get_sellerid()<<setw(10)<<" "<< commodity[i].get_date() << commodity[i].get_condition() << setw(8) << endl;
  
//	}
//}
//void Delete_commodity(Commodity_class*commodity,char sellerid[7])
//{
//	char id[5];
//	cout << "请输入您想要下架的商品：";
//	strcpy(id,ccharstl4(id));
//	int commodity_cnt=commodity->get_cnt();
//	int find;
//	int flag=0;
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		if (strcmp(commodity[i].get_commodityid(), id) == 0)
//		{
//			find=i;
//			flag=1;
//			break;
//		}
//	}
//	if(flag==0)
//	{
//         cout <<"找不到您输入的商品ID！"<<endl;
//	}
//	if (strcmp(commodity[find].get_sellerid(), sellerid) == 0)
//		if (strcmp(commodity[find].get_condition(), "onAuction") == 0)
//		{
//			commodity[find].set_condition("removed");
//			write_commodity(commodity, "b.txt");
//		}
//		else
//			cout << "商品已售出或者下架，您没有权力进行更改！" << endl;
//	else
//		cout << "请确认输入商品ID是您所发布的商品ID再进行此操作：" << endl;
//}
//int checkd(char dis[201])
//{
//	int i = 0;
//	while (dis[i] != '\0')
//	{
//		if (dis[i] == ',')
//			return 1;
//		++i;
//	}
//	return 0;
//}
//void Change_info(Commodity_class*commodity,  char sellerid[7])
//{
//	char id[15];
//	int choose,flag = 0;
//	cout << "请输入修改商品的ID：";
//	strcpy(id,ccharstl4(id));
//	int commodity_cnt=commodity->get_cnt();
//	int find;
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		if (strcmp(sellerid, commodity[i].get_sellerid()) == 0&&strcmp(commodity[i].get_commodityid(), id) == 0)
//			{
//				flag = 1;
//				find=i;
//				break;
//			}
//	}
//	if (flag == 1)
//	{
//		cout << "请输入修改商品属性（1.价格，2.描述）：";
//		choose=cintnum(choose);
//		if (choose == 1)
//		{
//			double pi;
//			cout << "请输入修改后的价格";
//			pi=cdoubleprice(pi);
//			cout << "请确认修改后的商品信息！" << endl;
//			cout << "商品ID：" <<commodity[find].get_commodityid() << endl;
//			cout << "商品名称；" << commodity[find].get_commodityname() << endl;
//			cout << "商品价格："<<fixed<< setprecision(1) << commodity[find].get_price() << endl;
//			cout << "商品描述：" << kgstl(commodity[find].get_discription())<< endl;
//			cout << "确认是否修改（是-输入1，否-输入0）：";
//			int de;
//			de=cintnum(de);
//			if (de == 1)
//			{
//				commodity[find].set_price(pi);
//				write_commodity(commodity, "b.txt");
//			}
//			else
//				return;
//		}
//		else
//			if (choose == 2)
//			{
//				char di[201];
//				cout << "请输入修改后的属性：";
//				strcpy(di,ccharstl200(di));
//				if (checkd(di) == 0)
//				{
//					cout << "请确认修改后的商品信息！" << endl;
//					cout << "商品ID：" <<commodity[find].get_commodityid() << endl;
//					cout << "商品名称；" << commodity[find].get_commodityname() << endl;
//					cout << "商品价格："<<fixed<< setprecision(1) << commodity[find].get_price() << endl;
//					cout << "商品描述：" << kgstl(commodity[find].get_discription())<< endl;
//					cout << "确认是否修改（是-输入1，否-输入0）：";
//					int de;
//					de=cintnum(de);
//					if (de == 1)
//					{
//						commodity[find].set_dis(di);
//						write_commodity(commodity, "b.txt");
//					}

//					else
//						return;
//				}
//				else
//					cout << "很抱歉您输入的内容违规" << endl;
//			}
//			else
//				cout << "操作失败，没有此选项"<<endl;
//	}
//	else
//		cout << "操作失败！商品不匹配或者不存在" << endl;
//}
//void Print_sellercommodity(Commodity_class* commodity, char sellerid[7])
//{
//	int commodity_cnt=commodity->get_cnt();
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		if(strcmp(commodity[i].get_sellerid(),sellerid)==0)
//		{
//			cout << commodity[i].get_commodityid() << setw(8) << commodity[i].get_commodityname() << setw(10) <<fixed << setprecision(1)<< commodity[i].get_price() << setw(20) << commodity[i].get_date() << setw(20) << commodity[i].get_condition() << setw(12) << endl;
//		}
//	}
//}
void write_commodity(Commodity_class* commodity)
{
    FILE* fp1 = fopen("/home/ytlp/Desktop/bidpf/b.txt", "w");

    if (fp1 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }
    int commodity_cnt=commodity->get_cnt();
    fprintf(fp1, "%s,%s,%s,%s,%s,%s,%s,%s,%s,%s\n", "commodity_id",  "commodity_name",  "price", "number",  "discription","seller_id", "date","condition","sec","day");
    for (int i=0;i<commodity_cnt;++i)
    {
        fprintf(fp1, "%s,%s,%.1f,%d,%s,%s,%s,%s,%d,%d\n", commodity[i].get_commodityid(),  commodity[i].get_commodityname(),  commodity[i].get_price(),  commodity[i].get_number(),  commodity[i].get_discription(), commodity[i].get_sellerid(), commodity[i].get_date(),commodity[i].get_condition(),commodity[i].get_sec(),commodity[i].get_day());
    }
    fclose(fp1);
}
//void Seekdetail_commodity(Commodity_class*commodity)
//{
//    char want[21];
//	cout << "请输入您想要搜索的商品名称：";
//	strcpy(want,ccharstl20(want));
//	int commodity_cnt=commodity->get_cnt();
//	int flag=0;
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		if (strcmp(want, commodity[i].get_commodityname()) == 0 && strcmp( commodity[i].get_condition(),"onAuction")==0)
//		{
//				cout<<"ID:"<< commodity[i].get_commodityid()  <<endl;
//				cout << "名称：" << commodity[i].get_commodityname()<< endl;
//				cout<<"底价："<<  commodity[i].get_price()<<endl;
//				cout << "上架时间:" << commodity[i].get_date() << endl;
//				cout << "描述:" <<kgstl(commodity[i].get_discription()) << endl;
//				cout << "卖家ID:" <<commodity[i].get_sellerid() << endl;
//				flag = 1;
//				break;
//		}
//	}
//	if(flag==0)
//	{
//	     cout << "该商品已被下架";
//	}
//}
//void Seek_Commodity(Commodity_class*commodity)//查找商品，收藏夹待更新！
//{
	
//	char want[21];
//	cout << "请输入您想要搜索的商品名称：";
//	strcpy(want,ccharstl20(want));
//	int commodity_cnt=commodity->get_cnt();
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		if (strcmp(want, commodity[i].get_commodityname()) == 0 && strcmp( commodity[i].get_condition(),"onAuction")==0)
//		{
//			cout << "商品ID,   名称，        价格" << endl;
//			cout << commodity[i].get_commodityid() << setw(10) << commodity[i].get_commodityname()<< setw(12) << fixed << setprecision(1) << commodity[i].get_price() << setw(8)  << endl;
//			break;

//		}
//	}
	
//}
//void Print_commodityList(Commodity_class * commodity)
//{
//    int cnt=commodity->get_cnt();
//    for(int i=0;i<cnt;++i)
//    {
//        if(strcmp(commodity[i].get_condition(),"onAuction")==0)
//       {
//           cout << endl;
//		   cout << commodity[i].get_commodityid() << setw(10) << commodity[i].get_commodityname() << setw(12) << fixed << setprecision(1) << commodity[i].get_price() << setw(8) <<commodity[i].get_sellerid()<<setw(10)<<" "<< commodity[i].get_date()  << endl;
//       }
//    }
//}
//void Print_admincommodity(Commodity_class * commodity)
//{
//    int cnt=commodity->get_cnt();
//    for(int i=0;i<cnt;++i)
//    {
//           cout << endl;
//		   cout << commodity[i].get_commodityid() << setw(10) << commodity[i].get_commodityname() << setw(12) << fixed << setprecision(1) << commodity[i].get_price() << setw(8) <<kgstl(commodity[i].get_discription()) << setw(8) <<commodity[i].get_sellerid()<<setw(10)<<" "<< commodity[i].get_date() << commodity[i].get_condition() << setw(8) << endl;
//    }
//}
//void Admin_Deletegoods(Commodity_class * commodity, char id[7])
//{
//	int commodity_cnt=commodity->get_cnt();
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		if (strcmp(id, commodity[i].get_sellerid()) == 0 )
//		{
		
//			commodity[i].set_condition("removed");
//		}
//	}
//	write_commodity(commodity,"b.txt");
//}
//void Deletegood(Commodity_class * commodity)
//{
//	char id[5];
//	cout << "请输入您想要下架的商品ID：";
//	strcpy(id,ccharstl4(id));
//	cout << "请确认您是否想要下架此商品" << endl;
//	int flag = 0;
//	int find_commodity;
//	int commodity_cnt=commodity->get_cnt();
//	for(int i=0;i<commodity_cnt;++i)
//	{
//		if (strcmp(id, commodity[i].get_commodityid()) == 0)
//		{
//			flag = 1;
//			find_commodity=i;
//			if(strcmp(commodity[i].get_condition(),"removed")==0)
//					{
//						cout <<"The commodity has been removed~"<<endl;
//						return;
//					}
//			break;
//		}
//	}
//	if (flag == 1)
//	{
//		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//		cout <<commodity[find_commodity].get_commodityid() << endl;
//		cout <<commodity[find_commodity].get_commodityname() << endl;
//		cout <<fixed << setprecision(1) <<commodity[find_commodity].get_price() << endl;
//		cout << kgstl(commodity[find_commodity].get_discription()) << endl;
//		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
//		cout << endl;
//		cout << "请确认是否删除（是-输入1；否-输入0）：";
//		int choose;
//		choose=cintnum(choose);
//		if (choose == 1)
//		{
//			commodity[find_commodity].set_condition("removed");
//			write_commodity(commodity, "b.txt");
//		}
//		else
//			cout << "未进行操作" << endl;
//	}
//	else
//		cout << "未找到文件，操作失败";
//}
void read_commodity(Commodity_class *commodity)
{
    FILE* fp1 = fopen("/home/ytlp/Desktop/bidpf/b.txt","r");

	char word[201];
	if (fp1 == NULL)
	{
		puts("Could not open files");
		exit(0);
	}
	int result;
    b=1;
	char stl1[100], stl2[100], stl3[100], stl4[300], stl5[100], stl6[100],stl7[100],stl8[100],stl9[100],stl10[100];
	fscanf(fp1, "%200s", &word);
	while (!feof(fp1))
	{
		if (fscanf(fp1, "%200s", &word) != EOF)
		{
            int cnt=commodity->get_cnt();
			result = sscanf(word, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s", stl1, stl2, stl3, stl8,stl4, stl5, stl6,stl7,stl9,stl10);
			double ni = atof(stl3);
			int num=atoi(stl8);
			int sec=atoi(stl9);
			int day=atoi(stl10);
            char commodity_id[7];
			strcpy(commodity_id, stl1);
			if (b< 10)
			{
				char d[15] = { 'M','0','0' };
				char c[5];
				//itoa(b, c, 10);
				sprintf(c,"%d",b);
				strcat(d, c);
				strcpy(commodity_id, d);
			}
			else
				if (b >= 10 && b < 100)
				{
					char d[15] = { 'M','0' };
					char c[5];
					//itoa(b, c, 10);
					sprintf(c,"%d",b);
					strcat(d, c);
					strcpy(commodity_id, d);
				}
				else
					if (b >= 100 && b < 1000)
					{
						char d[15] = { 'M'};
						char c[5];
						//itoa(b, c, 10);
						sprintf(c,"%d",b);
						strcat(d, c);
						strcpy(commodity_id, d);
					}
			++b;//分配商品ID
			//cout <<stl4<<endl;
            commodity[cnt].set_commodity(commodity_id,stl2,ni,num,stl4,stl5,stl6,stl7,sec,day);
		    commodity->add_cnt();
		}
		else
			break;

	}
	fclose(fp1);
}
