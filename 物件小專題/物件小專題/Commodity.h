#ifndef COMMODITY_H
#define COMMODITY_H
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//Commodity	�ӫ~
class Commodity {
private:
	string commodityName;
	int price;
	int amount;
	
public:
	//string commodityName,int price,int amount ���ܼ�
	Commodity();
	Commodity(string, int, int);
	void setCommodityName(string);
	void setPrice(int);
	void setAmount(int);
	string getCommodityName()const;
	int getPrice()const;
	int getAmount()const;
	void print();
};
#endif