#include "main.h"
#pragma once

class driveTrain {
    private:
        std::vector<pros::Motor> leftMotors;
        std::vector<pros::Motor> rightMotors;
    public:
        driveTrain (std::vector<pros::Motor> l, std::vector<pros::Motor> r);
        void setPower (int scale, int l, int r);
};

class driveTrain2 {
    private:
        pros::Motor leftMotors;
        pros::Motor rightMotors;
    public:
        driveTrain2 (pros::Motor l, pros::Motor r);
        void setPower (int scale, int l, int r);
};