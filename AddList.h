#ifndef ADDLIST_H
#define ADDLIST_H
#include<string>
using namespace std;

class AddList {
private:
	int commodity;
	int amount;
public:
	AddList();
	AddList(int, int);
	int getAmount();
	int getCommodity();
	void setCommodity(int);
	void setAmount(int);
};




#endif