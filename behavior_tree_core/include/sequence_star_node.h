#ifndef SEQUENCE_STAR_NODE_H
#define SEQUENCE_STAR_NODE_H

#include <control_node.h>

namespace BT
{
class SequenceStarNode : public ControlNode
{
public:
    // Constructor
    explicit SequenceStarNode(std::string name);
    ~SequenceStarNode();
int DrawType();
    // The method that is going to be executed by the thread
    void Exec();
};
}

#endif  // SEQUENCE_STAR_NODE_H
