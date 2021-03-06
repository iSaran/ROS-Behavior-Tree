#ifndef ACTION_NODE_H
#define ACTION_NODE_H

#include <leaf_node.h>

namespace BT
{

class ActionNode : public LeafNode
{
public:
    // Constructor
    explicit ActionNode(std::string name);
    ~ActionNode();

    // The method that is going to be executed by the thread
    virtual void WaitForTick() = 0;
    BT::ReturnStatus Tick();

    // The method used to interrupt the execution of the node
    virtual void Halt() = 0;

    // Methods used to access the node state without the
    // conditional waiting (only mutual access)
    bool WriteState(ReturnStatus new_state);
int DrawType();
};
}  // namespace BT

#endif  // ACTION_NODE_H
