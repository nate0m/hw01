#include "a-g.h"

int main() {

    typedef int randomNumber;
    int s, r;
    randomNumber x = 0;
    int arr[10];


    // Part B
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    Weekday today = Monday;

    if(today >= 4) {
        cout << "You are more than halfway through the week!" << endl;;
    } else {
        cout << "You are less than halfway through the week" << endl;
    }




    x = generateRandomInt();
    s = sumDigits(x);
    r = revDigits(x);

    cout << "PART A " << endl;
    cout << x;
    cout << endl << s;
    cout << endl << r << endl;;

    fillRanArr(arr, 10);

    outArrFile(arr, 10, "text.txt");

    readFileArr(arr, 10, "text.txt");

    printArr(arr, 10, "text.txt");


    return 0;
}
