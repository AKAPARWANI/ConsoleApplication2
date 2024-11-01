// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*if (proCatagory == 'E' && 'e') {
        tax = price * 0.05;
        price = tax + price;
        totallbill += price;
    }
    else if (proCatagory == 'C' && 'c') {
        tax = price * 0.08;
        price = price + tax;
        totallbill += price;
    }

    else if (proCatagory == 'G' && 'g') {
        tax = price * 0.03;
        price = price + tax;
        totallbill += price;
    }
    else {
        cout << "you have entered the wrong letter out of the range: ";
        return 1;
    }*/
#include<iostream>
using namespace std;
int main(){
    float price, tax, totallbill=0, discount=0;
    char proCatagory,membership, couponDiscount;
    string couponCode;

    cout << "Enter the orginal price of the product: ";
    cin >> price;
    cout << "\n";

    cout << "please enter your membership level:\n S for Silver \n G for Gold\n";
    cin >> membership;
    if (membership == 'S' || membership =='s') {
        discount = price * 0.05;
        price = price - discount;
        totallbill += price;
    }
    else if (membership == 'G' || membership =='g') {
        discount = price * 0.10;
        price = price - discount;
        totallbill += price;
    }
    else {
        cout << "you have entered the wrong letter!";
        return 0;
    }
        
       

    cout << "Enter the product category: \n E for Electronics\n C for Clothing\n G for groceries\n";
    cin >> proCatagory;
    switch (proCatagory){
    case 'E':
    case 'e':
        discount = price * 0.05;
        price -= discount;
        
        break;
    case 'c':
    case 'C':
        discount = price * 0.08;
        price -= discount;
        
        break;
    case 'G':
    case 'g':
        discount= price * 0.03;
        price -= discount;
        
        break;

    default:
        cout << "You have entered the wrong latter, out of the range";
        return 1;
        break;

    }

    
    cout << totallbill << "\n";
    cout << "Do you have a coupon for an extra discount? Y/N";
    cin >> couponDiscount;
    if (couponDiscount == 'Y') {
        cout << "enter the coupon code: ";
        cin >> couponCode;
        if (couponCode == "SAVE20") {
            price = totallbill * 0.20;
            totallbill -= price;
            cout << "The Totall bill after the last discount is: " << totallbill;
        }
        else
            cout << "you have entered the wrong password";
        cout << "the Totall bill is " << totallbill;
        
    }
    else if (couponDiscount == 'N') {
        cout << "The Totall bill, Still is " << totallbill;
    }
        
    

    return 0;
}

