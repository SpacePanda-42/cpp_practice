#include <iostream>
using namespace std;

// ignition::transport::Node node;   add this line back in on linux, commented out for now because error from ignition not being installed
std::string pub_topic = "wheel_rotation";
// auto pub = node.Advertise<>(pub_topic);


// General structure:
/*
-Grab list of wheel joints
-Keyboard input
-Grab Vector3 message from KeyPub
-Extract linear and angular velocity commands from message
-Use inverted wheel rotation equations to get wheel angular velocity
-Output appropriate angular velocities to the wheel joints
*/

int main(){
    

    return 0;
}
