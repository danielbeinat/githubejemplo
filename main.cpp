#include <iostream>
#include <stdlib.h>

using namespace std;

class Animal{

public:

    virtual void come()=0;
    virtual void duerme()=0;


};


class Perro : public Animal{


public:



    void come(){

    cout<<"El perro come"<<endl;



    }

    void duerme(){
    cout<<"El perro duerme"<<endl;
    }


   void juega(){

   cout<<"el perro juega"<<endl;


   }






};



class Conejo: public Animal{

public:

    void come(){
    cout<<"El conejo come"<<endl;


    }

    void duerme(){
    cout<<"El conejo duerme"<<endl;
    }




} ;




int main()
{
    Perro perro;
    perro.come();
    perro.duerme();
    perro.juega();

    cout<<endl;

    Conejo conejo;
    conejo.duerme();
    conejo.come();





}
