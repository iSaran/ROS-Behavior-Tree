#ifndef CONDITIONS_ROS_CONDITION_H
#define CONDITIONS_ROS_CONDITION_H

#include <condition_node.h>
#include <actionlib/client/simple_action_client.h>
#include <actionlib/client/terminal_state.h>
#include <behavior_tree_core/BTAction.h>
namespace BT
{
class ROSCondition : public ConditionNode
{
protected:
    actionlib::SimpleActionClient<behavior_tree_core::BTAction> action_client_;
    behavior_tree_core::BTResult node_result;
    behavior_tree_core::BTGoal goal;
public:
    // Constructor
    explicit ROSCondition(std::string Name);
    ~ROSCondition();

    // The method that is going to be executed by the thread
    ReturnStatus Tick();
};
}  // namespace BT

#endif  // CONDITIONS_ROS_CONDITION_H
