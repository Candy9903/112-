#include<string>
#include "AddList.h"
using namespace std;

AddList::AddList() {
}

AddList::AddList(int commodity, int amount) {
	setCommodity(commodity);
	setAmount(amount);
}

int AddList::getAmount() {
	return amount;
}

int AddList::getCommodity() {
	return commodity;
}

void AddList::setCommodity(int commodity) {
	this->commodity = commodity;
}

void AddList::setAmount(int amount) {
	this->amount = amount;
}