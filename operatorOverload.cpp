#include <iostream>
using namespace std;


// Operator Overloading Example

class number{
    private:
        int n1;
        int n2;
    public:
    number(){ // defualt constructor
        n1 = 0;
        n2 = 0;
    }
    number(int n1,int n2){ // copy constructor
        
        this->n1 = n1;
        this->n2 = n2;
        
    }

    number operator+(number& other){
        return number(this->n1 + other.n1, this->n2 + other.n2);
    }



    void display(){
        cout << "Number 1 = " << n1 << "\t Number 2 = " << n2 << endl;
    }

};


int main (){

    number num1(1,2), num2(3, 4), num3;
    num3 = num1 + num2;

    cout << "Object num 1 is : "; num1.display();
    cout << "Object num 2 is : "; num2.display();
    cout << "Object num 3 is : "; num3.display();

    return 0;
}














// class number {
// public:
//     int n1, n2;

//     // Default constructor
//     number() : n1(0), n2(0) {} 

//     // Parameterized constructor
//     number(int a, int b) : n1(a), n2(b) {} 

//     // Copy constructor
//     number(const number& other) : n1(other.n1), n2(other.n2) {} 

//     // Move constructor
//     number(number&& other) noexcept : n1(other.n1), n2(other.n2) {
//         other.n1 = 0;
//         other.n2 = 0;
//     }

//     // Operator+ overload
//     number operator+(const number& other) const {
//         return number(this->n1 + other.n1, this->n2 + other.n2);
//     }

//     // Display function for testing
//     void display() const {
//         std::cout << "(" << n1 << ", " << n2 << ")\n";
//     }
// };

// int main() {
//     number num1(1, 2);
//     number num2(3, 4);
//     number num3 = num1 + num2; // Uses the operator+ overload

//     num3.display(); // Output should be (4, 6)

//     return 0;
// }