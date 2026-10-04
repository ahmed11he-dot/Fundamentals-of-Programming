
#include <iostream>
using namespace std;

int ReadNumberInRange(int from,int to)
{
    int Grade;
    do 
    {
        cout << "please enter Grade:\n";
        cin >> Grade;
    } while (Grade< from || Grade> to);
    
    return Grade;
}

char PrintGrade(int Grade)
{
    if (Grade >= 90 )

        return 'A';
   
    else if (Grade >= 80 )
    
       return 'B';
    
    else if (Grade >= 70)
   
     return 'C';
   
    else if (Grade >= 60 )
    
       return 'D';
    
    else if (Grade >= 50)
    
       return 'E';
    
    else
    
      return 'F';
    

}

int main()
{
    
   cout<< PrintGrade(ReadNumberInRange(0, 100));

    return 0;
}

