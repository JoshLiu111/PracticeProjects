#include "catch_amalgamated.hpp"
#include "Node.h"

TEST_CASE("Node basic functionality","[Node]") {
    Node root(1, "Root");
    Node child(2, "Child", &root);
    root.addChild(&child);

    SECTION("Child added") {
        REQUIRE(root.getId() == 1);
        REQUIRE(child.getContent() == "Child");
    }

    SECTION("Test collapse toggling") {
        REQUIRE(!root.isCollapsed());
        root.toggleCollapse();
        REQUIRE(root.isCollapsed());
    }
}

