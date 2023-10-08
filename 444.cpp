#include <iostream>   
int main() {
    setlocale(0, "");
    using namespace std;
    int n1, n2, r;
    cout << "Введите число:"; cin >> n1;
    r = n1 * 1; cout << " Решите пример: " << n1 << "* 1 = ";  cin >> n2;
    if (r == n2)  cout << "Пример решен верно!" << endl;
    else  if (r != n2) cout << "Нет!"<< endl; 
    cout << " Решите пример: " << n1 << "* 2 = "; cin >> n2;r = n1 * 2;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2)  cout << "Нет!"<< endl; 
    cout << " Решите пример: " << n1 << "* 3 = ";cin >> n2; r = n1 * 3;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2) cout << "Нет!"<< endl;
    cout << " Решите пример: " << n1 << "* 4 = "; cin >> n2; r = n1 * 4;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2) cout << "Нет!"<< endl;
    cout << " Решите пример: " << n1 << "* 5 = "; cin >> n2;r = n1 * 5;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2) cout << "Нет!"<< endl;
    cout << " Решите пример: " << n1 << "* 6 = ";cin >> n2; r = n1 * 6;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2) cout << "Нет!"<< endl;
    cout << " Решите пример: " << n1 << "* 7 = "; cin >> n2; r = n1 * 7;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2) cout << "Нет!"<< endl;
    cout << " Решите пример: " << n1 << "* 8 = "; cin >> n2; r = n1 * 8;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2)  cout << "Нет!"<< endl;
    cout << " Решите пример: " << n1 << "* 9 = ";cin >> n2;r = n1 * 9;
    if (r == n2) cout << "Пример решен верно!" << endl;
    else if (r != n2)  cout << "Нет!"<< endl;
    return 0;
}
