#include "catch_amalgamated.hpp"
#include "../include/MindMap.h"
#include <iostream>
#include <sstream>

TEST_CASE("MindMap basic operations", "[MindMap]") {
    MindMap map;
    int a = map.createNode("MindMap",0);
    int b = map.createNode("Nodes",a);
    int c = map.createNode("Storage", b);

    SECTION("Create nodes and check content") {
        

        REQUIRE(map.getNode(a)->getContent() == "MindMap");
        REQUIRE(map.getNode(b)->getContent() == "Nodes");
        REQUIRE(map.getNode(c)->getContent() == "Storage");
    }

    SECTION("Delete nodes") {
        map.deleteNode(b);
        REQUIRE(map.getNode(b) == nullptr);
        REQUIRE(map.getNode(a) != nullptr);
    }

    SECTION("Delete node with children") {
        map.deleteNode(b);
        REQUIRE(map.getNode(b) == nullptr);
        REQUIRE(map.getNode(c) == nullptr);
    }

    SECTION("Test delete root") {
        map.deleteNode(0);
        //root should still exist
        REQUIRE(map.getNode(0) != nullptr);
    }

    SECTION("TEST Collapse") {
        map.getNode(a)->toggleCollapse();

        REQUIRE(map.getNode(a)->isCollapsed() == true);
        REQUIRE(map.getNode(b)->isCollapsed() == false);
        REQUIRE(map.getNode(c)->isCollapsed() == false);
    }

    SECTION("Display with full tree") {
        std::ostringstream oss;// capture cout in oss. oss.str()
        std::streambuf* oldCout = std::cout.rdbuf(oss.rdbuf()); //stram buffer
        
        map.display();

        std::cout.rdbuf(oldCout);
        std::string output = oss.str();

        REQUIRE(output.find("- MindMap") != std::string::npos);
        REQUIRE(output.find("  - Nodes") != std::string::npos);
        REQUIRE(output.find("    - Storage") != std::string::npos);
    }

    SECTION("Display with collapsed node") {
        map.getNode(b)->toggleCollapse();

        std::ostringstream oss;
        std::streambuf* oldCout = std::cout.rdbuf(oss.rdbuf());

        map.display();

        std::cout.rdbuf(oldCout);
        std::string output = oss.str();

        REQUIRE(output.find("   - Nodes (collapsed)") != std::string::npos);
        REQUIRE(output.find(std::string(6,' ') + "- Storage (collapsed)") == std::string::npos);
    }
}

