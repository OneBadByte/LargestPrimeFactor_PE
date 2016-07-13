#include <iostream>

using namespace std;

//The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143?
//1:40:36

template <typename t>
bool isOdd(t number) {

    if (number % 2 == 0) {

        return false;

    } else {

        return true;

    }


}

template <typename t>
bool isFactor(t number, t factorInQuestion) {

    if (number % factorInQuestion == 0) {
        //cout << "true" << endl;
        return true;

    } else {
        //cout << "false" << endl;
        return false;
    }


}


int main() {

    long long factors[999999];
    int counter = 0;
    long long numbers = 600851475143;
    //long long numbers = 600851475;


    for (long long i = numbers - 1; i >= 1; i--) {
        if (isFactor(numbers, i) && isOdd(i)) {


            //factors[counter] = i;
            //counter++;
            cout << i << endl;


        }


    }

    //for (int i = 0; i < counter; i++) {

      //  cout << factors[i] << " " << endl;

    //}

    return 0;
}