/*
 * Copyright (c) 2014:
 * Frederic Suter, CNRS / IN2P3 Computing Center <fsuter@cc.in2p3.fr>
 * Henri Casanova, ICS Dept., University of Hawai`i at Manoa <henric@hawaii.edu>

 * The license of the original code is unknown. Modifications are made
 * under the terms of the GNU LGPL license.
 */

#ifndef __STATINST_H__
#define __STATINST_H__

#include "Stat.h"
#include <papi.h>

class StatInst : public Stat{

public:
  static long long counter;
  static int Events[30];
  long long values [1];
  int EventSet=PAPI_NULL;

  StatInst(int s);
  virtual ~StatInst();

  void start();
  long long end();

};

#endif /*__STATINST_H__*/
