#ifndef SHOPCART_H
#define SHOPCART_H
#include "Commodity.h"
#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
//ShopCart=Shoppin Cart���Y�g
//ShopCart  �ʪ����hCALL Commodity�ӫ~
class ShopCart {
private:
	string ShopCartListName;
	int listPrice;
	Commodity AllCommodity;
public:
	//string ShopCartListName,int listPrice,AllCommodity ���ܼ�
	ShopCart();
	ShopCart(string,int);
	void setShopCartListName(string);
	void setlistPrice(int);
	void setAllCommodity(Commodity);
	string getShopCartListName()const;
	int getlistPrice()const;
	Commodity getAllCommodity()const;
	void printList();
};
#endif