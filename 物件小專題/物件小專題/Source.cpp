#include "ShopCart.h"
ShopCart::ShopCart() {
	ShopCartListName = "TT";
	listPrice = 87;
}
ShopCart::ShopCart(string newName, int newPrice){
	setShopCartListName(newName);
	setlistPrice(newPrice);
}
void ShopCart::setShopCartListName(string newName){
	ShopCartListName = newName;
}
void ShopCart::setlistPrice(int newPrice) {
	listPrice = newPrice;
}
void ShopCart::setAllCommodity(Commodity newAllCommodity) {
	AllCommodity = newAllCommodity;
}
string ShopCart::getShopCartListName()const {
	return ShopCartListName;
}
int ShopCart::getlistPrice()const {
	return listPrice;
}
Commodity ShopCart::getAllCommodity()const {
	return AllCommodity;
}
void ShopCart::printList(){
	cout << setw(6) << "TW$: " << listPrice;
	cout << setw(50) << ShopCartListName;
}
