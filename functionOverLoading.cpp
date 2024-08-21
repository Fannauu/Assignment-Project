#include<iostream>
using namespace std;

// Function Overloading

int sum ( int n1, int n2){
    return n1 + n2;
}

int sum(int n1 , int n2, int n3){
    return n1 + n2 + n3;
}

float sum(float a, float b){
    return a + b;
}

int main (){
    system("cls");
    cout << sum(10, 5) << endl;
    cout << sum(10.5f,10.5f) << endl;
    cout << sum(1, 2, 3) << endl;

    return 0;
}