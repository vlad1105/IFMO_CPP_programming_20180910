//Найдите индексы первого вхождения максимального элемента.
//
//Формат входных данных
//        Программа получает на вход размеры массива n и m, 
// затем n строк по m чисел в каждой. n и m не превышают 100.
//
//Формат выходных данных
//        Выведите два числа: номер строки и номер столбца, 
// в которых стоит наибольший элемент в двумерном массиве. 
// Если таких элементов несколько, то выводится тот, у которого меньше номер строки, 
// а если номера строк равны то тот, у которого меньше номер столбца.
//
//Sample Input:
//
//3 4
//0 3 2 4
//2 3 5 5
//5 1 2 3
//Sample Output:
//
//1 2

#include "t01_max.h"
#include <iostream>


using namespace std;

int t01_max() {
    int b,i,j,n,m, max, c, d;
    cin>>n>>m;
    int a[n][m];
    max=-10000;
    for (i=0; i<n;i++){
        for (j=0; j<m; j++){
            cin>>b; a[i][j]=b;
        }
    }
    for (i=0; i<n; i++) {
        for (j = 0; j < m; j++){
            if (a[i][j]>max){c=i;d=j;max=a[i][j];

            }
        }

    }
    cout<<c<<" "<<d;


    return 0;
}
