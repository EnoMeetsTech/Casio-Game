#include <iostream>
#include <cstdlib>
#include <ctime>


using namespace std;

int main()
{

    srand (time (0));
    string name;
    int MagicNumber = rand () % 11;
    int Number;


    cout << "Enter your name" << endl;
    cin >> name;


    BackHere:
    cout << "Pick a number between 0 and 10 " << endl;
    cin >> Number;

    if (Number > 10 or Number < 0){
        goto BackHere;
    }

    if (Number == MagicNumber) {
        cout << endl << " Yay!" << name << ", You have won!" << endl;
    } else {
    cout << "Oops! Try again, next time." << endl;

    }

}
