
#include <iostream>
using namespace std;
int main()
{
    int A = 5, B = 6, C = 7, D = 8, E = 12;
    bool F = false, G = true;

    cout << "12>=12 is " << (E>= E)<<endl;
    cout << "12>7 is " << (E >= C) <<endl;
    cout << "8<6 is " << (D < B)  <<endl; 
    cout << "8=8 is " << (D == D) <<endl; 
    cout << "12<=12 is " << (E <= E)<<endl;
    cout << "7=5 is " << (C == A)   <<endl;
    cout << "N0t(12>=12) is " <<!(E >= E)<<endl;
    cout << "Not(12<7) is " << !(E < C)<<endl;
    cout << "Not(8<6) is " << !(D < B)<<endl; 
    cout << "Not(8=8) is " << !(D == D)<<endl; 
    cout << "Not(12<=12) is " << !(E <= E)<<endl; 
    cout << "Not(7=5) is " << !(C == A)<<endl;
    cout << "1 And 1 is " << (G && G) << "\n";
    cout << "True And 0 is " << (G && F) << "\n"; 
    cout << "0 OR 1 is " << (F || G) << "\n"; 
    cout << "0 OR 0 is " << (F || F) << "\n"; 
    cout << "Not 0 is " << !(F) << "\n"; 
    cout << "Not(1 OR 0) is " << !(G || F) << "\n"; 
    cout << "(7=7)And(7>5) is " << ((C == C) && (C > A)) << "\n";
    cout << "(7 = 7)And(7 < 5) is " << ((C == C) && (C < A)) << "\n";
    cout << "(7 = 7)OR(7 < 5) is " << ((C == C) || (C < A)) << "\n";
    cout << "(7 < 7)OR(7 > 5) is " << ((C < C) || (C > A)) << "\n";
    cout << "Not(7=7)And(7>5) is " << ((!(C == C)) && (C > A)) << "\n";
    cout << "(7=7)AndNot(7<5) is " << ((C == C) && (!(C < A))) << "\n";

    return 0;
}


