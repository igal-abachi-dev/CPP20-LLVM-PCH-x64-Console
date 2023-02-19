// ConsoleApplication2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"

#include "logic1.h"
using namespace Logic;

//before main:
//static int __cdecl invoke_main() 
//{
//    return main(__argc, __argv, _get_initial_narrow_environment());
//}


//using namespace std; // No problem since scope is limited(as it's not in header file) , but still prefer to fully qualify names , to avoid collisions , it meant for old code bases
int a;
//int main(){}
int __cdecl main(int argc/*1*/, const char** argv/*D:\Dev\VS-2022\ConsoleApplication2\x64\Debug\ConsoleApplication2.exe*/, const char** envp/*ALLUSERSPROFILE=C:\ProgramData*/) 
{
    //using std::cout; //is prefferd vs  entine namespace , use using only declerative and inside some limited scope {}, or fully qualify
    //using std::endl; 
    //using std::cin;


    std::cout << "Hello World!\n";
    std::cout << std::endl;//add \n

    logic_1 lg;
    lg.fn1(1);

//    std::cin >> ns1::a;
 //   std::cin >> ::a;//from global namespace

//    return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
