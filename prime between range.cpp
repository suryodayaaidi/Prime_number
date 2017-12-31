/* <--- Start program ----> */

#include<iostream>
using namespace std;

int main(){

    int i, check, low_element, high_element;

    cout << "\t Welcome!\n" ;
    cout << "\t Enter lower number of the range:";
    cin >> low_element;

    cout << "\t Enter higher number of the range:";
    cin >> high_element;

    cout << "\t The prime number between " << low_element << " and " << high_element << " are:" << endl;
    low_element++;

    while(low_element < high_element){
            check = 0;                    // Initializing the check variable.
            for(i = 2; i < (low_element/2); i++){
                if(low_element%i == 0){
                    check = 1;
                    break;       //Break loop if the number is prime
                }
            }
            if(check == 0){
                    cout << "\t " << low_element ; // Display prime number
    }
    low_element++; // Increment low_element.
    }
    return 0;
}
/* End program */
