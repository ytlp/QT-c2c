#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include<math.h>
#include"putin.h"
#include<iomanip>
using namespace std;
int cintnum(int n)//输入int型数字
{
    char stl[200];
    while(true)
    {
        cin.getline(stl,200);
        if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(stl[i]<'0'||stl[i]>'9')
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        break;
    }
    n=atoi(stl);
    return n;
}
double cdoubleprice(double price)//输入int型数字
{
    char stl[200];
 
    while(true)
    {
        cin.getline(stl,200);
            if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        int flag_xs=0;
        int num_xs=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(!(stl[i]>='0'||stl[i]<='9'||stl[i]=='.'))
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
            if(stl[i]=='.')
			    flag_xs=1;
            if(flag_xs==1)
			    ++num_xs;
        }
        if(num_xs>2)
		{
				cout<<"只允许输入1位小数，请重新填写报价！"<<endl;
                continue;
		}
        if(flag==0)
        break;
    }
    price=atof(stl);
    return price;
}
char* ccharstl4(char *stl)//输入char[]
{
    while(true)
    {
        cin.getline(stl,100);
       if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(stl[i]==','||stl[i]==' ')
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
        }
        if(strlen(stl)>4)
        {
            cout <<"Too Long Stl ! Re-enter!"<<endl;
            continue;
        }
        if(flag==0)
        break;
    }
    return stl;
}
char* ccharstl10(char *stl)//输入char[]
{
    while(true)
    {
        cin.getline(stl,100);
       if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(stl[i]==','||stl[i]==' ')
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
        }
        if(strlen(stl)>10)
        {
            cout <<"Too Long Stl ! Re-enter!"<<endl;
            continue;
        }
        if(flag==0)
        break;
    }
    return stl;
}
char* ccharstl20(char *stl)//输入char[]
{
    while(true)
    {
        cin.getline(stl,100);
       if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(stl[i]==','||stl[i]==' ')
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
        }
        if(strlen(stl)>20)
        {
            cout <<"Too Long Stl ! Re-enter!"<<endl;
            continue;
        }
        if(flag==0)
        break;
    }
    return stl;
}
char* cchartele(char *stl)
{
    while(true)
    {
        cin.getline(stl,100);
       if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(stl[i]>'9'||stl[i]<0)
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
        }
        if(strlen(stl)>20)
        {
            cout <<"Too Long Stl ! Re-enter!"<<endl;
            continue;
        }
        if(flag==0)
        break;
    }
    return stl;
}
char* ccharstl40(char *stl)//输入char[]
{
    while(true)
    {
        cin.getline(stl,100);
       if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(stl[i]==','||stl[i]==' ')
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
        }
        if(strlen(stl)>40)
        {
            cout <<"Too Long Stl ! Re-enter!"<<endl;
            continue;
        }
        if(flag==0)
        break;
    }
    return stl;
}
char* ccharstl200(char *stl)//输入char[]
{
    while(true)
    {
        cin.getline(stl,1000);
       if(strlen(stl)==0)
        {
            cout << "error!"<<endl;
            continue;
        }
        int flag=0;
        for(int i=0;i<strlen(stl);++i)
        {
            if(stl[i]==',')
            {
                cout <<"Illegal input,Re-enter!"<<endl;
                flag=1;
                break;
            }
            if(stl[i]==' ')
            stl[i]='&';
        }
        if(strlen(stl)>200)
        {
            cout <<"Too Long Stl ! Re-enter!"<<endl;
            continue;
        }
        if(flag==0)
        break;
    }
    return stl;
}
char* kgstl(char*stl)
{
    for(int i=0;i<strlen(stl);++i)
   {
        if(stl[i]=='&')
        {
            stl[i]=' ';
        }
   }
   return stl;
}
