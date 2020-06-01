
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string>
#include "stock.h"
#include "Node.h"
#include "LinkedList.h"
using namespace std;

int main() {
  srand(time(NULL));
  int num_stocks = 0;
  cout << "# OF STOCKS: " << endl;
  cin >> num_stocks;
  stock* arr_stocks = new stock[num_stocks];

  LinkedList list;

  for (size_t i = 0; i < num_stocks; i++)
  {
    stock s = arr_stocks[i];
    list.addNode(s);
  }

  cout << "FULL LINKED LIST" << endl;
  list.printNodes();
  cout << '\t' << endl;

  Node* temp = NULL;
  temp = list.returnMiddleList();
  cout << "MIDDLE ELEMENT: " << endl;
  temp->printNode();
  cout << '\t' << endl;

  cout << "SPLIT LINKED LIST:" << endl;
  LinkedList  *split_list = list.split();
  split_list->printNodes();
  cout << '\t' << endl;

}

/*

CONSOLE OUTPUT

# OF STOCKS:
7
FULL LINKED LIST
STOCK SYMBOL: RKTE
SHARES: 78
COST: 69

STOCK SYMBOL: MECX
SHARES: 94
COST: 18

STOCK SYMBOL: JKDB
SHARES: 75
COST: 3

STOCK SYMBOL: XTFM
SHARES: 97
COST: 44

STOCK SYMBOL: WSWF
SHARES: 75
COST: 38

STOCK SYMBOL: FKNR
SHARES: 72
COST: 81

STOCK SYMBOL: OPRO
SHARES: 5
COST: 92


MIDDLE ELEMENT:
STOCK SYMBOL: XTFM
SHARES: 97
COST: 44


SPLIT LINKED LIST:
STOCK SYMBOL: WSWF
SHARES: 75
COST: 38

STOCK SYMBOL: FKNR
SHARES: 72
COST: 81

STOCK SYMBOL: OPRO
SHARES: 5
COST: 92

*/
