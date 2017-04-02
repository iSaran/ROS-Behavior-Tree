#ifndef DECORATOR_NEGATION_NODE_H
#define DECORATOR_NEGATION_NODE_H

#include <control_node.h>

namespace BT
{
class DecoratorNegationNode : public ControlNode
{
public:
    // Constructor
    explicit DecoratorNegationNode(std::string name);
    ~DecoratorNegationNode();
int DrawType();
    // The method that is going to be executed by the thread
    void Exec();
    void AddChild(TreeNode* child);
};
}

#endif  // DECORATOR_NEGATION_NODE_H
