// lab5-6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#define _USE_MATH_DEFINES
#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
   
    // #1 // ввод по-лучше оформить
    /*
    int num;
    const int q = 6;
    int arr[q];
    bool palindrom, luck, nothing;

    cin >> num;
    while (num / 100000 <= 0) {
        cin >> num;
    }

    // записываем число в массив по цифрам
    for (int i = 0; i < 6; ++i) {
        arr[i] = num % 10;
        num /= 10;

    }
    cout << endl;

    // проверка на палиндром.
    if (q % 2 != 0) {
        nothing = true;
    }
    else if (arr[0] == arr[5] && arr[1] == arr[4] && arr[2] == arr[3]) {
        palindrom = true;
        nothing = false;
    }
    else {
        palindrom = false;
    }

    // проверка на счастливое число
    if (arr[0] + arr[1] + arr[2] == arr[3] + arr[4] + arr[5]) {
        luck = true;
        nothing = false;
    }
    else { luck = false; }

    // проверка на ничего
    if (palindrom == false && luck == false) {
        nothing = true;
    }

    // Вывод итога
    if (nothing == true) {
        cout << "Это не палиндром и не счастливое число";
    }
    else if (palindrom == true && luck == false) {
        cout << "Это палиндром, но не счастливое число";
    }
    else if (luck == true && palindrom == false) {
        cout << "Это счастливое число, но не палиндром";
    }
    else if (palindrom == true && luck == true) {
        cout << "Это и палиндром и счастливое число";
    } */

    // #2
    /*
    int a, b, x;
    cout << "Введите a и b: ";
    cin >> a;
    cin >> b;
    
    if (-b / a > 0) {
        x = sqrt(-b / a);
        cout << "Корни уравнения: " << -x << " и " << x;
    }
    else if (-b / a == 0) {
        cout << "Корень = 0";
    }
    else if (-b / a < 0) {
        cout << "Корней нет";
    }*/

    // #3 // ввод по-лучше оформить
    /*
    int x, y;
    cin >> x;
    cin >> y;
    
    if (x > 0.5 && (x * x + y * y) < 1) {
        cout << "Точка принадлежит области";
    }
    else if (x < 0.5 || (x * x + y * y) > 1) {
        cout << "Точка не принадлежит области";
    }
    else { cout << "Точка лежит на границе"; }*/

    // #4 //надо сделать проверки
    /*
    const int quantityItemsForArray = 4;
    int itemCost[quantityItemsForArray], inputItemNumber, inputQuantityItems, costWithoutSale, finalCost;
    double saleCostPerProcent;
    itemCost[0] = 150;
    itemCost[1] = 40;
    itemCost[2] = 300;
    itemCost[3] = 200;

    string items[quantityItemsForArray];
    items[0] = "Чай";
    items[1] = "Батон"; 
    items[2] = "Колбаса";
    items[3] = "Сыр";

    cout << "Выберите товар" << endl << "1 - Чай 150р." << endl << "2 - Батон 40р." << endl << "3 - Колбаса 300р." << endl << "4 - Сыр 200р." << endl;
    cout << "Введите номер товара ";
    cin >> inputItemNumber; 
    cout << endl << "Введите количество товара ";
    cin >> inputQuantityItems; 
    cout << "-------------------------------" << endl;

    costWithoutSale = inputQuantityItems * itemCost[inputItemNumber - 1];
    if (costWithoutSale < 500) {
        finalCost = costWithoutSale;
    }
    else if (costWithoutSale >= 500 && costWithoutSale <= 1000) {
        saleCostPerProcent = 20;
        finalCost = costWithoutSale * (1 - (saleCostPerProcent / 100));
    }
    else if (costWithoutSale > 1000) {
        saleCostPerProcent = 40;
        finalCost = costWithoutSale * (1 - (saleCostPerProcent / 100));
    }

    cout << "Чек на покупку товара" << endl;
    cout << items[inputItemNumber - 1] << ' ' << itemCost[inputItemNumber - 1] << " р. " << inputQuantityItems << " шт." << endl;
    cout << "Стоимость " << costWithoutSale << " р." << endl;
    cout << "Ваша скидка составляет " << saleCostPerProcent << '%' << endl;
    cout << "Итоговая стоимость " << finalCost << " р."; */

    // #5
    /*
    int inputItemCost;
    string labelForItemCost;
    cout << "Введите стоимость ";
    cin >> inputItemCost;
    cout << "-------------------" << endl;

    if ((inputItemCost >= 11 && inputItemCost <= 19) || (inputItemCost % 10 >= 5 && inputItemCost % 10 <= 9) || inputItemCost % 10 == 0) {
        labelForItemCost = "рублей";
    } 
    else if (inputItemCost % 10 == 1) {
        labelForItemCost = "рубль";
    }
    else  if (inputItemCost % 10 >= 2 && inputItemCost % 10 <= 4) {
        labelForItemCost = "рубля";
    } 

    cout << "Мяч баскетбольный" << endl;
    cout << "1 шт. " << inputItemCost << ' ' << labelForItemCost;
    */

    // #6 в labs_test
    /*
    int xA, yA, 
        xB, yB, 
        xC, yC, 
        xD, yD;

    cout << "Введите координаты точки А: " << endl;
    cin >> xA;
    cin >> yA;

    cout << "Введите координаты точки B: " << endl;
    cin >> xB;
    cin >> yB;

    cout << "Введите координаты точки C: " << endl;
    cin >> xC;
    cin >> yC;

    cout << "Введите координаты точки D: " << endl;
    cin >> xD;
    cin >> yD; */

    // #7 надо дoделать
    /*
    // a)
    bool right_semi_circle = false, left_semi_circle = false;
    double x, y, R;
    cout << "Введите x, y, R: ";
    cin >> x >> y >> R;
            
    if ((x-R)*(x-R)+y*y < R*R && (y < 0 && y > -R) && (x > 0 && x < 2R)) {
        right_semi_circle = true;
    }

    if ((x + R) * (x + R) + y * y < R * R && (y > 0 && y < R) && (x < 0 && x > -2R)) {
        left_semi_circle = true;
    }

    if (left_semi_circle || right_semi_circle) {
        cout << "Ты видел Кенндеди в последний раз?";
    }
    else {
        cout << "GG_GL next";
    }
    */

    // b)
    // по идее то же самое только не 2R, a R
    
    // #8
    /*
    int num;
    cout << "Введите 4 числа: " << endl;

    const int numberQuantity = 4;
    int arr[numberQuantity];
    for (int i = 0; i < 4; ++i) {
        cin >> num;
        arr[i] = num;
    }


    int sum = 0;
    int mul = 1;
    int min = 0;
    int max = 0;

    for (int i = 0; i < numberQuantity; ++i) {
        if (arr[max] < arr[i]) {
            max = arr[i];
        }
    }

    for (int i = 0; i < numberQuantity; i++) {
        if (arr[min] > arr[i]) {
            min = arr[i];
        }
    }

    int functionNumber;
    cout << "Выберите действие" << endl;
    cout << "1 - найти наибольшее" << endl;
    cout << "2 - найти наименьшее" << endl;
    cout << "3 - найти сумму всех чисел" << endl;
    cout << "4 - найти произведение всех чисел" << endl;
    cout << "5 - найти разность наибольшего и наименьшего" << endl;
    cin >> functionNumber;

    switch (functionNumber) {
        case 1:
            cout << "Ответ " << max << endl;
            break;
        case 2:
            cout << "Ответ " << min << endl;
            break;
        case 3:
            for (int i = 0; i < numberQuantity; i++) {
                sum += arr[i];
            }
            cout << "Ответ " << sum << endl;
            break;
        case 4:
            for (int i = 0; i < numberQuantity; i++) {
                mul *= arr[i];
            }
            cout << "Ответ " << mul << endl;
            break;
        case 5:
            cout << "Ответ " << max - min << endl;
            break;
    }
    */

    
}