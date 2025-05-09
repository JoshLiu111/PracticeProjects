#ifndef NODE_H
#define NODE_H

#include <string>
#include <vector>

class Node {
public:
    Node(int id, const std::string& content, Node* parent = nullptr);

    void addChild(Node* child);
    void removeChild(int id);
    void toggleCollapse();
    void display(int indent = 0) const;

    int getId() const;
    const std::string& getContent() const;
    Node* getParent() const;
    Node* getChild(int index) const;
    void setContent(const std::string& newContent);
    bool isCollapsed() const;
    int getChildCount() const;

private:
    int id_;
    std::string content_;
    std::vector<Node*> children_;
    Node* parent_;
    bool collapsed_;
};

#endif