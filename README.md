# AV Collision Detection

## Overview
This project simulates basic autonomous vehicle (AV) safety checks by detecting potential collision risks based on vehicle speed and distance to obstacles. It uses Python to analyze log data and flag situations where collisions could occur.

## Files
- **detect_risk.py** – Python script that reads vehicle log data and calculates collision risk.
- **distance_violation.py** - Collision avoidance validator using pytest
- **Book3.xlsx** – Sample log data containing time, speed, steering angle, distance to objects, brake, and throttle values.
- **README.md** – Project description.
- **safe_speed.py** -- AV Speed Validator using pytest
- (Optional) future scripts for MATLAB or C++ AV test cases.

## How to Run
1. Install Python 3.x.
2. Install required packages:
```bash
pip install pandas openpyxl

