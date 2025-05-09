#pragma once

#include "Node.h"
#include <map>
#include <string>

class MindMap {
public:
    MindMap();//root

    int createNode(const std::string& content, int parentId = -1);
    void deleteNode(int id);
    Node* getNode(int id);
    void display() const;

private:
    std::map<int, Node*> nodeMap_;// {id: *node}
    Node* root_;
    int nextId_;
};
