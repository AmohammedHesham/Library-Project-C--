#pragma once
#include<iostream>
#include"clsDate.h";
#include"clsScreen.h"
using namespace std;

class clsPrintInvoiceScreen:protected clsScreen
{
    string ItemsBuyed = "ItemsBuyed.txt";

public :

	static void ShowPrintInvoice() {

		_DrawScreenHeader("Print Invoice");
        //   ������ ��� ��� ��� ����� �� ���� ������ 


        //��� ���� ����� ����� ����� �������� �� ��� ���������  ��������

        //  
        //    �������� ���� ���� ������� �� ��� ���������
        //    1 ����� ��������  good
        //    2 ����� �����   good
        //    3 ��� ����� ������  good
        //    4 ������� 
        //    5 ��� �������� 
        // 
        //    6 ��� ������� good
        //    7 ������� ������� vItemsBayed    good
        //    8 ��� �������(����� ���� ������ ���� ������  ��� ����� ����� ����)

        //    9 ������� �������  ������� �� ����� ��� ���� �������

        cout << "\n\t\t\t\t\t  " << clsDate::GetSystemDateTimeString();
        
        cout << endl;
        if (DLLStoragePayMetheds.IsEmpty()) {
          //   ���� ����� �� �������� ��� ��� ����� ����� ����� �� ���� �� ����� �������� 
         //   �� ��� ������� ��� ���� � ����� ����� ��� ����� ��������  .... ����� ��� ��� ������� ��� ����� ��� 
            cout << "\n\t\t\t\t\t  " << PaymentMethod;
            cout << "\n\t\t\t\t\t  " << amount;

        }
        else {
            DLLStoragePayMetheds.PrintList();
            cout << endl;
        }
        cout << "\n\t\t\t\t\t  " << CurrentClient.AccountNumber;

        cout << "\n\t\t\t\t\t  " << "Riyadh";
        cout << "\n\t\t\t\t\t  " <<"ELT_" + to_string(NumberOfInvoice);
        if (vItemsBuyed.empty()) {
            cout << "\n\t\t\t\t\t  No thing";
        }
        else {
            for (clsSale I : vItemsBuyed) {
                cout << "\n\t\t\t\t\t  " << I.NameItem;
                cout << "\n\t\t\t\t\t  " << I.Price;

            }
        }
        //Price After Tax   ... Doun

       // cout << "\n\t\t\t\t\t  " << TotalPrice;
	}
    //������� ����� ��� ���� ���� ����� ���� ������� ���� ��� ������ ������� ������
};

