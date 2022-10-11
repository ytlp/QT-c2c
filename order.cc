#pragma warning( disable : 4996)
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include"order.h"
#include<math.h>
#include<iomanip>
using namespace std;
int Order_class::order_cnt=0;
int c_order=1;
//void Print_allorder(Order_class*order)
//{
//	int order_cnt=order->get_cnt();
//	for(int i=0;i<order_cnt;++i)
//	{
		
//			cout << order[i].get_orderid() << setw(8)<<order[i].get_commodityid() << setw(8)  <<fixed << setprecision(1)<< order[i].get_amount() << setw(20) << order[i].get_date() << setw(20) << order[i].get_sellerid() << setw(12) << order[i].get_buyerid() << setw(6)  << order[i].get_commoditystatus() << setw(6)  <<endl;
//	}
//}
//void Print_buyerorder(Order_class*order, char buyerid[15])
//{
//	int order_cnt=order->get_cnt();
//	for(int i=0;i<order_cnt;++i)
//	{
//		if(strcmp(order[i].get_buyerid(),buyerid)==0)
//		{
//			cout <<"商品单号    "<<"订单号     "<<"价格 "<<"购买日期     "<<"卖家    "<<"买家    "<< endl;
//			cout << order[i].get_commodityid() << setw(8) << order[i].get_orderid() << setw(10) <<fixed << setprecision(1)<< order[i].get_amount() << setw(20) << order[i].get_date() << setw(20) << order[i].get_sellerid() << setw(12) << order[i].get_buyerid() << setw(6)  << endl;
//		}
//	}
//}
//void Print_sellerorder(Order_class*order, char sellerid[15])
//{
//	int order_cnt=order->get_cnt();
//	for(int i=0;i<order_cnt;++i)
//	{
//		if(strcmp(order[i].get_buyerid(),sellerid)==0)
//		{
//			cout <<"商品单号    "<<"订单号     "<<"价格 "<<"购买日期     "<<"卖家    "<<"买家    "<< endl;
//			cout << order[i].get_commodityid() << setw(8) << order[i].get_orderid() << setw(10) <<fixed << setprecision(1)<< order[i].get_amount() << setw(20) << order[i].get_date() << setw(20) << order[i].get_sellerid() << setw(12) << order[i].get_buyerid() << setw(6)  << endl;
//		}
//	}
//}
//void write_order(Order_class* order, const char* src)
//{
//	FILE* fp1 = fopen(src, "w");

//	if (fp1 == NULL)
//	{
//		puts("Could not open files");
//		exit(0);
//	}
//	int order_cnt=order->get_cnt();
//	fprintf(fp1, "%s,%s,%s,%s,%s,%s,%s,%s\n", "orderid","commodityid","amount","number","date","sellerid","buyerid","status");
//	for (int i=0;i<order_cnt;++i)
//	{
//		fprintf(fp1, "%s,%s,%.1f,%d,%s,%s,%s,%d\n", order[i].get_orderid(),  order[i].get_commodityid(),  order[i].get_amount(),  order[i].get_number(),  order[i].get_date(), order[i].get_sellerid(), order[i].get_buyerid(),order[i].get_commoditystatus());
//	}
//	fclose(fp1);
//}
//void Admin_Deleteorder(Order_class * order, char id[7])
//{
//	int order_cnt=order->get_cnt();
//	for(int i=0;i<order_cnt;++i)
//	{
//		if (strcmp(id, order[i].get_sellerid()) == 0|| strcmp(id, order[i].get_buyerid()) == 0)
//		{
//			order[i].set_commoditystatus(1);
//		}
//	}
//	write_order(order,"b.txt");
//}
void read_order(Order_class*order)
{
    FILE* fp1 = fopen("/home/ytlp/Desktop/bidpf/c.txt", "r");

	char word[201];
	if (fp1 == NULL)
	{
		puts("Could not open files");
		exit(0);
	}
	int result;
    c_order=1;
	char stl1[100], stl2[100], stl3[100], stl4[100], stl5[100], stl6[100],stl7[100],stl8[100];
	fscanf(fp1, "%200s", &word);
	while (!feof(fp1))
	{
		if (fscanf(fp1, "%200s", &word) != EOF)
		{
			int cnt=order->get_cnt();
			result = sscanf(word, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s", stl1, stl2, stl3, stl8,stl4, stl5, stl6,stl7);
			double ni = atof(stl3);
			int c = atoi(stl7);
			int num=atoi(stl8);
            char order_id[7];
			strcpy(order_id, stl2);
			if (c_order < 10)
			{
				char d[15] = { 'T','0','0'};
				char c[5];
				//itoa(c_order, c, 10);
				sprintf(c,"%d",c_order);
				strcat(d, c);
				strcpy(order_id, d);
			}
			else
				if (c_order >= 10 && c_order < 100)
				{
					char d[15] = { 'T','0'};
					char c[5];
					//itoa(c_order, c, 10);
					sprintf(c,"%d",c_order);
					strcat(d, c);
					strcpy(order_id, d);
				}
				else
					if (c_order >= 100 && c_order < 1000)
					{
						char d[15] = { 'T'};
						char c[5];
						//itoa(c_order, c, 10);
						sprintf(c,"%d",c_order);
						strcat(d, c);
						strcpy(order_id, d);
					}
			++c_order;//分配订单ID
			order[cnt].set_order(stl1,stl2,ni,num,stl4,stl5,stl6,c);
            order->add_cnt();
			
		}
		else
			break;

	}
	fclose(fp1);
}
