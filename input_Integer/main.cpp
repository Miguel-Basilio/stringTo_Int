//
//  main.cpp
//  input_Integer
//
//  Created by AB on 9/4/21.
//

#include <iostream>
#include <string>
#include <cmath>


using namespace std;
/*
 
example 1
int convert(string str){
    int num =0, size = str.size();
    for (int i = 0, j = size; i < size; i++)
        num+=(str[--j]-'0') * pow(10,i);
    return num;
}



int main(int argc, const char * argv[]) {
    string strOfDigits;
    cout << "Enter a Whole Number: " << endl;
    getline (cin, strOfDigits);
    int aNumber= convert(strOfDigits);
    cout << "Converted String to Int: " << aNumber << endl;
 
 retun 0;
 }
 */

//example 2
// function for converting string to integer
int stringTointeger(string str)
{
    int aNumber = 0;
    for (int i = 0; i < str.length(); i++) {
  
        // Since ASCII value of character from '0'
        // to '9' are contiguous. So if we subtract
        // '0' from ASCII value of a digit, we get
        // the integer value of the digit.
        aNumber = aNumber * 10 + (str[i] - '0');
    }
    return aNumber;
}




int main(int argc, const char * argv[]) {
    string strOfDigits ;
    cout << "Enter Whole Number: " << endl;
    cin >> strOfDigits;
        int aNumber = stringTointeger(strOfDigits);
        cout << "Converted String to Number is: " <<aNumber << endl;
 
 return 0;
 
}
