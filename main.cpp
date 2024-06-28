#include <QCoreApplication>
#include <vector>
#include <iostream>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  std::vector<long long> list_of_neurons = {50000000, -200000000, 300, -440975454435, 0, -100, -1}; // Пример значений
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
long long activationFunction( // long long list_of_neurons.at(var)
          int var
                             //  ,
                            //   int b
      )
{
      long long base, exponent, result;

unsigned long long giperparametr =200;
      base=3; /// тут скорее 3 потому что 2,7
      exponent = list_of_neurons.at(var); // степень
      result = pow(base, exponent);
      if (list_of_neurons.at(var) <= 0)
      list_of_neurons.at(var) =list_of_neurons.at(var) * giperparametr * (result - 1);
    return (  list_of_neurons.at(var));
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    activationFunction(0);
    std::cout <<  list_of_neurons.at(0)  << std::endl; // нейрон 0
    activationFunction(1);
       std::cout <<  list_of_neurons.at(1)  << std::endl;// нейрон 1
     std::cout <<  activationFunction(1)  << std::endl; // нейрон 1
       std::cout <<  activationFunction(2)  << std::endl; // нейрон 2
     std::cout <<  activationFunction(3)  << std::endl; // нейрон 3
       std::cout <<  activationFunction(4)  << std::endl; // нейрон 4
     std::cout <<  activationFunction(5)  << std::endl; // нейрон 5
     std::cout <<  activationFunction(6)  << std::endl; // нейрон 6
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    return a.exec();
}
