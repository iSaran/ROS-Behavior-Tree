#ifndef ACTIONS_ACTION_TEST_NODE_H
#define ACTIONS_ACTION_TEST_NODE_H

#include <action_node.h>

namespace BT
{
class ActionTestNode : public ActionNode
{
public:
    // Constructor
    explicit ActionTestNode(std::string Name);
    ~ActionTestNode();

    // The method that is going to be executed by the thread
    void WaitForTick();
//    BT::ReturnStatus Tick();
  //  void set_status(ReturnStatus status);
    void set_time(int time);

    // The method used to interrupt the execution of the node
    void Halt();
    void set_boolean_value(bool boolean_value);
private:
    int time_;
    bool boolean_value_;

    // ReturnStatus status_;
};
}  // namespace BT

#endif  // ACTIONS_ACTION_TEST_NODE_H
