/*
 * Node.h
 *
 *  Created on: Oct 8, 2019
 *      Author: yunus
 */

#include "stock.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string>

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
  stock data;
  Node* next;
  Node() {
    next = NULL;
  }
  Node(stock something) {
    data = something;
    next = NULL;
  }
  void printNode() {
    cout << data << endl;
  }
};

#endif /* NODE_H_ */
