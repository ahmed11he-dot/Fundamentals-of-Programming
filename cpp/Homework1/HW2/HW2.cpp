
#include <iostream>
using namespace std;
int main()
{
    int result1, result2, result3, result4, result5, result6;
        
    result1 = (((5 > 6) && (7 == 7)) || (1 || 0));
    result2 = (!((5 > 6) && (7 == 7))) || (1 || 0);
    result3 = (!((5 > 6) && (7 == 7))) || (!(1 || 0));
    result4 = (!((5 > 6) || (7 == 7))) && (!(1 || 0));
    result5 = (((5 > 6) && (7 <= 8)) || ((8 > 1) && (4 <= 3))) && (1);
    result6 = (((5 > 6) && (!(7 < 8))) && ((8 > 1) || (4 <= 3))) || (1);

    cout << "result 1 is " << result1<<endl;
    cout << "result 2 is " << result2<<endl;
    cout << "result 3 is " << result3<<endl;
    cout << "result 4 is " << result4<<"\n";
    cout << "result 5 is " << result5<<"\n";
    cout << "result 6 is " << result6<<"\n";


    return 0;
}


