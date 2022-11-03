// grading system.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int a;
    std::cout << "what is your grade\n";
    std::cin >> a;
    

    if (a >=96&&a<= 100)
    {
        
       std:: cout<<"your grade point is :1.00" << "\n" << "your grade input is :A+" << "\n";
    }
    else if (a>=91&&a<=95)
    {
       
        std::cout<<"your grade point is :1.25" << "\n" << "your grade input is :A" << "\n";
    }
    else if (a>=86&&a<=90)
    {
        
        std::cout << "your grade point is :1.50" << "\n" << "your grade input is :A-" << "\n";
    }
    else if (a>=81&&a<=85)
    {
        
        std::cout<<"your grade point is :1.75" << "\n"<< "your grade input is :B+" << "\n";
    }
    else if (a>=75&&a<=80)
    {
        
        std::cout<< "your grade point is :2.00" << "\n" << "your grade input is :B" << "\n";

    }
    else if (a>=69&&a<=74)
    {
        std::cout <<"your grade point is :2.25" << "\n" << "your grade input is :b-" << "\n";

    }
    else if (a>=63&&a<=68)
    {
        
        std::cout << "your grade point is :2.50" << "\n"<< "your grade input is :c+" << "\n";
    }
    else if (a>=57&&a<=62)
    {
 
        std::cout <<"your grade point is :2.75" << "\n" << "your grade input is :c" << "\n";
    }
    else if (a>=50&&a<=56)
    {
        std::cout <<"your grade point is :3.00" << "\n" << "your grade input is :c-" << "\n";
    }
    else if (a<50)
    {
        std::cout  <<"your grade point is :5.00" << "\n"<< "your grade input is :F" << "\n";

    }
    return 0;
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
