#include <fstream>       //файловый ввод вывод в консоль
#include <iostream>      //потоковый ввод вывод в консоль
#include <string>        //библиотека для строк - getline
#include <algorithm> 
using namespace std;

int main()
{
    /*
    Текстовый файл состоит не более чем из 10^6 символов X, Y и Z.
    Определите максимальное количество идущих подряд символов, среди
    которых каждые два соседних различны.
    */

    setlocale(LC_ALL, "rus");
    ifstream file_input("C:\\Users\\Notebook-PC\\Google Диск\\школа_1561\\ИТ класс 11\\24.txt");
    string s = "";
    int k = 1;      //счетчик идущих подряд символов
    int m = 1;      //максимальное число идущих подряд
    //file_input >> s;   //считывает одну строку
    getline(file_input, s);
    file_input.close();
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] != s[i - 1])
        {
            k += 1;
            m = max(k, m);
        }
        else
        {
            k = 1;
        }
    }
    cout << m;


    /*
    if (!file_input.is_open())
        cout << "file couldnot be open!";
    else
    {
        while (file_input)  // 0 - конец файла
        {
            getline(file_input, s);     //cчитывает построчно
           // cout << s << endl;
        }
        file_input.close();
    }
    */
   
}