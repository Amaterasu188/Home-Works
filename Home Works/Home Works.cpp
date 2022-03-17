

#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    /*
    2) Дз задача 1
    cout << "ВВВВВВВВВВВВВВ\n\""; 
    cout << "aaaaaaaaaaaaaaa\n";
    cout << "\t\t ROMAN ANTONOV";

    2) Дз задача 2
    cout << " Каждый охотник\n ";   // Каждое слово с новой строки и символ табулияции
    cout << " \tЖелает знать\n ";
    cout << " \t\tГде сидит фазан ";

    
    2) Дз задача 3
    string a =  " Продам щенков.";

                "                " 
                " ..."
                "                " 
                " Тел.: 222-22-22"
                " 222     | 222 |"
                " " 
                " 22      | 22  |"
                " " 
                " 22      | 22  |"
                " " 
                " и т.д.";

        cout << a;

       3) ДЗ ЗАДАЧА 1
    int R1, R2, R3,R0;             // 1/R1+1/R2+1/R3 = 1/R0
    
    R0 = R1 * R2 * R3 / (R1 + R2 + R3);

    3) ДЗ ЗАДАЧА 2
    const float pi = 3.14;
    float S, L, R;
    R = L / (pi * 2);
    S = pi * (R * R);
    
    3) ДЗ ЗАДАЧА 3
    int S, v, t, a; 
    cout << " Введите значения ";
    cin << v << t << a;
    S = v * t + (a * pow(t,2)) / 2;
    

    4) дз задача 1

    int hour, sec = 9999, min;
    hour = sec / 3600;
    min = (sec % 3600) / 60;
    sec %= 60;

    cout <<  hour << " " << min << " " << sec;

    4) дз задача 2

    float a;
    cin >> a;


    cout << (int)a << " " << (int)(a*100) % 100;
   

    4) дз задача 3 


    int a;
    cin >> a;

    cout << a / 7 << " " << a % 7;

    4) дз задача 4

    float a, b; // длина время
    cout << " Вычислеиние скорости бега" << endl;
    cout << " Введите дистанцию = ";
    cin >> a;
    cout << " Введите время = ";
    cin >> b;
    cout << " Дистанция: "<< a << "м\n";
    int sec= (int)b * 60 + (b - (int)b) * 100;
    cout << " Время: " << (int)b << " мин "  << (b - (int)b) * 100 << " сек =" << " " << sec << " сек"<< endl;
    cout << " Вы бежали со скоростью " << (a / 1000) / ((float)sec / 3600) << " км/ч";


   4) дз задача 4*/

    int a=1000,b=5;
    cout << (float) a / 100 * (float) b  / 12;
}


