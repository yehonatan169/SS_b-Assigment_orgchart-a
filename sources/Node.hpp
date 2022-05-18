#pragma once
#include <string>
#include <vector>
using namespace std;
class Node{

public:
    string info;
    vector<Node *> subordinates;
    Node *parent;
    Node(const string & name);
    ~Node();
};