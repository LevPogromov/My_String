// Copyright 2024 by Contributors
#include "../include/MyString.hpp"
int main() {
    // constructors
    std::cout << "showing constructors" << std::endl << std::endl;
    MyString abc("abc");  // char*
    std::cout << "char* : " << abc << std::endl;
    std::string Str = "bca";
    MyString abc2(Str);  // string
    std::cout << "string : " << abc2 << std::endl;
    MyString abc3(std::move(abc));  // moved
    std::cout << "moved string : " << abc3 << std::endl;
    MyString abc4(abc2);  // copied
    std::cout << "copied string : " << abc4 << std::endl << std::endl;
    // operators and functions
    std::cout << "showing operators and functions" << std::endl << std::endl;
    MyString s1("Hello");
    MyString s2("World");
    MyString check1("abs");
    MyString check2("bs");
    MyString check3("fff");
    MyString s3 = s1+s2;
    MyString s4 = s1*2;
    MyString s5 = s1-s2;
    MyString s6 = !s1;
    MyString s7 = (MyString)"abcde";
    std::cout << "Length of Hello : " << s1.length() << std::endl;  // 5

    std::cout << "Get(Hello) : " << s1.get() << std::endl;  // Hello

    std::cout << "Hello + World : " << s3 << std::endl;  // HelloWorld

    std::cout << "Hello*2 : " << s4 << std::endl;  // HelloHello

    std::cout << "Hello - World : " << s5 << std::endl;  // He

    std::cout << "Hello == World : " << (s1 == s2) << std::endl;  // false

    std::cout << "Hello != World : " << (s1 != s2) << std::endl;  // true

    std::cout << "Hello > World : " << (s1 > s2) << std::endl;  // true

    std::cout << "Hello < World : " << (s1 < s2) << std::endl;  // false

    std::cout << "Hello >= World : " << (s1 >= s2) << std::endl;  // true

    std::cout << "Hello <= World : " << (s1 <= s2) << std::endl;  // false

    std::cout << "!Hello : " << s6 << std::endl;  // hELLO

    std::cout << "Hello[1] : " << s1[1] << std::endl;  // e

    std::cout << "abs(bs) : " << check1(check2) << std::endl;  // 1

    std::cout << "abs(fff) : " << check1(check3) << std::endl;  // -1
    std::cout << std::endl;

    MyString newstr;
    std::cout << "Enter any string : ";
    std::cin >> newstr;
    std::cout << "This is your string : " << newstr;
    return 0;
}
