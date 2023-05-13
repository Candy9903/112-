#include "ShopCart.h"
#include <vector>

using namespace std;

static int total = 0;
//輸出商品清單
void Show(vector<vector< Commodity>> AllShoese,int size) {
cout << "-------------------------商品資料----------------------------"<<endl<<endl<<endl;
    for (int i = 0; i < 3; i++) {
        if (i == 0) {
            cout << "-------------------------AirForce----------------------------" << endl<<endl;
        }
        else if (i == 1) {
            cout << "-------------------------AirMax----------------------------" << endl << endl;
        }
        else cout << "-------------------------Dunk----------------------------" << endl << endl;
        for (int j = 0; j < size; j++) {
            if (total < 10) {
                cout<<setw(2)<< total;
            }
            else {
            cout << total;
            }
            AllShoese[i][j].print();
            total++;
            cout << endl;
        }
        cout<< endl;
    }
    total = 0;
}
int main()
{   
    
    //addList 把選到的加到此物件陣列裡 一維就夠了 可以用二維 來分開 所加入的做分類並列印出來 要有static
	vector<Commodity> AirForce1 = {
	{"07 White", 101,12},
	{"Supreme White", 161,5},
	{"SP AMBUSH Black", 197,23},
    {"Supreme Black", 163,3},
    {"Off-White Pine Green", 177,8},
    {"07 Black Black", 112,10},
    {"Four Horsemen LeBron", 103,16},
    {"SP AMBUSH Phantom", 220,23},
    {"Drake NOCTA Certified Lover Boy", 164,1},
    {"Tiffany & Co.1837", 333,4},
    {"SP Supreme Wheat", 200,6},
    {"Off-White Blac", 148,7},
    {"Jackie Robinson", 262,14},
    {"07 White Swoosh Panda", 101,11},
    {"Off-White White", 144,18},
    {"Flax (2019/2022)", 106,2},
    {"SP Billie Eilish Triple White", 106,9},
    {"07 Feel Free, Let’s Talk", 123,13},
    {"07 QS Purple Skeleton Halloween (2021)", 108,15},
    {"Stussy Fossil", 151,19}
	};
	vector<Commodity> AirMax = {
	{ "Premium Denim Leopard", 147,12 },
	{ "Terrascape Plus Black Anthracite", 119 ,5},
	{ "'86 OG Big Bubble Sport Red", 142,23 },
	{ "Plus Black Silver White", 147 ,3},
	{ "Plus White", 122,8 },
	{ "White Mica Green", 144,10 },
	{ "Plus Black University Blue {2022}", 141,16 },
	{ "Plus Toggle Black Reflective", 153,23 },
	{ "97 Triple White Wolf Grey", 109 ,1},
	{ "Plus Triple Black", 136,4 },
	{ "SP Concepts Mellow", 139,6 },
	{ "95 Triple Black {2020}", 117 ,7},
	{ "97 OG Silver Bullet {2022}", 117,14 },
	{ "Crepe Soft Grey", 120 ,18},
	{ "270 White Black", 135 ,2},
	{ "Crepe Brown {2022}", 128,9 },
	{ "Air Max 95 Light Bone GID", 120 ,13},
	{ "'86 OG Golf NRG Always Fresh", 195,6 },
	{ "Plus 3 Triple White", 147,15 },
	{ "Travis Scott Cactus Jack Saturn Gold", 186 ,19}
	};
	vector<Commodity> Dunk= {
     {"Retro White Black Panda {2021}", 126,12},
     {"Light Orewood Brown Sashiko", 111,5},
     {"Industrial Blue Sashiko", 110,23},
     {"Grey Fog", 162,3},
     {"Setsubun {2022}", 146,8},
     {"Retro White Pure Platinum", 100,10},
     {"QS LeBron James Fruity Pebbles", 101,16},
     {"Team Gold", 101,23},
     {"Retro Red Swoosh Panda", 122,1},
     {"Retro PRM Valentine's Day {2023}", 106,4},
     {"High Panda Black White {2021}", 120,6},
     {"Retro QS Argon {2022}", 112,7},
     {"Summit White Midnight Navy", 152,14},
     {"Mica Green", 124,18},
     {"High Blue Chill", 198,2},
     {"Stencil Swoosh", 128,9},
     {"Retro Reverse Brazil", 100,13},
     {"Racer Blue Photon Dust", 127,20},
     {"SP Kentucky {2020/2022}", 196,15},
     {"Coconut Milk", 154,19}
    };
    vector<vector< Commodity>> AllShoese = {AirForce1,AirMax,Dunk};
    string control="yes";//讓使用者控制 程式
    const int size = 20;//AirForce1、AirMax、Dunk物件陣列大小
    int number;//讓使用者輸入編號
    int amount;//讓使用者輸入數量
    int correctAmount;//確認輸入的數量的變數
    while (control != "no") {
        //展示商品清單
        Show(AllShoese,size);
        //展示購物車
        //
        
        //115~136行 輸入編號和判斷輸入是否正確
        cout << "請選擇編號加入購物車: "<<endl;
        cin >> number;
        //下判斷輸入是否正確
        while (true) {
            
            // 判断输入是否成功//*****
            if (cin.fail()||(number>=60||number<0)) { 
                //假如使用者 輸入@@ 代表cin.fail()會回傳ture 就會執行cin>>number 
                //但是如果使用者輸入123 則cin.fail()回傳false  並交由(number>=size||number<0)來判斷number是否在0到60之間
                //if(false || (ture(123)||false)
                //承第二例如果使用(number<size&&number>=0)來判斷
                //if(false || false{ (false && ture ) }
                //就不會進入以下程式
                cin.clear(); // 清空输入缓冲區
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略掉之前輸入的内容
                cout << "****請輸入正確的編號****" << endl;
                cin >> number;
            }
            else {
                break; // 輸入成功，退出循環
            }
        }

        //137~160行 為 輸入數量和判斷輸入的數量 是否正確
        if (number < 20) {
            correctAmount = AirForce1[number].getAmount();
            
         }
        else if (number >= 20 && number < 40) {
            correctAmount = AirMax[number%20].getAmount();
        }
        else if (number >= 40) {
            correctAmount = Dunk[number % 20].getAmount();
        }
        cout << "請輸入所需要的數量:" << endl;
        cin >> amount;
        while (true)
        {
            if (cin.fail() || (amount > correctAmount || amount <=0)) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 忽略掉之前输入的内容
                cout << "****請輸入正確的數量****" << endl;
                cin >> amount;
            }
            else {
                break;//輸入正確的數量 跳出循環
            }
        }
        //更新展示購物車(下判斷使用者是否輸入編號否則不展示購物車)
        //

        //168~174行 詢問是否再次執行 、 輸入字串 、 判斷字串是否正確
        cout << "請問是否再次選擇? (yes/no)"<<endl;
        cin >> control;
        //下判斷輸入是否正確
        while (control != "yes" && control != "no") {
            cout << "****請輸入正確的指令**** "<<endl<<"(yes/no)?"<<endl ;
            cin >> control;
        }
    }
    
       
    
    
}