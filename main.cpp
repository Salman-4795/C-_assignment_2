#include <iostream>
#include <cstdlib>
#include "IntComplex.h"
#include "FloatComplex.h"
using namespace std;
int main(int argc, char* argv[]) {
    if (argc != 9) {
        cout << "Invild arguments\n";
        return 1;
    }
    // storing command line arguments to variables
    int iR1 = atoi(argv[1]);
    int iI1= atoi(argv[2]);
    int iR2 = atoi(argv[3]);
    int iI2 = atoi(argv[4]);
    float fR1 = atof(argv[5]);
    float fI1 = atof(argv[6]);
    float fR2 = atof(argv[7]);
    float fI2 = atof(argv[8]);

    // Creating objects of IntComplex and FloatComplex classes
    IntComplex IC1(iR1, iI1);
    IntComplex IC2(iR2, iI2);
    FloatComplex FC1(fR1, fI1);
    FloatComplex FC2(fR2, fI2);
    //dipslaying integer complex numbers
    cout<<"Integer complex numbers are: "<<endl;
    IC1.display();
    IC2.display();
    //displaying float complex numbers
    cout<<"Float complex numbers are: "<<endl;
    FC1.display();
    FC2.display();
    cout<<endl;

    //Performing addition,substration, multiplication, division on integer complex numbers
	
    
    //Performing addition,substration, multiplication, division on float complex numbers
    
    //dispalying results for integer complex number operations
    cout<<"INTERGER COMPLEX NUMBER RESULTS:"<<endl<<endl;
    cout << "Addition of int complex numbers: ";
    IC1 + IC2;

    cout << "Subtraction of int complex number: ";
    IC1 - IC2;

    cout << "Multiplication of int complex number: ";
    IC1 * IC2;

    cout << "Division of int complex number: ";
    IC1 / IC2;
    ////////////////////////////////////////////////////////////
    
    
    //dispalying results for integer complex number operations  
    cout<<endl<< "FLOAT COMPLEX NUMBER RESULTS \n"<<endl<<endl;
    cout << "Addition of float complex number: ";
    FC1 + FC2;
    
    cout << "Subtraction of float complex number: ";
    FC1 - FC2;
    
    cout << "Multiplication of float complex number: ";
    FC1 * FC2;
    
    cout << "Division of float complex number: ";
    FC1 / FC2;
}
