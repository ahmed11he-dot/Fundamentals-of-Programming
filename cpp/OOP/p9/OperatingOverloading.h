class OperatingOverloading
{
private:
    int count;
public:
    OperatingOverloading();
  
    OperatingOverloading(int c);
    int getcount();
       
    OperatingOverloading operator++();
    
    OperatingOverloading operator++(int);
    
    OperatingOverloading operator--();
   
    OperatingOverloading operator--(int);
    

};

