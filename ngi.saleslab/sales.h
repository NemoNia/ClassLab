#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;
struct salesPersonRec
{
    string ID;      //salesperson's ID
    double saleByQuarter[4];  //array to store the total 
                              //sales for each quarter
    double totalSale;   //salesperson's yearly sales amount
};
class sales
{
    public:
    void initialize(ifstream& indata, salesPersonRec list[],
                int listSize);
    void getData(ifstream& infile, salesPersonRec list[], 
             int listSize);
    void saleByQuarter(salesPersonRec list[], int listSize, 
                   double totalByQuarter[]);
    void totalSaleByPerson(salesPersonRec list[], int listSize);
    void printReport(ofstream& outfile, salesPersonRec list[], 
                 int listSize, double saleByQuarter[]);
    void maxSaleByPerson(ofstream& outData, salesPersonRec list[],
                     int listSize);
    void maxSaleByQuarter(ofstream& outData, double saleByQuarter[]);   
};