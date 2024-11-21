// Copyright 2024 by Contributors
#pragma once
#ifndef INCLUDE_MYSTRING_H_
#define INCLUDE_MYSTRING_H_
#include <cstring>
#include <string>
#include <iostream>
class MyString{
 private:
    char *str;

 public:
    explicit MyString(const char* s = nullptr);
    explicit MyString(const std::string &s);
    MyString(MyString &&other);
    MyString(const MyString &other);
    ~MyString();
    int length() const;
    char* get() const;
    MyString operator+(const MyString& other) const;
    MyString operator-(const MyString& other) const;
    MyString operator*(const int k) const;
    MyString& operator=(const MyString& other);
    MyString& operator=(MyString&& other) noexcept;
    bool operator==(const MyString& other) const;
    bool operator!=(const MyString& other) const;
    bool operator>(const MyString& other) const;
    bool operator<(const MyString& other) const;
    bool operator>=(const MyString& other) const;
    bool operator<=(const MyString& other) const;
    MyString operator!() const;
    char& operator[](const int index) const;
    int operator()(const MyString& other) const;
    friend std::istream& operator>>(std::istream& in, MyString& string);
    friend std::ostream& operator<<(std::ostream& os, const MyString& string);
};

#endif
