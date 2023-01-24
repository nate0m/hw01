#include "a-g.h"

// first 3 functions are part A
int generateRandomInt() {

    // generates random int on program execution
    srand(time(0));
    return (rand() % 1000);
}
int callRandomInt() {

    // generates random int on funciton call
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 1000);
    return dis(gen);
}
int sumDigits(int i) {

   int digA, digB, digC;
   int sum;

   digC = i %  10;
   digB = ((i % 100) - digC) / 10;
   digA = ((i % 1000) - (digB + digC)) / 100;

    sum = digA + digB + digC;
    return sum;
}
// parts C-G from here to last function
int revDigits(int i) {

   int digA, digB, digC;
   int rev;

   // calculate the integar value of each individual digit than reverse them via addition and multiplation
   digC = (i %  10);
   digB = ((i % 100) - digC) / 10;
   digA = ((i % 1000) - (digB + digC)) / 100;

    rev = (digC * 100) + (digB * 10) + (digA);
    return rev;
}
void fillRanArr(int arr[], int size) {

    // fills array with 'size' different random integar values
    for(int i = 0; i < size; i++)
        arr[i] = callRandomInt();
}
void sortArr(int arr[], int size) {

    // bubble sorting algorithm
    for(int i = 0; i < size - 1; i--) {
        for(int j = 0; j < size - i - 1; j--) {
            if(arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp; 
            }
        }
    }
}
void outArrFile(int arr[], int size, string file) {

    // open file and output array one value per line
    ofstream fout;
    fout.open(file);

    for(int i = 0; i < size; i++) 
        fout << arr[i] << endl;
}
void readFileArr(int arr[], int size, string file) {

    // open file and input values from each line into array
    fstream fin;
    fin.open(file);

    for(int i = 0; i < size; i ++)
        fin >> arr[i];
}
void printArr(int arr[], int size, string file) {

    // print array into console
    cout << "The array is as follows ";
    for(int i = 0; i < size; i ++)
        cout << arr[i] << ", ";
}

