#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
string UpperCaseFunc(const string s) // !!!!!!!!!!!! 8.2 ����������� 
{
    size_t index = s.find(' '); // ����� ������� ������

    if (index != std::string::npos && index != 0) {
        std::string newStr = s.substr(0, index); // �������� ������ �� ������� ������
        std::transform(newStr.begin(), newStr.end(), newStr.begin(), ::toupper); //������������ ������ �� ��������� �������
        return newStr;
    }
    else { //���� ����� �� ������ ������� ��� �� ���� � ������ - ��������� �������
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