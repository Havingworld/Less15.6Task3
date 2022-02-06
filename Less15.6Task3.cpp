/*
С клавиатуры вводятся числа. Когда пользователь вводит -1 -- необходимо выводить на экран пятое по возрастанию число среди введённых.
Когда пользователь вводит -2 -- программа завершает работу.

Пример:

ввод: 7 5 3 1 2 4 6 -1

вывод: 5 (в отсортированном виде массив выглядит так: {1,2,3,4,5,6,7})

ввод: 1 1 1 -1

вывод: 2 (в отсортированном виде массив выглядит так: {1,1,1,1,2,3,4,5,6,7})

ввод -2

завершение программы
*/

#include <iostream>
#include <vector>
using namespace std;
//программа для -1

void sort(vector <int> numbers) {
    
        //сортировка
{
            for (int j = 0; j < numbers.size(); j++)
            {
                for (int i = 0; i < numbers.size() - j - 1; i++)
                {
                    if (numbers[i] > numbers[i + 1])
                    {
                        int temp = numbers[i];
                        numbers[i] = numbers[i + 1];
                        numbers[i + 1] = temp;
                    }
                }
            }
            for (int k = 0; k < numbers.size(); k++)
            {
                cout << numbers[k] << " ";
            }
            cout << endl;
        }
}

int main()
{
    vector <int> numbers{};
    int nInput=0;
    for (; nInput != -2;) {
        cout << "Input number: ";
        cin >> nInput;
        //если -1 выполнить программу
        if (nInput == -1) 
            sort(numbers);
        //иначе записать число в конец вектора
        else
            numbers.push_back(nInput);
    }
}
