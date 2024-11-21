
#Разработка класса MyString

### Задача №1

> Разработать класс MyString (строка). 

Хранение символов осуществляется в динамическом массиве.

- **MyString( const char\* )** - конструктор с одним параметром (есть значение по-умолчанию **nullptr**).
- **MyString( std::string )** - конструктор с одним параметром.
- **MyString( const MyString& )** - конструктор копирования.
- **MyString( MyString&& )** -  конструктор переноса.
- **~MyString()** - деструктор.
- **length()** - количество символов (длина строки).
- **get()** - возвращение указателя на данные (тип `char*`).

> Реализовать в классе MyString перегрузку операций:

- **operator+** - сложение (конкатенация двух строк).
- **operator-** - вычитание (из первой строки удаляются все символы, присутствующие во второй строке).
- **operator*** - умножение на целое число (строка повторяется заданное число раз).
- **operator=** - копирующее присваивание.
- **operator=** - перемещающее присваивание.
- **operator==** - сравнение на равенство.
- **operator!=** - сравнение на неравенство.
- **operator>** - лексографическое сравнение .
- **operator<** - лексографическое сравнение. 
- **operator>=** - лексографическое сравнение. 
- **operator<=** - лексографическое сравнение. 
- **operator!** - у латинских букв меняется регистр.
- **operator[]** - доступ к символу по индексу.
- **operator()** - поиск подстроки.
- **operator>>** - чтение из потока.
- **operator>>** - запись в поток.

*Примечание*

Класс и методы можно использовать следующим образом:

```cpp
#include "MyString.h"

int main()
{
    MyString s1("Hello,");
    MyString s2("world!");
    MyString s3;
    s3 = s1 + s2;
    std::cout << s3;
    std::cout << s3("ll");   // 2
    std::cout << s3("mama"); // -1
}
```

### Задача №2

> Написать демонстрационную программу с использованием класса **MyString**

### Задача №3

> Необходимо оформить код в соответствии со стандартом, описанном в https://google.github.io/styleguide/cppguide.html .
> Статья на хабре на русском: https://habr.com/ru/articles/480422/
> Ссылка на гитхаб чекера: https://github.com/cpplint/cpplint

## Структура проекта

- **MyString.h** - заголовочный файл для класса **MyString**.
- **MyString.cpp** - файл с реализацией методов класса **MyString**.
- **main.cpp** - домонстрационная программы для работы с классом **MyString**.

Файл `MyString.h` помещаются в каталог `include`
Файлы `MyString.cpp, main.cpp` помещаются в каталог `src` 
В случаи использования VS Studio или VS Studio Code можете использовать структуру предложенную этой IDE(в плане нахождения файлов в директориях, а не самих файлов)


