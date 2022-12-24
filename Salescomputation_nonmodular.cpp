#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
using namespace std;

char productclass,ans,receipt;
int productno,quantity;
double price,discount,cash,amount,total,change,rating;

int main()
{
do
{
    HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,8);
    cout<<"\n\n";
    cout<<"\n\t~~~~~~~~~~~~~~~~~~~~~~ 7 / E V E L Y N ' S  S T O R E ~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout<<"\n\t==============================================================================";
    cout<<"\n\t||                                 M E N U                                  ||";
    cout<<"\n\t==============================================================================\n";
    SetConsoleTextAttribute(h,10);
    cout<<"\n\t================================= PRODUCT A ==================================";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t|| Product                  Product No.         Price         Discount      ||";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t|| Milktea                   100-110             120             5%         ||";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t|| Milktea w/ Takoyaki       120-130             150             10%        ||";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t==============================================================================\n";
    SetConsoleTextAttribute(h,11);
    cout<<"\n\t================================= PRODUCT B ==================================";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t|| Product                  Product No.         Price         Discount      ||";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t|| Coffee                    220-230             100             15%        ||";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t|| Coffee w/ Pancake         240-250             170             20%        ||";
    cout<<"\n\t||                                                                          ||";
    cout<<"\n\t==============================================================================\n";
SetConsoleTextAttribute(h,2);
cout<<"\n\n\tProduct Class                :     ";
cin>>productclass;
productclass=toupper(productclass);
if(productclass=='A')
{
    cout<<"\n\tProduct No.                  :     ";
    cin>>productno;
    if(productno>=100&&productno<=110)
    {
        price=120;
        discount= .05;
        cout<<fixed<<setprecision(2)<<"\n\tPrice                        :     "<<price;
        cout<<"\n\n\tQuantity                     :     ";
        cin>>quantity;
        amount=price*quantity;
        cout<<fixed<<setprecision(2)<<"\n\tAmount                       :     "<<amount;
        cout<<fixed<<setprecision(2)<<"\n\n\tCash                         :     ";
        cin>>cash;
            if(cash<=0)
            {
                system("cls");
                SetConsoleTextAttribute(h,4);
                cout<<"\n\n\t---------------------------------------";
                cout<<"\n\n\t    Zero/Negative is not applicable";
                cout<<"\n\n\t---------------------------------------";
            }
                else if (cash<amount)
                {
                    system("cls");
                    SetConsoleTextAttribute(h,4);
                    cout<<"\n\n\t---------------------------------------";
                    cout<<"\n\n\t           Cash Insufficient";
                    cout<<"\n\n\t---------------------------------------";
                }
                    else
                    {
        discount = amount*discount;
        total = amount-discount;
        change = cash-total;
        cout<<"\n\t-------------------------------------------";
        cout<<fixed<<setprecision(2)<<"\n\n\t5% Discount Applied          :     -"<<discount;
        cout<<fixed<<setprecision(2)<<"\n\n\tTotal                        :     "<<total;
        cout<<fixed<<setprecision(2)<<"\n\n\tChange                       :     "<<change;
         do
        {
        cout<<"\n\n\n\n\tDo you want a Receipt? (Y/N) :     ";
        cin>>receipt;
            if(receipt=='Y'||receipt=='y')
            {
                system("cls");
                SetConsoleTextAttribute(h,9);
                cout<<"\n\n\t============================================";
                cout<<"\n\n\t                 CASH RECEIPT";
                cout<<"\n\n\t============================================";
                cout<<"\n\n\tProduct Class \t\t\t"<<productclass;
                cout<<"\n\n\tProduct\t\t\t\tMilktea";
                cout<<"\n\n\tProduct No.  \t\t\t"<<productno;
                cout<<"\n\n\tPrice\t\t\t\t"<<price;
                cout<<"\n\n\tQuantity  \t\t\t"<<quantity;
                cout<<"\n\n\t--------------------------------------------";
                cout<<"\n\n\tTotal\t\t\t\t"<<total;
                cout<<"\n\n\tDiscount Applied\t\t-"<<discount;
                cout<<"\n\n\tCash\t\t\t\t"<<cash;
                cout<<"\n\n\tChange\t\t\t\t"<<change;
                cout<<"\n\n\t--------------------------------------------";
                cout<<"\n\n\t\t          THANK YOU!";
                cout<<"\n\n\t--------------------------------------------";
                cout<<"\n\n";
                system("pause");
                system("cls");
                break;
            }
                    else if(receipt=='N'||receipt=='n')
                    {
                        system("cls");
                        SetConsoleTextAttribute(h,6);
                        cout<<"\n\n\t---------------------------------------";
                        cout<<"\n\n\t     THANK YOU FOR YOUR PURCHASE!";
                        cout<<"\n\n\t---------------------------------------";
                        break;
                    }
                            else
                            {
                                system("cls");
                                SetConsoleTextAttribute(h,4);
                                cout<<"\n\n\t---------------------------------------";
                                cout<<"\n\n\t       Invalid Input, Try Again";
                                cout<<"\n\n\t---------------------------------------";
                            }
        }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');

                    cout<<"\n\n\n\n\t           CUSTOMER EXPERIENCE"<<endl;
                    cout<<"\n\t[5] Excellent\n\t[4] Very Good\n\t[3] Good\n\t[2] Average\n\t[1] Poor";
                    do
                    {
                    cout<<"\n\n\tHow's your Experience?     :     ";
                    cin>>rating;

                        if(rating>=1&&rating<=5)
                        {
                            system("cls");
                            cout<<"\n\t---------------------------------------";
                            cout<<"\n\n\t     THANK YOU FOR YOUR FEEDBACK!";
                            cout<<"\n\n\t---------------------------------------";
                        }
                            else
                            {
                                cout<<"\n\n\t---------------------------------------";
                                cout<<"\n\n\t  You have enter an invalid number!";
                                cout<<"\n\n\t---------------------------------------";
                            }
                    }while(rating<=0||rating>=6);
                    }


    }
            else if(productno>=120&&productno<=130)
            {
                price=150;
                discount= .1;
                cout<<fixed<<setprecision(2)<<"\n\tPrice                        :     "<<price;
                cout<<"\n\n\tQuantity                     :     ";
                cin>>quantity;
                amount=price*quantity;
                cout<<fixed<<setprecision(2)<<"\n\tAmount                       :     "<<amount;
                cout<<fixed<<setprecision(2)<<"\n\n\tCash                         :     ";
                cin>>cash;
                    if(cash<=0)
                    {
                        system("cls");
                        cout<<"\n\n\t---------------------------------------";
                        cout<<"\n\n\t    Zero/Negative is not applicable";
                        cout<<"\n\n\t---------------------------------------";
                    }
                        else if (cash<amount)
                        {

                        system("cls");
                        cout<<"\n\n\t---------------------------------------";
                        cout<<"\n\n\t           Cash Insufficient";
                        cout<<"\n\n\t---------------------------------------";
                        }
                            else
                            {
                discount = amount*discount;
                total = amount-discount;
                change = cash-total;
                cout<<"\n\t-------------------------------------------";
                cout<<fixed<<setprecision(2)<<"\n\n\t10% Discount Applied         :     -"<<discount;
                cout<<fixed<<setprecision(2)<<"\n\n\tTotal                        :     "<<total;
                cout<<fixed<<setprecision(2)<<"\n\n\tChange                       :     "<<change;
                do
                {
                cout<<"\n\n\n\n\tDo you want a Receipt? (Y/N) :     ";
                cin>>receipt;
                    if(receipt=='Y'||receipt=='y')
                    {
                        system("cls");
                        cout<<"\n\n\t======================================================";
                        cout<<"\n\n\t                       CASH RECEIPT";
                        cout<<"\n\n\t======================================================";
                        cout<<"\n\n\tProduct Class \t\t\t"<<productclass;
                        cout<<"\n\n\tProduct\t\t\t\tMilktea w/ Takoyaki";
                        cout<<"\n\n\tProduct No.  \t\t\t"<<productno;
                        cout<<"\n\n\tPrice\t\t\t\t"<<price;
                        cout<<"\n\n\tQuantity  \t\t\t"<<quantity;
                        cout<<"\n\n\t------------------------------------------------------";
                        cout<<"\n\n\tTotal\t\t\t\t"<<total;
                        cout<<"\n\n\tDiscount Applied\t\t-"<<discount;
                        cout<<"\n\n\tCash\t\t\t\t"<<cash;
                        cout<<"\n\n\tChange\t\t\t\t"<<change;
                        cout<<"\n\n\t------------------------------------------------------";
                        cout<<"\n\n\t\t               THANK YOU!";
                        cout<<"\n\n\t------------------------------------------------------";
                        cout<<"\n\n";
                        system("pause");
                        system("cls");
                        break;
                    }
                            else if(receipt=='N'||receipt=='n')
                            {
                                system("cls");
                                cout<<"\n\n\t---------------------------------------";
                                cout<<"\n\n\t     THANK YOU FOR YOUR PURCHASE!";
                                cout<<"\n\n\t---------------------------------------";
                                break;
                            }
                                    else
                                    {
                                        system("cls");
                                        cout<<"\n\n\t---------------------------------------";
                                        cout<<"\n\n\t       Invalid Input, Try Again";
                                        cout<<"\n\n\t---------------------------------------";
                                    }
                 }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');
                        cout<<"\n\n\t           CUSTOMER EXPERIENCE"<<endl;
                        cout<<"\n\t[5] Excellent\n\t[4] Very Good\n\t[3] Good\n\t[2] Average\n\t[1] Poor";
                        do
                        {
                        cout<<"\n\n\tHow's your Experience?     :     ";
                        cin>>rating;

                            if(rating>=1&&rating<=5)
                            {
                                system("cls");
                                cout<<"\n\t---------------------------------------";
                                cout<<"\n\n\t     THANK YOU FOR YOUR FEEDBACK!";
                                cout<<"\n\n\t---------------------------------------";
                            }
                                else
                                {
                                    system("cls");
                                    cout<<"\n\n\t---------------------------------------";
                                    cout<<"\n\n\t  You have enter an invalid number!";
                                    cout<<"\n\n\t---------------------------------------";
                                }
                        }while(rating<=0||rating>=6);
                        }
            }
                    else
                    {
                        system("cls");
                        cout<<"\n\n\t---------------------------------------";
                        cout<<"\n\n\t       Product No. not available";
                        cout<<"\n\n\t---------------------------------------";
                    }
}



            else if(productclass=='B')
            {
                cout<<"\n\tProduct No.                  :     ";
                cin>>productno;
                if(productno>=220&&productno<=230)
                {
                    price=100;
                    discount= .15;
                    cout<<fixed<<setprecision(2)<<"\n\tPrice                        :     "<<price;
                    cout<<"\n\n\tQuantity                     :     ";
                    cin>>quantity;
                    amount=price*quantity;
                    cout<<fixed<<setprecision(2)<<"\n\tAmount                       :     "<<amount;
                    cout<<fixed<<setprecision(2)<<"\n\n\tCash                         :     ";
                    cin>>cash;
                        if(cash<=0)
                        {
                            system("cls");
                            cout<<"\n\n\t---------------------------------------";
                            cout<<"\n\n\t    Zero/Negative is not applicable";
                            cout<<"\n\n\t---------------------------------------";
                        }
                            else if (cash<amount)
                            {
                                system("cls");
                                cout<<"\n\n\t---------------------------------------";
                                cout<<"\n\n\t           Cash Insufficient";
                                cout<<"\n\n\t---------------------------------------";
                            }
                                else
                                {
                                    discount = amount*discount;
                                    total = amount-discount;
                                    change = cash-total;
                                    cout<<"\n\t-------------------------------------------";
                                    cout<<fixed<<setprecision(2)<<"\n\n\t15% Discount Applied         :     -"<<discount;
                                    cout<<fixed<<setprecision(2)<<"\n\n\tTotal                        :     "<<total;
                                    cout<<fixed<<setprecision(2)<<"\n\n\tChange                       :     "<<change;
                    do
                    {
                    cout<<"\n\n\n\n\tDo you want a Receipt? (Y/N) :     ";
                    cin>>receipt;
                        if(receipt=='Y'||receipt=='y')
                        {
                            system("cls");
                            cout<<"\n\n\t============================================";
                            cout<<"\n\n\t                 CASH RECEIPT";
                            cout<<"\n\n\t============================================";
                            cout<<"\n\n\tProduct Class \t\t\t"<<productclass;
                            cout<<"\n\n\tProduct\t\t\t\tCoffee";
                            cout<<"\n\n\tProduct No.  \t\t\t"<<productno;
                            cout<<"\n\n\tPrice\t\t\t\t"<<price;
                            cout<<"\n\n\tQuantity  \t\t\t"<<quantity;
                            cout<<"\n\n\t--------------------------------------------";
                            cout<<"\n\n\tTotal\t\t\t\t"<<total;
                            cout<<"\n\n\tDiscount Applied\t\t-"<<discount;
                            cout<<"\n\n\tCash\t\t\t\t"<<cash;
                            cout<<"\n\n\tChange\t\t\t\t"<<change;
                            cout<<"\n\n\t--------------------------------------------";
                            cout<<"\n\n\t\t          THANK YOU!";
                            cout<<"\n\n\t--------------------------------------------";
                            cout<<"\n\n";
                            system("pause");
                            system("cls");
                            break;
                        }
                                else if(receipt=='N'||receipt=='n')
                                {
                                    system("cls");
                                    cout<<"\n\n\t---------------------------------------";
                                    cout<<"\n\n\t     THANK YOU FOR YOUR PURCHASE!";
                                    cout<<"\n\n\t---------------------------------------";
                                    break;
                                }
                                        else
                                        {
                                            system("cls");
                                            cout<<"\n\n\t---------------------------------------";
                                            cout<<"\n\n\t       Invalid Input, Try Again";
                                            cout<<"\n\n\t---------------------------------------";
                                        }
                    }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');

                                cout<<"\n\n\n\n\t           CUSTOMER EXPERIENCE"<<endl;
                                cout<<"\n\t[5] Excellent\n\t[4] Very Good\n\t[3] Good\n\t[2] Average\n\t[1] Poor";
                                do
                                {
                                cout<<"\n\n\tHow's your Experience?     :     ";
                                cin>>rating;

                                    if(rating>=1&&rating<=5)
                                    {
                                        system("cls");
                                        cout<<"\n\t---------------------------------------";
                                        cout<<"\n\n\t     THANK YOU FOR YOUR FEEDBACK!";
                                        cout<<"\n\n\t---------------------------------------";
                                    }
                                        else
                                        {
                                            cout<<"\n\n\t---------------------------------------";
                                            cout<<"\n\n\t  You have enter an invalid number!";
                                            cout<<"\n\n\t---------------------------------------";
                                        }
                                }while(rating<=0||rating>=6);
                                }
                }
                        else if(productno>=240&&productno<=250)
                        {
                            price=170;
                            discount= .20;
                            cout<<fixed<<setprecision(2)<<"\n\tPrice                        :     "<<price;
                            cout<<"\n\n\tQuantity                     :     ";
                            cin>>quantity;
                            amount=price*quantity;
                            cout<<fixed<<setprecision(2)<<"\n\tAmount                       :     "<<amount;
                            cout<<fixed<<setprecision(2)<<"\n\n\tCash                         :     ";
                            cin>>cash;
                                if(cash<=0)
                                {
                                    system("cls");
                                    cout<<"\n\n\t---------------------------------------";
                                    cout<<"\n\n\t    Zero/Negative is not applicable";
                                    cout<<"\n\n\t---------------------------------------";
                                }
                                    else if (cash<amount)
                                    {
                                        system("cls");
                                        cout<<"\n\n\t---------------------------------------";
                                        cout<<"\n\n\t           Cash Insufficient";
                                        cout<<"\n\n\t---------------------------------------";
                                    }
                                        else
                                        {
                                            discount = amount*discount;
                                            total = amount-discount;
                                            change = cash-total;
                                            cout<<"\n\t-------------------------------------------";
                                            cout<<fixed<<setprecision(2)<<"\n\n\t20% Discount Applied         :     -"<<discount;
                                            cout<<fixed<<setprecision(2)<<"\n\n\tTotal                        :     "<<total;
                                            cout<<fixed<<setprecision(2)<<"\n\n\tChange                       :     "<<change;
                            do
                            {
                            cout<<"\n\n\n\n\tDo you want a Receipt? (Y/N) :     ";
                            cin>>receipt;
                                if(receipt=='Y'||receipt=='y')
                                {
                                    system("cls");
                                    cout<<"\n\n\t======================================================";
                                    cout<<"\n\n\t                       CASH RECEIPT";
                                    cout<<"\n\n\t======================================================";
                                    cout<<"\n\n\tProduct Class \t\t\t"<<productclass;
                                    cout<<"\n\n\tProduct\t\t\t\tCoffee w/ Pancake";
                                    cout<<"\n\n\tProduct No.  \t\t\t"<<productno;
                                    cout<<"\n\n\tPrice\t\t\t\t"<<price;
                                    cout<<"\n\n\tQuantity  \t\t\t"<<quantity;
                                    cout<<"\n\n\t------------------------------------------------------";
                                    cout<<"\n\n\tTotal\t\t\t\t"<<total;
                                    cout<<"\n\n\tDiscount Applied\t\t-"<<discount;
                                    cout<<"\n\n\tCash\t\t\t\t"<<cash;
                                    cout<<"\n\n\tChange\t\t\t\t"<<change;
                                    cout<<"\n\n\t------------------------------------------------------";
                                    cout<<"\n\n\t\t               THANK YOU!";
                                    cout<<"\n\n\t------------------------------------------------------";
                                    cout<<"\n\n";
                                    system("pause");
                                    system("cls");
                                    break;
                                }
                                        else if(receipt=='N'||receipt=='n')
                                        {
                                            system("cls");
                                            cout<<"\n\n\t---------------------------------------";
                                            cout<<"\n\n\t     THANK YOU FOR YOUR PURCHASE!";
                                            cout<<"\n\n\t---------------------------------------";
                                            break;
                                        }
                                                else
                                                {
                                                    system("cls");
                                                    cout<<"\n\n\t---------------------------------------";
                                                    cout<<"\n\n\t       Invalid Input, Try Again";
                                                    cout<<"\n\n\t---------------------------------------";
                                                }
                            }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');

                                        cout<<"\n\n\n\n\t           CUSTOMER EXPERIENCE"<<endl;
                                        cout<<"\n\t[5] Excellent\n\t[4] Very Good\n\t[3] Good\n\t[2] Average\n\t[1] Poor";
                                        do
                                        {
                                        cout<<"\n\n\tHow's your Experience?     :     ";
                                        cin>>rating;

                                            if(rating>=1&&rating<=5)
                                            {
                                                system("cls");
                                                cout<<"\n\t---------------------------------------";
                                                cout<<"\n\n\t     THANK YOU FOR YOUR FEEDBACK!";
                                                cout<<"\n\n\t---------------------------------------";
                                            }
                                                else
                                                {
                                                    cout<<"\n\n\t---------------------------------------";
                                                    cout<<"\n\n\t  You have enter an invalid number!";
                                                    cout<<"\n\n\t---------------------------------------";
                                                }
                                        }while(rating<=0||rating>=6);
                                        }
                        }
            }
                        else
                        {
                            system("cls");
                            cout<<"\n\n\t---------------------------------------";
                            cout<<"\n\n\t      Product Class not available";
                            cout<<"\n\n\t---------------------------------------";
                        }

cout<<"\n\n\tDo you want to Try Again? (Y/N) :     ";
cin>>ans;
system("cls");
}while(ans=='Y'||ans=='y');

return 0;
}
