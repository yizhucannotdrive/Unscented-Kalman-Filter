//
//  main_test.cpp
//  
//
//  Created by xuxu on 09/09/2017.
//
//

#include <uWS/uWS.h>
#include <iostream>
#include "json.hpp"
#include <math.h>
#include "ukf.h"
#include "tools.h"

using namespace std;

// for convenience
int main()
{
    UKF ukf;
    Tools tools;
    vector<VectorXd> estimations;
    vector<VectorXd> ground_truth;
    MeasurementPackage meas_package;
    meas_package.timestamp_=0.0;
    meas_package.sensor_type = RADAR;
    meas_package.raw_measurements_=VectorXd(3);
    meas_package.raw_measurements_<< 1,1,1;
    
    return;
}

    
    
