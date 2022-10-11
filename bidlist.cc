#pragma warning( disable : 4996)
#include<iostream>
#include<stdio.h>
#include<iostream>
#include<stdio.h>
#include<cstring>
#include<stdlib.h>
#include<math.h>
#include<iomanip>
#include"bidlist.h"
using namespace std;
int Bidlist_class::bidlist_cnt=0;

//void Admin_Deletebidlist(Bidlist_class* bidlist,char id[7])
//{
//	int bidlist_cnt=bidlist->get_cnt();
//	for(int i=0;i<bidlist_cnt;++i)
//	{
//		if (strcmp(id, bidlist[i].get_buyerid()) == 0 )
//		{
		
//			bidlist[i].set_condition(1);
//		}
//	}
//	write_bidlist(bidlist,"b.txt");
//}
void write_bidlist(Bidlist_class* bidlist)
{
    FILE* fp1 = fopen("/home/ytlp/Desktop/bidpf/f.txt", "w");

	if (fp1 == NULL)
	{
		puts("Could not open files");
		exit(0);
	}
	int bidlist_cnt=bidlist->get_cnt();
	for (int i=0;i<bidlist_cnt;++i)
	{
		fprintf(fp1, "%s,%s,%s,%.1f,%d,%d,%d\n", bidlist[i].get_buyerid(),  bidlist[i].get_commodityid(),  bidlist[i].get_commodityname(),  bidlist[i].get_money(),  bidlist[i].get_sec(), bidlist[i].get_day(), bidlist[i].get_condition());
	}
	fclose(fp1);
}
void read_bidlist(Bidlist_class*bidlist)
{
    FILE* fp1 = fopen("/home/ytlp/Desktop/bidpf/f.txt", "r");

	char word[201];
	if (fp1 == NULL)
	{
		puts("Could not open files");
		exit(0);
	}
	int result;
	char stl1[100], stl2[100], stl3[100], stl4[100], stl5[100], stl6[100],stl7[100];
	while (!feof(fp1))
	{
		if (fscanf(fp1, "%200s", &word) != EOF)
		{
			int cnt=bidlist->get_cnt();
			result = sscanf(word, "%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%[^,],%s", stl1, stl2, stl3, stl4, stl5, stl6,stl7);
			double ni = atof(stl4);
			int sec=atoi(stl5);
            int day=atoi(stl6);
            int condition=atoi(stl7);
			bidlist[cnt].set_bidlist(stl1,stl2,stl3,ni,sec,day,condition);
            bidlist->add_cnt();
			
		}
		else
			break;

	}
	fclose(fp1);
}
