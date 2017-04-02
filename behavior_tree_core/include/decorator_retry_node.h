#ifndef DECORATOR_RETRY_NODE_H
#define DECORATOR_RETRY_NODE_H

#include <control_node.h>

namespace BT
{
class DecoratorRetryNode : public ControlNode
{
public:
  // Constructor
  DecoratorRetryNode(std::string name, unsigned int NTries);
  ~DecoratorRetryNode();
  int DrawType();
  // The method that is going to be executed by the thread
  void Exec();
private:
  unsigned int NTries_;
  unsigned int TryIndx_;
};
}  // namespace BT

#endif  // DECORATOR_RETRY_NODE_H
