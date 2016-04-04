//Kishan Patel. Partner: Wonjae Yang

#include <iostream>
#include "numCell.h"
#include <string>
#include "numCellList.h"

using namespace std;

int main(int argc, const char * argv[]) {

    numCell<int> num46(46);
    numCell<int> num2(2);
    numCell<int> num15(15);
    cout << "TESTING FOR PART A: " << endl; 
    cout << "3a) i: Adding 46+2+15 = " << num46.read() + num2.read() + num15.read() << endl;

    numCell<string> abra("abra");
    numCell<string> cadabra("cadabra");
    cout << "3a) ii: Adding abra+cadabra = " << abra.read() + cadabra.read() << endl;

    numCell<string> temp("temp");
    numCell<string> lates("lates");
    numCell<string> are("are");
    numCell<string> us("us");
    numCell<string> eful("eful");
    cout << "3a) iii: Adding temp+lates+are+us+eful = " << temp.read() + lates.read() + are.read() + us.read() + eful.read() << endl;
    cout << endl;

    cout << "TESTING FOR PART B: " << endl;
    numCellList<int> numCellList1;
    numCellList1.write(12);
    numCellList1.write(22);
    cout << "3b) i:" << endl;
    cout << "List contents: ";
    numCellList1.print();
    cout << "Adding 12+22 = " << numCellList1.sum() << endl;

    numCellList<string> numCellList2;
    string al="al", go="go", rith="rith", ms="ms";
    numCellList2.write(al);
    numCellList2.write(go);
    numCellList2.write(rith);
    numCellList2.write(ms);
    cout << "3b) ii:" << endl;
    cout << "List contents: ";
    numCellList2.print();
    cout << "Adding al+go+rith+ms = " << numCellList2.sum() << endl;
    cout << endl;

    cout << "TESTING FOR PART C: " << endl;
    numCellList<int> numCellList3;
    numCellList3.write(4);
    numCellList3.write(11);
    cout << "3c) i:" << endl;
    cout << "List contents: ";
    numCellList3.print();
    cout << "Multiplying 4*11 = " << numCellList3.product() << endl;
    
    numCellList<string> numCellList4;
    string abcd="abcd", ef="ef", ghijklm="ghijklm";
    numCellList4.write(abcd);
    numCellList4.write(ef);
    numCellList4.write(ghijklm);
    cout << "3c) ii:" << endl;
    cout << "List contents: ";
    numCellList4.print();
    cout << "Multiplying abcd*ef*ghijklm = " << numCellList4.product() << endl;


    return 0;
}