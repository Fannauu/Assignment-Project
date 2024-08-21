#include<iostream>
using namespace std;
class scoreList{
    private:
        float score[5];
    public:
        friend istream& operator >> (istream& in, scoreList& sc){
            for (int i = 0; i < 5; i++){
                cout << " Subject " << i + 1 << " = ";
                in >> sc.score[i];
            }
        }
        friend float average(scoreList& sc); // Friend Function
};

float average(scoreList& sc){
    float total = 0;
    float avg = 0;
    for (int i = 0; i < 5;i++ ){
        total += sc.score[i];
    }
    avg = total / 5;
    return avg;
}

int main (){
    system("cls");
    scoreList s1;
    cin >> s1;
    cout <<"Average score : "<< average(s1) << endl;

    return 0;
}