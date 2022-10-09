#pragma once
#include<iostream>
#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
using namespace std;
extern int c_order;
class Order_class{
    private:
			char order_id[7];
            char commodity_id[7];
			double amount;
			int number;//大于0整数
			char seller_id[7];
			char buyer_id[7];
            char date[15];
			int  commodity_status;
            static int order_cnt;
    public:
     int get_cnt()
            {
                return order_cnt;
            }
     int set_cnt(int i)
    {
        order_cnt=i;
    }
            char* get_orderid()
            {
                return order_id;
            }
             char* get_commodityid()
            {
                return commodity_id;
            }
            char* get_sellerid()
            {
                return seller_id;
            }
            char* get_buyerid()
            {
                return buyer_id;
            }
            char* get_date()
            {
                return date;
            }
            int get_commoditystatus()
            {
                return commodity_status;
            }
            double  get_amount()
            {
                return amount;
            }
            void set_commoditystatus(int status)
            {
                commodity_status=status;
            }
            int get_number()
            {
                return number;
            }
            void add_cnt()
            {
                ++order_cnt;
            }
            void set_order(char orderid[7],char commodityid[21],double amount_,int num,char date_[15],char sellerid[7],char buyerid[7],int status )
            {
                strcpy(order_id,orderid);
                strcpy(commodity_id,commodityid);
                strcpy(seller_id,sellerid);
                strcpy(buyer_id,buyerid);
                strcpy(date,date_);
                amount=amount_;
                number=num;
                commodity_status=status;
                
            }

};
void read_order(Order_class *order);
void Print_orderList(Order_class * order);
void Print_buyerorder(Order_class*order, char buyerid[15]);
void Print_sellerorder(Order_class*order, char sellerid[15]);
void Print_allorder(Order_class*order);
void write_order(Order_class* order, const char* src);
void Admin_Deleteorder(Order_class * order, char id[7]);
