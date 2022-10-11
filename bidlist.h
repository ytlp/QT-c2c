#pragma once
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
class Bidlist_class{
    private:
			char buyer_id[7];
			char commodity_id[7];
			char commodity_name[100];
			double money;
			int sec;
			int day;
			int condition;
            static int bidlist_cnt;
    public:
     int get_cnt()
            {
                return bidlist_cnt;
            }
            char* get_buyerid()
            {
                return buyer_id;
            }
             char* get_commodityname()
            {
                return commodity_name;
            }
            char* get_commodityid()
            {
                return commodity_id;
            }
            int get_condition()
            {
                return condition;
            }
            int get_sec()
            {
                return sec;
            }
            int get_day()
            {
                return day;
            }
            double  get_money()
            {
                return money;
            }
            void set_condition(int con)
            {
                condition=con;
            }
            void add_cnt()
            {
                ++bidlist_cnt;
            }
            void set_money(double money_)
            {
                money=money_;
            }
            void set_bidlist(char buyerid[7],char commodityid[7],char commodityname[100],double money_,int sec_,int day_,int condition_ )
            {
                strcpy(buyer_id,buyerid);
                strcpy(commodity_id,commodityid);
                strcpy(commodity_name,commodityname);
                money=money_;
                sec=sec_;
                day=day_;
                condition=condition_;
                
            }

};
void read_bidlist(Bidlist_class *order,const char* src1);
//void Print_orderList(Order_class * order);
void write_bidlist(Bidlist_class* bidlist, const char* src);
void Admin_Deletebidlist(Bidlist_class* bidlist,char id[7]);
