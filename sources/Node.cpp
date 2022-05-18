#include "Node.hpp"
#include <queue>
#include <iostream>
Node::Node(const string &info) {
    this->info = info;
    this->parent = nullptr;
    this->subordinates = {};
}
Node::~Node() {
}