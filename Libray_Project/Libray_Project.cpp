// Libray_Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
#include"clsString.h"
#include<vector>
#include"clsInputValidate.h";
#include"clsLoginScreen.h";

using namespace std;

//string ReadString() {
//
//    string str = "";
//    getline(cin >> ws, str);
//
//    return str;
//}
//int ReadNumber() {
//
//    int i = 0;
//    do {
//        cin >> i;
//    } while (i < 0);
//
//    return i;
//}
//void ReadAutherInfo(clsAuthers& Auther)
//{
//    cout << "\nEnter FirstName: ";
//    Auther.FirstName = ReadString();
//
//    cout << "\nEnter LastName: ";
//    Auther.LastName = ReadString();
//
//    cout << "\nEnter Email: ";
//    Auther.Email = ReadString();
//
//    cout << "\nEnter Phone: ";
//    Auther.Phone = ReadString();
//
//    Auther.NOFB_Added = 0 ;
//
//}
//
//
//
//
//
//void AddNewAuther()
//{
//    cout << "\n_______";
//    cout << "\n\t\tAdd New Auther";
//    cout << "\n_______\n\n";
//    string IDAuther = "";
//
//    cout << "\nPlease Enter ID Auther ";
//    IDAuther = ReadString();
//    while (clsAuthers::IsAutherExist(IDAuther))
//    {
//        cout << "\nID Auther Is Already Used, Choose another one: ";
//        IDAuther = ReadString();
//    }
//
//    clsAuthers NewAuther = clsAuthers::GetAddNewAutherObject(IDAuther);
//
//
//    ReadAutherInfo(NewAuther);
//
//    clsAuthers::enSaveResults SaveResult;
//
//    SaveResult = NewAuther.Save();
//
//    switch (SaveResult)
//    {
//    case  clsAuthers::enSaveResults::svSucceeded:
//    {
//        cout << "\nAccount Addeded Successfully :-)\n";
//        NewAuther.Print();
//        break;
//    }
//    case clsAuthers::enSaveResults::svFaildEmptyObject:
//    {
//        cout << "\nError account was not saved because it's Empty";
//        break;
//
//    }
//    case clsAuthers::enSaveResults::svFaildAccountNumberExists:
//    {
//        cout << "\nError account was not saved because account number is used!\n";
//        break;
//        ;
//    }
//    }
//}

//void DeleteAuther()
//{
//    cout << "\n_______";
//    cout << "\n\t\tDelete Auther";
//    cout << "\n_______\n\n";
//    string IDAuther = "";
//
//    cout << "\nPlease Enter ID Auther ";
//    IDAuther = ReadString();
//    while (!clsAuthers::IsAutherExist(IDAuther))
//    {
//        cout << "\nID Auther Is Already Used, Choose another one: ";
//        IDAuther = ReadString();
//    }
//
//    clsAuthers NewAuther = clsAuthers::Find(IDAuther);
//
//
//    NewAuther.Print();
//
//    cout << "\nAre You sure you want Delete this Auther ? [y] or [n] : ";
//    char Answor = 'n';
//    cin >> Answor;
//    if (tolower(Answor) == 'y') {
//
//        "ُف̀ےـــخ❤️ـآمَِ̀ـه̀ مَ̀لَــــًك، 👑👑👑🖇"⌗ 👋, [7 / 11 / 2023 11:14 PM]
//            if (NewAuther.Delete()) {
//
//                cout << "\nAuther Deleted Seccessfully :-) \n ";
//
//                NewAuther.Print();
//            }
//            else {
//                cout << "\nError Auther was not Found because it's Empty";
//
//            }
//    }
//
//
//
//}
//struct s {
//    string _NameItem_OR_Description;
//    string _TypeItem;
//    string _ItemCode;
//    double _Price;
//    short   _Quantity;
//    double  _Tax;
//};


string  DeleteBefordelimiter(string S1,string delim) {
   
    // delimiter  
    
    short pos = 0;
    pos = S1.find(delim);
    S1.erase(0, pos + delim.length());
    
    return S1;
}
int main()
{

   /* (التطويرات)
{
 1-   سيكون هناك قائمة لكل نوع من المنتجات
}


    (ملاحظة
        1 يجب ان تحتوي شاشة المدير علي شاشة لي اضافة المستخدمين والثانيه لي اضافه الاصناف وغيرها
        )

    الفكرة اللي بشتغل عليها  
        هي اضافى 3 شاشات رئيسية  
        1 للبائع 
        2 للمدير 
        3 للمؤلف

        وحيكون الدخول للشاشات هي عبر اسم المستخدم  مثلا المدير حيبدا اسم المستخدم تبع 

        1 Manger = M...
        2 Auther = A....
        3 Other Users =(A,aa,d,f.....) Wath Ever 

        وحيكون لكل مستخدم صلاحيات  معينه .


        وبعد كذه حرجع ابرمج الكلاسات حق البيع والشراء وطلبات الزبون وكل الافكار اللي بتخطر ع البال باذن الله 
        والله ولي التوفيق*/



    //}
  // ( وجب ان نعمل قائمة لعرض كتب كل مؤلف ع حده)
   // المشروع التالي مشروع تاحير سيارات
  //  string c = removeFirstLetterFromString("C123245");
    //vector <short> vN;
   
    string  DeleteBefordelimiter(string S1, string delim) {

    //    // delimiter  

    //    short pos = 0;
    //    pos = S1.find(delim);
    //    S1.erase(0, pos + delim.length());

    //    return S1;
    //}
       // cout << c << endl;
   // cout << DeleteBefordelimiter();
  
  
  /* while (true) {
        if (!clsLoginScreen::ShowLoginScreen()) {

            break;
        }
    }*/

  
   /* double i = 5476.80, b = 0.15, r = 0;
    r += i * 0.15;
    cout << r << endl;*/
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file


















