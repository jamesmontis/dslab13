// James Montis
// DS Lab 13 - 11/12/2020
// This program reads a .dat file into an arrayList
// we sort the list two ways, one with selection sort and then using quicksort

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};



#include <iostream>
#include "arrayList.h"
#include <fstream>
using namespace std;

int findMin(arrayList<int> l){

}

int main() {
    int num;
    ifstream inFile;
    inFile.open("lab13.dat");
    if (inFile.is_open()) cout << "File is open\n";
    else
    { cout << "File is not open\n";}

    arrayList<int> ls, ls2;
    while(inFile >> num){
        ls.insert(num);
        ls2.insert(num);
    }
    ls.callselsort();
    cout << endl;

    cout << "testing quicksort...\n";

    cout << "Using selection sort...\n";
    ls.print();
    cout << endl;
    cout << " Selection Sort comparisons...> " << ls.getselcomp() << endl;
    cout << " Selection sort swaps ....... > " << ls.getselswap() << endl;

    cout << "\nUsing Quick sort...\n";
    ls2.callquicksort();
    ls2.print();
    cout << "\n Quick sort comparison ...... > " << ls2.getquickcomp() << endl;
    cout << " Quick sort sort swaps ....... > " << ls2.getquickswap() << endl;



    return 0;
}
