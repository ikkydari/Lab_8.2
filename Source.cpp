#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
string UpperCaseFunc(const string s) // !!!!!!!!!!!! 8.2 лабораторна 
{
    size_t index = s.find(' '); // пошук першого пробілу

    if (index != std::string::npos && index != 0) {
        std::string newStr = s.substr(0, index); // отримуємо стрічку до першого пробілу
        std::transform(newStr.begin(), newStr.end(), newStr.begin(), ::toupper); //перетворюємо стрічку до верхнього регістру
        return newStr;
    }
    else { //якщо пробіл на першій позиції або не існує у стрічці - повертаємо помилку
        return "Wrong input. You must use namespace, but it should't be on first position";
    }

}
int main()
{
    string str;
    cout << "Enter string, please:" << endl;
    getline(cin, str);
    cout << "Incoming string: " << str << endl;
    cout << "String before first namespace in upperCase: " << UpperCaseFunc(str) << endl;
    system("pause");
    return 0;
}