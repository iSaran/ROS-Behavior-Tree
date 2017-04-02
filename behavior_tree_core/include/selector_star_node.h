#ifndef SELECTOR_STAR_NODE_H
#define SELECTOR_STAR_NODE_H

#include <control_node.h>

namespace BT
{
class SelectorStarNode : public ControlNode
{
public:
    // Constructor
    explicit SelectorStarNode(std::string name);
    ~SelectorStarNode();
    int DrawType();
    // The method that is going to be executed by the thread
    void Exec();
};
}  // namespace BT

#endif  // SELECTOR_STAR_NODE_H
