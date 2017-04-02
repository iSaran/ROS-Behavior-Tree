#ifndef LEAF_NODE_H
#define LEAF_NODE_H

#include <vector>

#include <tree_node.h>

namespace BT
{
class LeafNode : public TreeNode
{
protected:
public:
    explicit LeafNode(std::string name);
    ~LeafNode();
void ResetColorState();
int Depth();
};
}

#endif  // LEAF_NODE_H
