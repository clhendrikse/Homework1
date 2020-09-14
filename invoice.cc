/*
 *        File: invoice.cc
 *      Author: Chloe Hendrikse
 *        Date: 9/13/2020
 * Description: 
 *              Invoice HW for CS2400
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main(int argc, char const *argv[]) {

    string residency, driveType, response, brand; // variable declaration
    double number, total, subtotal, quantity, price, discount, taxes, tprice;
    cout << "Enter a hard drive type (w, s) followed by quantity: ";
    cin >> driveType;
    cin >> quantity; //inputting drive type and quantity of drives
    if (driveType == "w")
    {
        price = 90.00;
        brand = "Western Digital";
    }
    if (driveType == "s")
    {
        brand = "Seagate";
        price = 95.00;
    }
    if (quantity >= 5)
    {
        tprice = quantity * price;
        number = quantity;
        discount = .05 * price;
        subtotal = quantity * (price - discount);
    }
    else
    {
        tprice = quantity * price;
        number = quantity;
        discount = 0;
        subtotal = quantity * price;
    }
    


       cout << "Do you live in Ohio? (yes or no)";
   cin >> residency; //where they input residency
   if (residency == "yes")
   {
       taxes = (.7 * subtotal);
       total = subtotal + taxes;
   }
   if (residency == "no")
   {
       taxes = 0;
       total = subtotal + taxes;
   }
   

   // Invoice
   cout << "Hard Drives Invoice" << endl;
   cout << "---------------------------" << endl;
   cout << "Drive Brand: " << brand << endl;
   cout << "Quantity: " << number << endl;
   cout << "Price: $" << price << endl;
   cout << "Ohio resident: " + residency << endl;
   cout << "Total price: $" << tprice << endl;
   cout << "---------------------------" << endl;
   cout << "Discount: $" << discount << endl;
   cout << "Subtotal: $";
   cout << subtotal << endl;
   cout << "Taxes: $";
   cout << taxes << endl;
   cout << "===========================" << endl;
   cout << "Total; $"; 
   cout << total << endl;
   cout << "===========================";




   

    return 0;
}// main