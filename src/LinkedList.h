/*
 * LinkedList.h
 *
 *  Created on: Oct 8, 2019
 *      Author: yunus
 */

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <random>
#include <string>
#include "stock.h"
#include "Node.h"

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

class LinkedList {
public:
  Node* beginNode, * endNode;
  int NodeCount;
  LinkedList() {
    beginNode = NULL;
    endNode = NULL;
    NodeCount = 0;
  }
  void addNode(stock n);
  void printNodes();
  Node* returnMiddleList();
  LinkedList* split();
};

#endif /* LINKEDLIST_H_ */
