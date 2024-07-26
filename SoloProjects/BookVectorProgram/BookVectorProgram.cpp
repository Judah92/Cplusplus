//C++ Refresher: if-else statements, Loops, and Arrays and Vectors. 
#include <iostream>
#include <vector>
#include <string>
//using std::cout
//using std::vector;
//using std::string;
//using std::cout
//using std::endl
using namespace std;//contains all directives for vectors, strings, cin/cout, endl ect.


int main()
{
    const int NUM_BOOKS_IN_STOCK = 6;
    vector<string> allTheBooks(NUM_BOOKS_IN_STOCK);
    unsigned int i;

    cout << "Enter: " << NUM_BOOKS_IN_STOCK << " Book Names" << endl;
    for (i = 0; i < allTheBooks.size(); ++i)
    {
        cout << "Book Name: ";
        //cin >> allTheBooks.at(i);
        getline(cin, allTheBooks.at(i));//getline accomodates whitespace in input for strings
    }

    cout << "You Entered: ";
    for (i = 0; i < allTheBooks.size(); ++i)
    {
        cout << allTheBooks.at(i);
        if (i < allTheBooks.size() - 1)//Check if it's not last element in vector
        {
            cout << ", ";
        }
    }
    cout << endl << "Number of Books in the Vector: " << allTheBooks.size() << endl;

    return 0;
}