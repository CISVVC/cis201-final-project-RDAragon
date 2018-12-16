#include<iostream>
#include"concordance.h"

using namespace std;

int main()
{
    Concordance con("alice.txt");
    con.parse();
    con.print();

    return 0;
}
