#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main()
{

//  Display Introductory Message
cout << "this is c++ program to analyze product sale and inventary!\n";
cout << "This code is programmed to solve problems of  product sales, inventory levels, and tax rate.\n";
cout << "Please remember that C++ is a compiled language, so you'll need a compiler to run this program.\n\n";

// declaring variables for the detail of the product
string productName;
int productCategory;
int initialInventory;
float productPrice;
int itemsSold;

int newInventory;
float totalSales;
string inventoryStatus;

//different ways of initializing variables
string productName1 = "cell phone";
int productCategory1 = 4;
int initialInventory1 = 15;
float productPrice1 = 40.25;
int itemsSold1 = 6;

string productName2{"television"};
int productCategory2{4};
int initialInventory2{15};
float productPrice2{42.50};
int itemsSold2{10};

// use auto and decltype in declaring and initializing variables
auto totalSalesHelper=totalSales;
decltype(initialInventory) initialInventoryHelper=30;


#define  TAX_RATE_REPROCESSOR 0.2
const float taxRateConst= 0.4;

// getting input from the user
cout <<"Enter productName which has only one word: "<< endl;
cin >>productName;
cout <<"Enter productCategory between 1 and 5 including both: "<< endl;
cin >> productCategory;
cout <<"Enter initialInventory quantity: "<< endl;
cin >>initialInventory;
cout <<"Enter productPrice of the sale: "<< endl;
cin >>productPrice;
cout <<"Enter number of items sold: "<< endl;
cin >> itemsSold;
cout <<"\n";

// by using conditionals to check whether new inventory is less or greater than ten
newInventory = initialInventory-itemsSold;
totalSales= itemsSold * productPrice;
inventoryStatus=(newInventory<10)? "Low Inventory" : "Sufficient Inventory";

 // checking if productCategory is in the required interval by combining if and switch
 if (productCategory< 1 || productCategory> 5){
        cout << "Invalid product category. Please enter a number between 1 and 5.\n";
    } else {
        switch (productCategory) {
            case 1:
                cout << "first category is : Electronics\n";
                break;
            case 2:
                cout << "second category is : Groceries\n";
                break;
            case 3:
                cout << "third category is : Clothing\n";
                break;
            case 4:
                cout << "fourth category is : Stationery\n";
                break;
            case 5:
                cout << "fifth category i: Miscellaneous\n";
                break;
        }
     }





    // details of each items sold with their price

cout<< "the reciept of tax rate seems like: \n";
for (int i=1; i<=itemsSold; i++) {
        cout << "Item " << i << " costs " << productPrice << endl;
    }



// printing tax rates in percent
float newTaxRateReprocessor=TAX_RATE_REPROCESSOR * 100;
cout <<"Tax rate from preprocessor is: " << newTaxRateReprocessor  <<"%\n";
cout <<"Tax rate from const variable is: " <<taxRateConst*100 <<"%\n";

// the product details
cout <<"\nProduct Details of the product:\n";
cout <<"Product name is: " <<productName <<endl;
cout <<"Product category is: " <<productCategory <<endl;
cout <<"Initial inventory is: " <<initialInventory <<endl;
cout <<"Product price is: "  <<productPrice <<endl;
cout <<"Items soldis: " <<itemsSold <<endl;
cout <<"New inventory is: " <<newInventory <<endl;
cout <<"Total sales is: " <<totalSales <<endl;
cout <<"Inventory status is: " <<inventoryStatus <<endl;
cout << "\nHelper Variable Values:\n";
cout << "Total sales helper (using 'auto'): costs" << totalSalesHelper << "\n";
cout << "Initial inventory helper (using 'decltype'): " << initialInventoryHelper << "\n";



//the program is done
cout<<"this is the end of the program!";
return 0;
}
