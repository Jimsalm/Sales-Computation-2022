#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <windows.h>
#include <process.h>
#include <limits>
using namespace std;
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

char ProductMenu();
int ProductNo();
void ProductA();
void ProductB();
void NotAvailable();
void charError();
void negativeError();
void cashInsufficient();
double amountComputation(double pr, int qt);
double discountComputation(double am, double dc);
double totalComputation(double am, double dct);
double changeComputation(double ch, double tt);
void ReceiptM(int pn,double pr, int qt, double tt, double dc, double ch,double cg);
void ReceiptMT(int pn,double pr, int qt, double tt, double dc, double ch,double cg);
void ReceiptC(int pn,double pr, int qt, double tt, double dc, double ch,double cg);
void ReceiptCP(int pn,double pr, int qt, double tt, double dc, double ch,double cg);
void NoReceipt();
void TAReciept();
int customerFeedback();


int main()
{
char productclass,ans;
do
{
productclass=ProductMenu();
if(productclass=='A')

    {
        ProductA();
    }

    else if (productclass=='B')

    {
                ProductB();
    }

            else
            {
                    NotAvailable();
            }
cout<<"\n\n\t\t\t---------------------------------------";
cout<<"\n\n\t\t\t Do you want to Try Again? (Y/N)   ";
cout<<"\n\n\t\t\t---------------------------------------\n\t\t\t\t\t";
cin>>ans;
system("cls");
}while(ans=='Y'||ans=='y');

    return 0;
}

char ProductMenu()
{
    char productclass;
SetConsoleTextAttribute(h,5);
cout<<"\n\n";
cout<<"\t\t\t\t\t\t\t\tGroup #6\n\n\n";
cout<<"\t\t\t\t\t\t\tSalmon,Jimiel DC.\n\n";
cout<<"\t\t\t\t\t\t\tCabidog, John Derick Q.\n\n";
cout<<"\t\t\t\t\t\t\tTorres, Ashley Mari G.\n\n";
cout<<"\n\n\n";
cout<<"\t\t8888888888              d88P       8888888888 888     888 8888888888 888       Y88b   d88P 888b    888\n";
cout<<"\t\t      d88P             d88P        888        888     888 888        888        Y88b d88P  8888b   888\n";
cout<<"\t\t     d88P             d88P         888        888     888 888        888         Y88o88P   88888b  888\n";
cout<<"\t\t    d88P             d88P          8888888    Y88b   d88P 8888888    888          Y888P    888Y88b 888\n";
cout<<"\t\t 88888888           d88P           888         Y88b d88P  888        888           888     888 Y88b888\n";
cout<<"\t\t  d88P             d88P            888          Y88o88P   888        888           888     888  Y88888\n";
cout<<"\t\t d88P             d88P             888           Y888P    888        888           888     888   Y8888\n";
cout<<"\t\td88P             d88P              8888888888     Y8P     8888888888 88888888      888     888    Y888\n";
cout<<"\t\t\t\t\t     .___  ___.  _______ .__   __.  __    __\n";
cout<<"\t\t\t\t\t     |   \\/   | |   ____||  \\ |  | |  |  |  |\n";
cout<<"\t\t\t\t\t     |  \\  /  | |  |__   |   \\|  | |  |  |  |\n";
cout<<"\t\t\t\t\t     |  |\\/|  | |   __|  |  . `  | |  |  |  |\n";
cout<<"\t\t\t\t\t     |  |  |  | |  |____ |  |\\   | |  `--'  |\n";
cout<<"\t\t\t\t\t     |__|  |__| |_______||__| \\__|  \\______/\n";
SetConsoleTextAttribute(h,10);



cout<<"\n\t\t\t   ================================= PRODUCT A ==================================";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   || Product                  Product No.         Price         Discount      ||";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   || Milktea                   100-110            120.00           5%         ||";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   || Milktea w/ Takoyaki       120-130            150.00           10%        ||";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   ==============================================================================\n";
SetConsoleTextAttribute(h,11);
cout<<"\n\t\t\t   ================================= PRODUCT B ==================================";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   || Product                  Product No.         Price         Discount      ||";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   || Coffee                    220-230            100.00           15%        ||";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   || Coffee w/ Pancake         240-250            170.00           20%        ||";
cout<<"\n\t\t\t   ||                                                                          ||";
cout<<"\n\t\t\t   ==============================================================================\n";
SetConsoleTextAttribute(h,2);
cout<<"\n\n\t\t\tProduct Class                :     ";
cin>>productclass;
productclass=toupper(productclass);
return productclass;
}
int ProductNo()
{
    int productno;
    SetConsoleTextAttribute(h,2);
    cout<<"\n\t\t\tProduct No.                  :     ";
    return productno;
}
void ProductA()
{
    double price,discount,cash,total,change,amount;
    int rating,productno,quantity;
    char receipt;
    productno=ProductNo();
    while(!(cin>>productno))
    {
        charError();
        cout<<"\n\t\t\tProduct No.                  :     ";

    }
        if(productno>=100&&productno<=110)
        {
        price = 120;
        discount = 0.05;
        cout<<fixed<<setprecision(2)<<"\n\t\t\tPrice                        :     "<<price;
        cout<<"\n\n\t\t\tQuantity                     :     ";
        while(!(cin>>quantity))
            {
                charError();
                cout<<"\n\n\t\t\tQuantity                     :     ";

            }
                if(quantity<=0)
                {
                    negativeError();
                }
                    else
                    {
                        amount=amountComputation(price,quantity);
                        discount=discountComputation(amount,discount);
                        total=totalComputation(amount,discount);
                        cout<<"\n\n\t\t\tCash                         :     ";
                            while (!(cin>>cash))
                            {
                                charError();
                                cout<<"\n\n\t\t\tCash                         :     ";
                            }

                                if(cash<=0)
                                {
                                    negativeError();
                                }
                                    else if (cash<total)
                                    {
                                        cashInsufficient();
                                    }
                                        else
                                        {
                                            change=changeComputation(cash,total);
                                            do
                                            {
                                            cout<<"\n\n\n\n\t\t\tDo you want a Receipt? (Y/N) :     ";
                                            cin>>receipt;
                                                if(receipt=='Y'||receipt=='y')
                                                {
                                                    ReceiptM(productno,price,quantity,total,discount,cash,change);
                                                    break;
                                                }
                                                    else if(receipt=='N'||receipt=='n')
                                                    {
                                                        NoReceipt();
                                                        break;
                                                    }
                                                        else
                                                        {
                                                            TAReciept();
                                                        }
                                            }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');
                                                    //Rating
                                                    rating=customerFeedback();
                                        }
                    }

        }
       else if(productno>=120&&productno<=130)
                {
                price = 150;
                discount = 0.1;
                cout<<fixed<<setprecision(2)<<"\n\t\t\tPrice                        :     "<<price;
                cout<<"\n\n\t\t\tQuantity                     :     ";
                    while(!(cin>>quantity))
                    {
                        charError();
                        cout<<"\n\n\t\t\tQuantity                     :     ";
                    }
                        if(quantity<=0)
                        {
                            negativeError();
                        }
                            else
                            {
                                amount=amountComputation(price,quantity);
                                discount=discountComputation(amount,discount);
                                total=totalComputation(amount,discount);
                                cout<<"\n\n\t\t\tCash                         :     ";
                                    while(!(cin>>cash))
                                    {
                                        charError();
                                        cout<<"\n\n\t\t\tCash                         :     ";
                                    }
                                        if(cash<=0)
                                        {
                                            negativeError();
                                        }
                                            else if (cash<total)
                                            {
                                                cashInsufficient();
                                            }
                                                else
                                                {
                                                    change=changeComputation(cash,total);
                                                    do
                                                    {
                                                    cout<<"\n\n\n\n\t\t\tDo you want a Receipt? (Y/N) :     ";
                                                    cin>>receipt;
                                                        if(receipt=='Y'||receipt=='y')
                                                        {
                                                            ReceiptMT(productno,price,quantity,total,discount,cash,change);
                                                            break;
                                                        }
                                                            else if(receipt=='N'||receipt=='n')
                                                            {
                                                                NoReceipt();
                                                                break;
                                                            }
                                                                else
                                                                {
                                                                TAReciept();
                                                                }
                                                    }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');
                                                            //Rating
                                                            rating=customerFeedback();

                                                }
                            }

                }
    return;
}
void ProductB()
{
double price,discount,cash,total,change,amount,quantity;
    int rating,productno;
    char receipt;
    productno=ProductNo();
    while(!(cin>>productno))
    {
        charError();
        cout<<"\n\t\t\tProduct No.                  :     ";
    }
    if(productno>=220&&productno<=230)
    {
    price = 100;
    discount = 0.15;
    cout<<fixed<<setprecision(2)<<"\n\t\t\tPrice                        :     "<<price;
    cout<<"\n\n\t\t\tQuantity                     :     ";
        while(!(cin>>quantity))
            {
                charError();
                cout<<"\n\n\t\t\tQuantity                     :     ";
            }
                if(quantity<=0)
                {
                    negativeError();
                }
                    else
                    {
                        amount=amountComputation(price,quantity);
                        discount=discountComputation(amount,discount);
                        total=totalComputation(amount,discount);
                        cout<<"\n\n\t\t\tCash                         :     ";
                            while(!(cin>>cash))
                                {
                                    charError();
                                    cout<<"\n\n\t\t\tCash                         :     ";
                                }
                                    if(cash<=0)
                                    {
                                        negativeError();
                                    }
                                    else if (cash<total)
                                    {
                                        cashInsufficient();
                                    }
                                        else
                                        {
                                            change=changeComputation(cash,total);
                                            do
                                            {
                                            cout<<"\n\n\n\n\t\t\tDo you want a Receipt? (Y/N) :     ";
                                            cin>>receipt;
                                                if(receipt=='Y'||receipt=='y')
                                                {
                                                    ReceiptC(productno,price,quantity,total,discount,cash,change);
                                                    break;
                                                }
                                                    else if(receipt=='N'||receipt=='n')
                                                    {
                                                        NoReceipt();
                                                        break;
                                                    }
                                                        else
                                                        {
                                                            TAReciept();
                                                        }
                                            }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');
                                                    //Rating
                                                    rating=customerFeedback();

                                        }
                    }

    }
       else if(productno>=240&&productno<=250)
                {
                price = 170;
                discount = 0.2;
                cout<<fixed<<setprecision(2)<<"\n\t\t\tPrice                        :     "<<price;
                cout<<"\n\n\t\t\tQuantity                     :     ";
                    while(!(cin>>quantity))
                    {
                        charError();
                        cout<<"\n\n\t\t\tQuantity                     :     ";
                    }
                        if(quantity<=0)
                        {
                            negativeError();
                        }
                            else
                            {
                                amount=amountComputation(price,quantity);
                                discount=discountComputation(amount,discount);
                                total=totalComputation(amount,discount);
                                cout<<"\n\n\t\t\tCash                         :     ";
                                    while(!(cin>>cash))
                                    {
                                        charError();
                                        cout<<"\n\n\t\t\tCash                         :     ";
                                    }
                                        if(cash<=0)
                                        {
                                            negativeError();
                                        }
                                            else if (cash<total)
                                            {
                                                cashInsufficient();
                                            }
                                                else
                                                {
                                                    change=changeComputation(cash,total);
                                                    do
                                                    {
                                                    cout<<"\n\n\n\n\t\t\tDo you want a Receipt? (Y/N) :     ";
                                                    cin>>receipt;
                                                        if(receipt=='Y'||receipt=='y')
                                                        {
                                                            ReceiptCP(productno,price,quantity,total,discount,cash,change);
                                                            break;
                                                        }
                                                            else if(receipt=='N'||receipt=='n')
                                                            {
                                                                NoReceipt();
                                                                break;
                                                            }
                                                                else
                                                                {
                                                                    TAReciept();
                                                                }
                                                    }while(receipt!='Y'||receipt!='y'||receipt!='N'||receipt!='n');
                                                            //Rating
                                                            rating=customerFeedback();

                                                }
                            }

                }
    return;
}
void NotAvailable()
{
    system("cls");
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\n";
    cout<<"\n\n\t\t\t---------------------------------------";
    cout<<"\n\n\t\t\t     Product Class not available";
    cout<<"\n\n\t\t\t---------------------------------------";
    return;
}
void charError()
{
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\n";
    cout<<"\n\n\t\t\t\tLetter/Symbol is not applicable";
    cout<<"\n\n\t\t\t\t\tTry Again\n\n";
    SetConsoleTextAttribute(h,2);
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    return;
}
void negativeError()
{
    system("cls");
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\n";
    cout<<"\n\n\t\t\t---------------------------------------";
    cout<<"\n\n\t\t\t    Zero/Negative is not applicable";
    cout<<"\n\n\t\t\t---------------------------------------";
    return;
}
void cashInsufficient()
{
    system("cls");
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\n";
    cout<<"\n\n\t\t\t---------------------------------------";
    cout<<"\n\n\t\t\t           Cash Insufficient";
    cout<<"\n\n\t\t\t---------------------------------------";
    return;
}
double amountComputation(double pr, int qt)
{
    double am;
    am = pr*qt;
    cout<<fixed<<setprecision(2)<<"\n\t\t\tAmount                       :     "<<am;
    return am;
}
double discountComputation(double am, double dc)
{
    double dct;
    dct = am*dc;
    cout<<fixed<<setprecision(2)<<"\n\n\t\t\tDiscount Applied             :     -"<<dct;
    return dct;
}
double totalComputation(double am, double dct)
{
    double tt;
    tt = am-dct;
    cout<<fixed<<setprecision(2)<<"\n\n\t\t\tTotal                        :     "<<tt;
    return tt;
}
double changeComputation(double ch, double tt)
{
    double cg;
    cg = ch-tt;
    cout<<fixed<<setprecision(2)<<"\n\n\t\t\tChange                       :     "<<cg;
    return cg;
}
void ReceiptM(int pn,double pr, int qt, double tt, double dc, double ch,double cg)
{

    system("cls");
    SetConsoleTextAttribute(h,9);
     cout<<"\n\n\n";
    cout<<"\n\n\t\t\t============================================";
    cout<<"\n\n\t\t\t                 CASH RECEIPT";
    cout<<"\n\n\t\t\t============================================";
    cout<<"\n\n\t\t\tProduct Class \t\t\tA";
    cout<<"\n\n\t\t\tProduct\t\t\t\tMilktea";
    cout<<"\n\n\t\t\tProduct No.  \t\t\t"<<pn;
    cout<<"\n\n\t\t\tPrice\t\t\t\t"<<pr;
    cout<<"\n\n\t\t\tQuantity  \t\t\t"<<qt;
    cout<<"\n\n\t\t\t--------------------------------------------";
    cout<<"\n\n\t\t\tDiscount Applied\t\t-"<<dc;
    cout<<"\n\n\t\t\tTotal\t\t\t\t"<<tt;
    cout<<"\n\n\t\t\tCash\t\t\t\t"<<ch;
    cout<<"\n\n\t\t\tChange\t\t\t\t"<<cg;
    cout<<"\n\n\t\t\t--------------------------------------------";
    cout<<"\n\n\t\t\t\t          THANK YOU!";
    cout<<"\n\n\t\t\t--------------------------------------------";
    cout<<"\n\n\n";
    system("pause");
    system("cls");
    return;
}
void ReceiptMT(int pn,double pr, int qt, double tt, double dc, double ch,double cg)
{

    system("cls");
    SetConsoleTextAttribute(h,9);
     cout<<"\n\n\n";
    cout<<"\n\n\t\t\t======================================================";
    cout<<"\n\n\t\t\t                       CASH RECEIPT";
    cout<<"\n\n\t\t\t======================================================";
    cout<<"\n\n\t\t\tProduct Class \t\t\tA";
    cout<<"\n\n\t\t\tProduct\t\t\t\tMilktea w/ Takoyaki";
    cout<<"\n\n\t\t\tProduct No.  \t\t\t"<<pn;
    cout<<"\n\n\t\t\tPrice\t\t\t\t"<<pr;
    cout<<"\n\n\t\t\tQuantity  \t\t\t"<<qt;
    cout<<"\n\n\t\t\t------------------------------------------------------";
    cout<<"\n\n\t\t\tDiscount Applied\t\t-"<<dc;
    cout<<"\n\n\t\t\tTotal\t\t\t\t"<<tt;
    cout<<"\n\n\t\t\tCash\t\t\t\t"<<ch;
    cout<<"\n\n\t\t\tChange\t\t\t\t"<<cg;
    cout<<"\n\n\t\t\t------------------------------------------------------";
    cout<<"\n\n\t\t\t\t               THANK YOU!";
    cout<<"\n\n\t\t\t------------------------------------------------------";
    cout<<"\n\n\n";
    system("pause");
    system("cls");
    return;
}
void ReceiptC(int pn,double pr, int qt, double tt, double dc, double ch,double cg)
{

    system("cls");
    SetConsoleTextAttribute(h,9);
    cout<<"\n\n\n";
    cout<<"\n\n\t\t\t============================================";
    cout<<"\n\n\t\t\t                 CASH RECEIPT";
    cout<<"\n\n\t\t\t============================================";
    cout<<"\n\n\t\t\tProduct Class \t\t\tB";
    cout<<"\n\n\t\t\tProduct\t\t\t\tCoffee";
    cout<<"\n\n\t\t\tProduct No.  \t\t\t"<<pn;
    cout<<"\n\n\t\t\tPrice\t\t\t\t"<<pr;
    cout<<"\n\n\t\t\tQuantity  \t\t\t"<<qt;
    cout<<"\n\n\t\t\t--------------------------------------------";
    cout<<"\n\n\t\t\tDiscount Applied\t\t-"<<dc;
    cout<<"\n\n\t\t\tTotal\t\t\t\t"<<tt;
    cout<<"\n\n\t\t\tCash\t\t\t\t"<<ch;
    cout<<"\n\n\t\t\tChange\t\t\t\t"<<cg;
    cout<<"\n\n\t\t\t--------------------------------------------";
    cout<<"\n\n\t\t\t\t          THANK YOU!";
    cout<<"\n\n\t\t\t--------------------------------------------";
    cout<<"\n\n\n";
    system("pause");
    system("cls");
    return;
}
void ReceiptCP(int pn,double pr, int qt, double tt, double dc, double ch,double cg)
{

    system("cls");
    SetConsoleTextAttribute(h,9);
    cout<<"\n\n\n";
    cout<<"\n\n\t\t\t======================================================";
    cout<<"\n\n\t\t\t                       CASH RECEIPT";
    cout<<"\n\n\t\t\t======================================================";
    cout<<"\n\n\t\t\tProduct Class \t\t\tB";
    cout<<"\n\n\t\t\tProduct\t\t\t\tCoffee w/ Pancake";
    cout<<"\n\n\t\t\tProduct No.  \t\t\t"<<pn;
    cout<<"\n\n\t\t\tPrice\t\t\t\t"<<pr;
    cout<<"\n\n\t\t\tQuantity  \t\t\t"<<qt;
    cout<<"\n\n\t\t\t------------------------------------------------------";
    cout<<"\n\n\t\t\tDiscount Applied\t\t-"<<dc;
    cout<<"\n\n\t\t\tTotal\t\t\t\t"<<tt;
    cout<<"\n\n\t\t\tCash\t\t\t\t"<<ch;
    cout<<"\n\n\t\t\tChange\t\t\t\t"<<cg;
    cout<<"\n\n\t\t\t------------------------------------------------------";
    cout<<"\n\n\t\t\t\t               THANK YOU!";
    cout<<"\n\n\t\t\t------------------------------------------------------";
    cout<<"\n\n\n";
    system("pause");
    system("cls");
    return;
}
void NoReceipt()
{
    system("cls");
    SetConsoleTextAttribute(h,6);
    cout<<"\n\n\n";
    cout<<"\n\n\t\t\t---------------------------------------";
    cout<<"\n\n\t\t\t     THANK YOU FOR YOUR PURCHASE!";
    cout<<"\n\n\t\t\t---------------------------------------";
    return;
}
void TAReciept()
{
    system("cls");
    SetConsoleTextAttribute(h,4);
    cout<<"\n\n\t\t\t---------------------------------------";
    cout<<"\n\n\t\t\t       Invalid Input, Try Again";
    cout<<"\n\n\t\t\t---------------------------------------";
    return;
}
int customerFeedback()
{
    int rating;
    cout<<"\n\n\n\n\t\t\t           CUSTOMER EXPERIENCE"<<endl;
    cout<<"\n\t\t[5] Excellent\n\t\t[4] Very Good\n\t\t[3] Good\n\t\t[2] Average\n\t\t[1] Poor";
        do
        {
        cout<<"\n\n\t\t\tHow's your Experience?     :     ";
        while(!(cin>>rating))
        {
            charError();
            cout<<"\n\n\t\t\tHow's your Experience?     :     ";
        }

            if(rating>=1&&rating<=5)
            {
                system("cls");
                SetConsoleTextAttribute(h,9);
                cout<<"\n\n\n";
                cout<<"\n\t\t\t---------------------------------------";
                cout<<"\n\n\t\t\t     THANK YOU FOR YOUR FEEDBACK!";
                cout<<"\n\n\t\t\t---------------------------------------";
            }
                    else
                    {
                        SetConsoleTextAttribute(h,4);
                        cout<<"\n\n\n";
                        cout<<"\n\n\t\t\t---------------------------------------";
                        cout<<"\n\n\t\t\t  You have enter an invalid number!";
                        cout<<"\n\n\t\t\t---------------------------------------";
                    }
        }while(rating<=0||rating>=6);
    return rating;
}
