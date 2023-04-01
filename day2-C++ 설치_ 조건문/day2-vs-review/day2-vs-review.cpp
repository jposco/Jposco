#include <iostream>

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    for (int& i : arr) { // i를 레퍼런스로 선언해 줍니다.

        i++; // arr의 각 칸을 1씩 증가 시킵니다.

    }

    for (int i : arr) {

        cout << i << ' ';

    }

    cout << endl; // 그냥 줄바꿈입니다.
}