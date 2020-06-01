/*
 * LinkedList.cpp
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
#include "LinkedList.h"
using namespace std;

void LinkedList::addNode(stock n) {
  Node* temp = new Node();
  temp->data = n;
  if (beginNode == NULL) {
    beginNode = temp;
    endNode = temp;
    temp->next = NULL;
    NodeCount = 1;
  }
  else {
    endNode->next = temp;
    temp->next = NULL;
    endNode = temp;
    ++NodeCount;
  }
}
void LinkedList::printNodes() {
  Node* temp = beginNode;
  while (temp != NULL) {
    // temp->data.print();
    cout << temp->data << endl;
    temp = temp->next;
  }
}

/* void LinkedList::returnMiddleList() {
  int LoopCount = (NodeCount / 2) + (NodeCount % 2), LC = LoopCount;
  Node* temp = beginNode;
  //while (LoopCount-- > 0) {
    //temp = temp->next;
  } //
  for (int i = 1; i <= LoopCount; i++) {
    temp = temp->next;
  }
  cout << temp->data << endl;
  cout << LC << endl;
} */


Node* LinkedList::returnMiddleList() {
  Node* slow = beginNode, * fast = beginNode;
  // int COUNT = 0;
  while (fast != NULL)
  {
    //if (slow == NULL)
      //exit(-1);
    // slow = slow->next;
    fast = fast->next;

    if (fast == NULL)
      return slow;

    slow = slow->next;
    fast = fast->next;
  }
  return slow;
}

LinkedList* LinkedList::split() {
  int middlePoint = NodeCount / 2;
  Node* temp = beginNode;
  while (middlePoint-- > 0) {
    temp = temp->next;
  }
  LinkedList* list2 = new LinkedList();
  list2->beginNode = temp->next;
  list2->NodeCount = NodeCount - (NodeCount / 2);
  NodeCount = NodeCount / 2;
  endNode = temp;
  temp->next = NULL;
  return list2;
}

