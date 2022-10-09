#pragma once
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include"order.h"
//#include"bidlist.h"
#include"commodity.h"
#include<math.h>
#include<iomanip>
using namespace std;
extern int a;

class Users_class{
    private:
            char user_id[7];
			char user_name[21];
			char key[21];
            char tele[21];
			char location[41];
			double balance;
			bool status;
            static int users_cnt;
    public:
            int get_cnt()
            {
                return users_cnt;
            }
            int set_cnt(int i)
           {
               users_cnt=i;
           }
            char* get_userid()
            {
                return user_id;
            }
             char* get_username()
            {
                return user_name;
            }
             char* get_location()
            {
                return location;
            }
             char* get_tele()
            {
                return tele;
            }
            char* get_key()
            {
                return key;
            }
            double  get_balance()
            {
                return balance;
            }
            bool get_status()
            {
                return status;
            }
            void add_cnt()
            {
                ++users_cnt;
            }
            void set_status(bool status_)
            {
                    status=status_;
            }
            void set_balance(double money)
            {
                balance+=money;
            }
            void set_username(char* name)
            {
                strcpy(user_name,name);
            }
            void set_tele(char* tele_)
            {
                strcpy(tele,tele_);
            }
            void set_location(char* local)
            {
                strcpy(location,local);
            }
            void set_user(char userid[7],char username[21],char userkey[21],char usertele[21],char userlocation[41],double userbalance,bool userstatus )
            {
                strcpy(user_id,userid);
                strcpy(user_name,username);
                strcpy(key,userkey);
                strcpy(tele,usertele);
                strcpy(location,userlocation);
                balance=userbalance;
                status=userstatus;
            }
};
//void write11(Node1* h, const char* src);
//void Users(Users_class *users,Commodity_class* commodity, Order_class*order,Bidlist_class*bidlist,char name[15],char key[21]);
void read_user(Users_class *users);
//void bid(Users_class *users,Commodity_class* commodity, Order_class*order,Bidlist_class*bidlist,char name[15]);
//void buyer_user(Users_class *users,Commodity_class* commodity, Order_class*order,Bidlist_class*bidlist,char buyer[15]);
char* name_id(Users_class* users,char name[15]);
//void change_bid(Commodity_class*commodity,Bidlist_class* bidlist, char buyerid[15]);

void seller_user(Users_class *users,Commodity_class* commodity, Order_class*order,char seller[15]);//卖家操作
int checkd(char dis[201]);
void Print_sellercommodity(Commodity_class* commodity, char sellerid[7]);
void Print_alluser(Users_class *users);
void write_users(Users_class*users);
int idname_match(Users_class*users,char* name,char*key);
void User_register(Users_class*users);
//void check_buy(Users_class*users,Commodity_class* commodity,Order_class*order,Bidlist_class* bidlist);
int buying(Users_class*users,Order_class*order,char name[15],char want[21],double price,char seller_id[7]);
void seek_key(Commodity_class * commodity);

