/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"Enter size of array" << endl;
    std::cin >> n;
    char arr[n+1];
    cout << "enter characters" << endl;
    cin >> arr;
    bool check= 1;
    for(int i=0; i<n; i++){
    if(arr[i] != arr[n-1-i]){
        check = false;
        break;
    };
    };
    if(check==true){
        std::cout << "word is pallindrome" << std::endl;
    } else{
        cout<< "word is not pallindrome" << endl;
    }
}