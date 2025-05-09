#include "../include/MindMap.h"
#include "../include/Node.h"
#include <iostream>

MindMap::MindMap() {
    root_ = new Node(0, "Root");
    nodeMap_[0] = root_; //{0:*root}
    nextId_ = 1;
}

int MindMap::createNode(const std::string& content, int parentId) {
    //std::map -> RBT search -> return nodeMap_.end if not found.
    if (nodeMap_.find(parentId) == nodeMap_.end()) {
        std::cerr << "Parent ID not found.\n";
        return -1;
    }

    Node* parent = nodeMap_[parentId];
    Node* newNode = new Node(nextId_, content, parent); 

    parent->addChild(newNode);
    nodeMap_[nextId_] = newNode; // insert node into map
    return nextId_++;
}

Node* MindMap::getNode(int id) {
    if (nodeMap_.find(id) != nodeMap_.end()) {
        return nodeMap_[id];
    }
    return nullptr;
}

void MindMap::deleteNode(int id) {
    if (id == 0 || nodeMap_.find(id) == nodeMap_.end()) return;

    Node* target = nodeMap_[id];

    //delete children recursivelly.
    while (target->getChildCount() > 0) {
        Node* child = target->getChild(0);
        if (child) deleteNode(child->getId());
    }
    //cut the link
    Node* parent = target->getParent();
    if (parent) parent->removeChild(id);

    //remove node from map
    nodeMap_.erase(id);
    delete target;
}

void MindMap::display() const {
    std::cout << " Mind Map Structure:\n";
    if (root_) {
        root_->display();
    }else{
        std::cout << "[Empty Mind Map]\n";
    }
}


