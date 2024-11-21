// Copyright 2024 by Contributors
#include "../include/MyString.hpp"

MyString::MyString(const char *s) {
    if (s != nullptr) {
        int len = strlen(s)+1;
        this->str = new char[strlen(s)];
        snprintf(str, len, "%s", s);
    } else {
        this->str = new char[1];
        memset(str, 0, 1);
    }
}

MyString::MyString(const std::string &s) {
    int len = s.length() + 1;
    str = new char[len];
    snprintf(str, len, "%s", s.c_str());
}

MyString::MyString(MyString &&existStr) {
    str = existStr.str;
    existStr.str = nullptr;
}

MyString::MyString(const MyString &existStr) {
    int len = strlen(existStr.str)+1;
    this->str = new char[len];
    snprintf(str, len, "%s", existStr.str);
}

MyString::~MyString() {
    delete[] this->str;
}

int MyString::length() const {
    return strlen(this->str);
}

char* MyString::get() const {
    return &this->str[0];
}

MyString MyString::operator+(const MyString& other) const {
    MyString newstr;
    int len = strlen(this->str)+strlen(other.str)+1;
    newstr.str = new char[len];
    snprintf(newstr.str, len, "%s%s", this->str, other.str);
    return newstr;
}

MyString MyString::operator-(const MyString& other) const {
    MyString newstr;
    int len1 = strlen(this->str);
    int len2 = strlen(other.str);
    newstr.str = new char[len1];
    int index = 0;
    for (int i = 0; i < len1; i++) {
        int r = 0;
        for (int j = 0; j < len2; j++) {
            if (this->str[i] == other.str[j]) {
                r = 1;
                break;
            }
        }
        if (r == 0) {
            newstr.str[index] = this->str[i];
            index++;
        }
    }
    newstr.str[index] = '\0';
    
    return newstr;
}

MyString MyString::operator*(const int k) const {
    MyString newstr;
    int len = strlen(this->str);
    int new_len = len * k;
    newstr.str = new char[new_len + 1];
    int index = 0;
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < len; j++) {
            newstr.str[index] = this->str[j];
            index++;
        }
        newstr.str[index] = '\0';
    }
    return newstr;
}

MyString& MyString::operator=(const MyString& other) {
    delete[] this->str;
    int len = strlen(other.str)+1;
    this->str = new char[len];
    snprintf(this->str, len, "%s", other.str);
    return *this;
}

MyString& MyString::operator=(MyString&& other) noexcept {
    delete[] this->str;
    this->str = other.str;
    other.str = nullptr;
    return *this;
}

bool MyString::operator==(const MyString &other) const {
    return strcmp(this->str, other.str) == 0;
}

bool MyString::operator!=(const MyString &other) const {
    return !(this->str == other.str);
}

bool MyString::operator>(const MyString &other) const {
    return strcmp(this->str, other.str) > 0;
}

bool MyString::operator<(const MyString &other) const {
    return strcmp(this->str, other.str) < 0;
}

bool MyString::operator>=(const MyString &other) const {
    return !(this->str < other.str);
}

bool MyString::operator<=(const MyString &other) const {
    return !(this->str > other.str);
}

MyString MyString::operator!() const {
    MyString newstr;
    int len = strlen(this->str)+1;
    newstr.str = new char[len];
    for (int i = 0; i < len; i++) {
        if (std::islower(this->str[i])) {
            newstr.str[i] = std::toupper(this->str[i]);
        } else {
            newstr.str[i] = std::tolower(this->str[i]);
        }
    }
    return newstr;
}

char& MyString::operator[](const int index) const {
    return this->str[index];
}

int MyString::operator()(const MyString& other) const {
    const char* index = strstr(this->str, other.str);
    if (index) {
        return index-this->str;
    }
    return -1;
}

std::ostream& operator<<(std::ostream& os, const MyString& string) {
    os << string.str;
    return os;
}

std::istream& operator>>(std::istream& in, MyString& string) {
    in >> string.str;
    return in;
}
