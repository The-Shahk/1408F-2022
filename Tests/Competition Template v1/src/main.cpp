#include "main.h"
#include "driveTrain.h"

std::vector<pros::Motor> leftMotorGroup {
    pros::Motor (1),
    pros::Motor (2),
    pros::Motor (3)
};

std::vector<pros::Motor> rightMotorGroup {
    pros::Motor (4, true),
    pros::Motor (5, true),
    pros::Motor (6, true)
};

pros::Motor leftMotorGroup2 (
    1,
    true
);


pros::Motor rightMotorGroup2 (
    4,
    true
);

driveTrain2 drive (leftMotorGroup2, rightMotorGroup2);

void opcontrol() {
    //drive.setPower(100, 25, 25);
    //pros::delay(1000);
    //drive.setPower(1, 0, 0);
}
