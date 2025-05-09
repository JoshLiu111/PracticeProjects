May 7 2025
Set up unit testing framework and completed core Node module
	•	Integrated Catch2 v3 testing framework with CMake
	•	Created and tested Node class with key methods: addChild, removeChild, toggleCollapse, display
	•	Verified test success via Catch2 (4 assertions passed)
	•	Structured project into include/, src/, test/, and build/ directories for modular development
	•	Prepared environment for next module: MindMap class

May 8 2025
Completed MindMap core logic and integrated full test coverage

• Implemented MindMap class with support for hierarchical node creation, deletion, and ID management
• Added recursive deleteNode logic to safely remove subtrees
• Enhanced Node::display with indentation and collapse marker for structured tree rendering
• Added display-based behavior tests using std::ostringstream output capture
• Validated collapse behavior where toggling a parent node hides its children from output
• All 16 assertions passed via Catch2 v3 in test_mindmap.cpp
• Refactored test file layout and output matching logic for maintainability