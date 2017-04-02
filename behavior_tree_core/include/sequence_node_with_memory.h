#ifndef SEQUENCE_NODE_WITH_MEMORY_H
#define SEQUENCE_NODE_WITH_MEMORY_H


#include <control_node.h>




namespace BT
{
class SequenceNodeWithMemory : public ControlNode
{
public:
    // Constructor
    explicit SequenceNodeWithMemory(std::string name);
    SequenceNodeWithMemory(std::string name, int reset_policy);
    ~SequenceNodeWithMemory();
    int DrawType();
    // The method that is going to be executed by the thread
    BT::ReturnStatus Tick();
    void Halt();
private:
    unsigned int current_child_idx_;
    unsigned int reset_policy_;
};
}  // namespace BT

#endif  // SEQUENCE_NODE_WITH_MEMORY_H
