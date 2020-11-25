#include <iostream>
#include <fstream> 
#include <iomanip>
#include <string>
#include "sales.h"

using namespace std;

const int NO_OF_SALES_PERSON = 6;
sales test;

int main()
{
        //Step 1
    ifstream infile;    //input file stream variable
    ofstream outfile;   //output file stream variable

    
        double totalSaleByQuarter[4];   //array to hold the 
                                    //sale by quarter

    salesPersonRec salesPersonList[NO_OF_SALES_PERSON]; //array 
                               //to hold the salesperson's data

    infile.open("salesperson.txt");

   
    test.initialize(infile, salesPersonList, 
               NO_OF_SALES_PERSON);	                

    infile.close();
    infile.clear();                                 
    

    infile.open("SalesData.txt");                 

    
    outfile.open("outData.txt");               //Step 14

    outfile << fixed << showpoint
            << setprecision(2);                     //Step 15

    test.getData(infile, salesPersonList, 
            NO_OF_SALES_PERSON);                    //Step 16
    test.saleByQuarter(salesPersonList, 
                  NO_OF_SALES_PERSON,
                  totalSaleByQuarter);              //Step 17
    test.totalSaleByPerson(salesPersonList, 
                      NO_OF_SALES_PERSON);          //Step 18
	
    test.printReport(outfile, salesPersonList, 
                NO_OF_SALES_PERSON,
                totalSaleByQuarter);                //Step 19
    test.maxSaleByPerson(outfile, salesPersonList, 
                    NO_OF_SALES_PERSON);            //Step 20
    test.maxSaleByQuarter(outfile, totalSaleByQuarter);  //Step 21
		
    infile.close();                                 //Step 22
    outfile.close();                                //Step 22

    return 0;
}