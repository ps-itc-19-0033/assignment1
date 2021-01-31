#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{   //Purchasing an item.
    string name,id,item,Printer, Phone, Table;
    int quantity;
    double const printer = 850.00,
                 phone = 750.00,
                 table = 80.00;
    double VAT = 0.12;

    cout << "\n--------WELCOME TO INF SUPERMARKET---------\n"<< endl;

    cout << "Please Enter Your Name. " << endl;
    cin >> name;
    cout << "\nPlease enter your unique ID." << endl;
    cin >> id;

    cout << "\nHELLO " << name <<", THESE ARE THE ITEMS BEEN SOLD HERE: "<< endl;
    cout << " 1. Printer " << endl;
    cout << " 2. Phone " << endl;
    cout << " 3. Table" <<endl;



    string toContinue= "yes";

    while (toContinue=="yes"|| toContinue=="Yes"|| toContinue=="YES"){

    cout << "\nPlease, which of the items do you want to buy?" <<endl;
    cin >> item;

    a:
    cout << "\nPlease, how many " << item <<"(s) do you want to buy?" << endl;
    cin >> quantity;

    //Calculating the Total Cost for each item.
    int printerTotalCost,phoneTotalCost,tableTotalCost;
    printerTotalCost = printer* quantity;
    phoneTotalCost = phone*quantity;
    tableTotalCost = table*quantity;

    //Calculating the VAT Amount for each item.
    double printerVatAmount, phoneVatAmount,tableVatAmount;
    printerVatAmount = VAT*printerTotalCost;
    phoneVatAmount = VAT*phoneTotalCost;
    tableVatAmount = VAT*tableTotalCost;

    //Calculating the Total Amount for each item.
    int printerTotalAmount, phoneTotalAmount, tableTotalAmount;
    printerTotalAmount = printerTotalCost + printerVatAmount;
    phoneTotalAmount = phoneTotalCost + phoneVatAmount;
    tableTotalAmount = tableTotalCost + tableVatAmount;

    double amountToPay;
    float printerBalance,phoneBalance,tableBalance;


    if( item=="Printer"||item=="printer"||item=="PRINTER"){
        cout << "\nTotal amount you owe is $" <<printerTotalAmount<< endl;
        cout << "\nPlease enter the amount to pay." <<endl;
        b:
        cin >> amountToPay;


         printerBalance = amountToPay - printerTotalAmount;
        if(amountToPay>=printerTotalAmount){
            cout << "\nYour balance is $" << printerBalance << endl;
        }
        else{
            cout << "\nSorry! your payment amount is insufficient to complete this transaction." <<endl;
            cout << "\nPlease enter a payment amount that is sufficient enough to complete this transaction." <<endl;
            goto b;
        }

        }

            else if(item=="Phone"||item=="phone"||item=="PHONE"){
        cout << "\nTotal amount you owe is $" <<phoneTotalAmount<< endl;
        cout << "\nPlease enter the amount to pay" <<endl;
        c:
        cin >> amountToPay;


        phoneBalance = amountToPay - phoneTotalAmount;
        if(amountToPay>=phoneTotalAmount){
            cout << "\nYour balance is $" << phoneBalance << endl;
        }
        else{
            cout << "\nSorry! your payment amount is insufficient to complete this transaction." <<endl;
            cout << "\nPlease enter a payment amount that is sufficient enough to complete this transaction." <<endl;
            goto c;
        }
            }
            else if(item=="Table"||item=="table"||item=="TABLE"){
        cout << "\nTotal amount you owe is $" <<tableTotalAmount<< endl;
        cout << "\nPlease enter the amount to pay" <<endl;
        d:
        cin >> amountToPay;


         tableBalance = amountToPay - tableTotalAmount;
        if(amountToPay>=tableTotalAmount){
            cout << "\nYour balance is $" << tableBalance << endl;
        }
        else{
            cout << "\nSorry! your payment amount is insufficient to complete this transaction." <<endl;
            cout << "\nPlease enter a payment amount that is sufficient enough to complete this transaction." <<endl;
            goto d;
        }
    }
            else{
                cout << "Please enter one of the items being sold here." <<endl;
                cin >> item;
                goto a;
            }




    //Receipt for customer


    cout << "\n\n       INF SUPERMARKET RECEIPT" <<endl;
    cout << "===========================================================" <<endl;
    cout << " \n  Name of Customer : " << name << endl;
    cout <<" \n  Unique ID        : " << id << endl;
    cout <<" \n  Item Bought      : " << item << endl;
    cout <<" \n  Quantity Bought  : " << quantity << endl;

    if(item=="Printer"||item=="printer"||item=="PRINTER"){
            cout <<" \n  VAT Amount       : $" <<printerVatAmount << endl;
            cout <<" \n  Total Cost       : $" <<printerTotalCost <<endl;
            cout <<" \n  Total Amount Paid: $" <<amountToPay <<endl;
            cout <<" \n  Balance/Change   : $" <<printerBalance <<endl;
    }

        else if(item=="Phone"||item=="phone"||item=="PHONE"){
            cout <<" \n  VAT Amount       : $" <<phoneVatAmount <<endl;
            cout <<" \n  Total Cost       : $" <<phoneTotalCost <<endl;
            cout <<" \n  Total Amount Paid: $" <<amountToPay<<endl;
            cout <<" \n  Balance/Change   : $" <<phoneBalance<<endl;
        }

        else {
            cout <<" \n  VAT Amount       : $" <<tableVatAmount <<endl;
            cout <<" \n  Total Cost       : $" <<tableTotalCost <<endl;
            cout <<" \n  Total Amount Paid: $" <<amountToPay <<endl;
            cout <<" \n  Balance/Change   : $" <<tableBalance <<endl;
        }

        cout <<"\n\n           Thank You for transacting with us :Message          "<< endl;
    cout<< "===============================================================" <<endl;


        cout<< "\nPLEASE ENTER 'YES' IF YOU WOULD WANT TO BUY ANYTHING ELSE OR PRESS ANY KEY(S) TO END TRANSACTIONS."<<endl;
        cin>>toContinue;

    }





    return 0;
}
