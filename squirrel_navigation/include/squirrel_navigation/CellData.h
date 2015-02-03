// CellData.h --- 
// 
// Filename: CellData.h
// Description: 
// Author: Federico Boniardi
// Maintainer: boniardi@cs.uni-freiburg.de
// Created: Tue Feb  3 10:28:32 2015 (+0100)
// Version: 0.1.0
// Last-Updated: Tue Feb 3 10:30:28 2015 (+0100)
//           By: Fderico Boniardi
//     Update #: 1
// URL: 
// Keywords: 
// Compatibility: 
//   ROS Hydro, ROS Indigo
// 

// Commentary: 
//     /*********************************************************************
//      *
//      * Software License Agreement (BSD License)
//      *
//      *  Copyright (c) 2008, 2013, Willow Garage, Inc.
//      *  All rights reserved.
//      *
//      *  Redistribution and use in source and binary forms, with or without
//      *  modification, are permitted provided that the following conditions
//      *  are met:
//      *
//      *   * Redistributions of source code must retain the above copyright
//      *     notice, this list of conditions and the following disclaimer.
//      *   * Redistributions in binary form must reproduce the above
//      *     copyright notice, this list of conditions and the following
//      *     disclaimer in the documentation and/or other materials provided
//      *     with the distribution.
//      *   * Neither the name of Willow Garage, Inc. nor the names of its
//      *     contributors may be used to endorse or promote products derived
//      *     from this software without specific prior written permission.
//      *
//      *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
//      *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
//      *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
//      *  FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
//      *  COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
//      *  INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
//      *  BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
//      *  LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
//      *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
//      *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
//      *  ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
//      *  POSSIBILITY OF SUCH DAMAGE.
//      *
//      * Author: Eitan Marder-Eppstein
//      *         David V. Lu!!
//      *********************************************************************/
//      

// Code:

#ifndef CELLDATA_H_
#define CELLDATA_H_

namespace squirrel_navigation {

class CellData
{
 public:
  CellData(double d, double i, unsigned int x, unsigned int y, unsigned int sx, unsigned int sy) :
      distance_(d),
      index_(i),
      x_(x),
      y_(y),
      src_x_(sx),
      src_y_(sy)
  {}
  
  double distance_;
  unsigned int index_;
  unsigned int x_, y_;
  unsigned int src_x_, src_y_;
};

inline bool operator<(const CellData &a, const CellData &b)
{
  return a.distance_ > b.distance_;
}

}  // namespace squirrel_navigation

#endif // CELLDATA_H_ 

// 
// CellData.h ends here
