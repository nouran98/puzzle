// Course:  CS213 - Programming II  - 2018
// Title:   Assignment I - Task 2 - Problem 14
// Program: CS213-2018-A1-T2-P14
// Purpose: Searching for the words end with " dous " to complete the puzzle
// Author:  Nouran Qassem Mohamed
// Date:    22 September 2018
// Version: 1.0




#include <iostream>
#include <fstream>
using namespace std;

int i=0 ;

void check ( char arr[])
{
    if (arr[i-1] == 's' && arr[i-2] == 'u' && arr[i-3] == 'o' && arr[i-4] == 'd' )
        {
            for (int j=0 ; j < i ; j++ )
            {
                cout << arr [j] ;
            }
            cout<< endl ;
        }
}

int main()
{

    ifstream in ;
    char x;
    in.open("words.txt");
    char arr[50] ;
    while ( in >> x )
    {
        if ( (x >= 65 && x <= 90 ) || (x >= 97 && x <=122 ))
           {
            arr[i] = x ;
            i++ ;
           }
        if ( in.peek()== '\n' )
            {
                check (arr) ;
                i=0 ;
            }
    }



    return 0;
}
