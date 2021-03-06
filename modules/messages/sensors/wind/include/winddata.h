/*
*******************************************************************************
* winddata.h:
* define the data struct used in the wind sensors
* This header file can be read by C++ compilers
*
* by Hu.ZH(CrossOcean.ai)
*******************************************************************************
*/

#ifndef _WINDDATA_H_
#define _WINDDATA_H_

namespace ASV::messages {

struct windRTdata {
  double speed;        // m/s
  double orientation;  // rad
};

}  // namespace ASV::messages

#endif /* _WINDDATA_H_ */