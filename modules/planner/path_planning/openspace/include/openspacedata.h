/*
*******************************************************************************
* openspacedata.h:
* define the data struct used in the low-speed planner
* This header file can be read by C++ compilers
*
* by Hu.ZH(CrossOcean.ai)
*******************************************************************************
*/

#ifndef _OPENSPACEDATA_H_
#define _OPENSPACEDATA_H_

#include <common/math/eigen/Eigen/Core>
#include <common/math/eigen/Eigen/Dense>

namespace ASV::planning {

/**************************** obstacles  ******************************/
// the obstacles in openspace planner can be defined in different forms,
// including vertex, linesegment and box. These parameters are represented
// in the Cartesian Coordinates.
struct Obstacle_Vertex {
  double x;
  double y;
};

struct Obstacle_LineSegment {
  double start_x;  // x-coordinate of starting point
  double start_y;  // y-coordinate of starting point
  double end_x;    // x-coordinate of end point
  double end_y;    // y-coordinate of end point
};

struct Obstacle_Box2d {
  double center_x;  // x-coordinate of box center
  double center_y;  // y-coordinate of box center
  double length;    // length, parellel to heading-axis
  double width;     // width, perpendicular to heading-axis
  double heading;
};

}  // namespace ASV::planning
#endif /* _OPENSPACEDATA_H_ */