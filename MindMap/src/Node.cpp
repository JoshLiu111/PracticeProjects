#include "../include/Node.h"
#include <iostream> 
#include <algorithm> // std::remove_if

Node::Node(int id, const std::string& content, Node* parent)
    : id_(id), content_(content), parent_(parent), collapsed_(false) {}

void Node::addChild(Node* child) {
    children_.push_back(child);
}

void Node::removeChild(int id) {
    children_.erase(
        // remove_if(vec.begin(),vec.end(),condition,vec.end())
        std::remove_if(
            children_.begin(),
            children_.end(),
            // if node.id = id
            [id](Node* child) { 
                return child->getId() == id;
                }),
        children_.end());
}

void Node::toggleCollapse() {
    collapsed_ = !collapsed_;
}

void Node::display(int indent) const {
    std::cout << std::string(indent, ' ') << "- " << content_;
    if (collapsed_) std::cout << "(collapsed)";// add logic later
    std::cout << std::endl;

    if (collapsed_) return;

    for (const auto& child : children_){
        child->display(indent + 2);
    }
}

int Node::getId() const {
    return id_;
}

const std::string& Node::getContent() const {
    return content_;
}

void Node::setContent(const std::string& newContent) {
    content_ = newContent;
}

bool Node::isCollapsed() const {
    return collapsed_;
}
