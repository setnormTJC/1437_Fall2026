

#include<filesystem>
#include<iostream>
#include<memory>
#include<string>

#include "Animal.h"
#include "CustomVector.h"
#include "demos.h"
#include "Matrix.h"
#include "Process.h"

template<typename SomeDataType>
auto print(SomeDataType thing)
{
    std::cout << "Some thing is: " << thing << std::endl;
}

int main()
{

    // print(2);
    // print("word");
    //
    // Process someProcess = {"Process A", 13};
    //
    // print(someProcess);

    std::vector<char> vectorOfChars;

    std::string someString;

    CustomVector<std::string> customVector;

    customVector.getDataTypeOfElements();

    Matrix firstMatrix(1, 2, 3, 4);
    Matrix secondMatrix(5, 6, 7, 8);

    //{1, 2}  + {5, 6}    = {6, 8}
    //{3, 4}    {7, 8}    = {10, 12}
    Matrix sum = firstMatrix + secondMatrix;



    return 0;
}


