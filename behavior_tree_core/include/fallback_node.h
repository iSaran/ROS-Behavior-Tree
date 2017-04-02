#ifndef FALLBACK_NODE_H
#define FALLBACK_NODE_H

#include <control_node.h>

namespace BT
{
class FallbackNode : public ControlNode
{
public:
    // Constructor
    explicit FallbackNode(std::string name);
    ~FallbackNode();
    int DrawType();
    // The method that is going to be executed by the thread
    BT::ReturnStatus Tick();
};
}  // namespace BT

#endif  // FALLBACK_NODE_H
