
#include <iostream>
using namespace std;
void Read(int& N)
{
    cout << "please enter Number:\n";
    cin >> N;
    while (N <= 0)
    {
        cout << "please enter posotive Number" << endl;
        cin >> N;
    }

}
int PrintFactoria(int N)
{
     
        
        int i = 1;
        int Fac = 1;
        while (i <= N)
        {
            Fac *= i;
            i++;
        }
        return Fac;
    
}

int main()
{
    int N;
    Read(N);
    cout << "factoria of number=" << PrintFactoria(N);

    return 0;
}
