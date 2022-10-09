#pragma once
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
extern int b;
class Commodity_class{
    private:
            char commodity_id[5];
			char commodity_name[21];
			double price;
			int number;//大于0整数
			char discription[201];
			char seller_id[5];
			char date[11];
			char condition[15];
			int sec;
			int day;
            static int commodity_cnt;
    public:
             int get_cnt()
            {
                return commodity_cnt;
            }
             int set_cnt(int i)
            {
                commodity_cnt=i;
            }
             int get_number()
            {
                return number;
            }
             int get_sec()
            {
                return sec;
            }
             int get_day()
            {
                return day;
            }
            char* get_commodityid()
            {
                return commodity_id;
            }
             char* get_commodityname()
            {
                return commodity_name;
            }
            char* get_sellerid()
            {
                return seller_id;
            }
            char* get_date()
            {
                return date;
            }
            char* get_condition()
            {
                return condition;
            }
            char* get_discription()
            {
                return discription;
            }
            double  get_price()
            {
                return price;
            }
            void add_cnt()
            {
                ++commodity_cnt;
            }
            void set_price(double price_)
            {
                price=price_;
            }
             void set_dis(char dis[201])
            {
               strcpy(discription,dis);
            }
              void set_condition(char con[15])
            {
               strcpy(condition,con);
            }
            void set_commodity(char commodityid[7],char commodityname[21],double price_,int num,char dis[201],char sellerid[7],char date_[14],char condition_[15],int sec_,int day_ )
            {
                strcpy(commodity_id,commodityid);
                strcpy(commodity_name,commodityname);
                strcpy(seller_id,sellerid);
                strcpy(discription,dis);
                strcpy(date,date_);
                strcpy(condition,condition_);
                price=price_;
                number=num;
                sec=sec_;
                day=day_;
            }

};
void read_commodity(Commodity_class *commodity);
void Print_commodityList(Commodity_class * commodity);
void Seekdetail_commodity(Commodity_class*commodity);
void Seek_Commodity(Commodity_class*commodity);
void write_commodity(Commodity_class* commodity);
void Change_info(Commodity_class*commodity,  char sellerid[7]);
int checkd(char dis[201]);
void Delete_commodity(Commodity_class*commodity,char sellerid[7]);
void Print_admincommodity(Commodity_class * commodity);
void Seek_adminCommodity(Commodity_class * commodity);
void Admin_Deletegoods(Commodity_class * commodity, char id[7]);
void Deletegood(Commodity_class * commodity);
