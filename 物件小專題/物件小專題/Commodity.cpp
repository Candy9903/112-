#include "Commodity.h"
Commodity::Commodity() {
	commodityName = "GG";
	price = 1;
	
}
Commodity::Commodity(string newCDN, int newP,int newAmount) {
	//newCDN=newCommodityName;newP=newPrice;
	setCommodityName(newCDN);
	setPrice(newP);
	setAmount(newAmount);
}

void Commodity::setCommodityName(string newCDN) {
	commodityName = newCDN;
}

void Commodity::setPrice(int newP) {
	price = newP;
}
void Commodity::setAmount(int newAmount) {
	amount = newAmount;
}
string Commodity::getCommodityName()const {
	return commodityName;
}
int Commodity::getPrice()const {
	return price * 30;
}
int Commodity::getAmount()const {
	return amount;
}
void Commodity::print() {
	cout << setw(6) << "TW$: " << getPrice() << setw(11) << right <<"¼Æ¶q: "<< setw(2) << getAmount();
	cout << setw(50) << getCommodityName();
}