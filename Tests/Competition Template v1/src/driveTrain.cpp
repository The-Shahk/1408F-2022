#include "main.h"
#include "driveTrain.h"

driveTrain::driveTrain (std::vector<pros::Motor> l, std::vector<pros::Motor> r) {
    leftMotors = l;
    rightMotors = r;
}

void driveTrain::setPower (int scale, int l, int r) {

    int sl = (l/scale)*12000;
    int sr = (r/scale)*12000;

    for (int i = 0; i < leftMotors.size(); i++) {
        leftMotors[i].move_voltage(sl);
    }
    for (int i = 0; i < rightMotors.size(); i++) {
        rightMotors[i].move_voltage(sr);
    }
}

driveTrain2::driveTrain2 (pros::Motor l, pros::Motor r) {
    leftMotors = l;
    rightMotors = r;
}

