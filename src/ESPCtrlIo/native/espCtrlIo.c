#include "sedona.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include <errno.h>

static int channel_mapping[12] = { -1, -1, -1, -1,
                                   -1, -1, -1, -1,
                                   -1, -1, -1, -1 };

/*****************************************************************************/

// int Dio.doInit()
Cell ESPCtrlIo_EspIo_doAllocateCh(SedonaVM* vm, Cell* params) {
  int whichDio = params[0].ival;
  int id       = params[1].ival;
  Cell val;
  val.ival = -1;
  int i;

  if ((whichDio >= 0) &&
      (whichDio < 12)) {
	if (channel_mapping[whichDio] == -1) {
      channel_mapping[whichDio] = id;
      val.ival = whichDio;
	} else if (channel_mapping[whichDio] == id) {
      val.ival = whichDio;
    }
  }

  for (i = 0; i < 12; i++) {
    if (channel_mapping[i] == id) {
		if (i != val.ival) val.ival= i;
    }
  }

  return val;
}

Cell ESPCtrlIo_EspIo_doFreeCh(SedonaVM* vm, Cell* params) {
  int whichDio = params[0].ival;

  if ((whichDio >= 0) &&
      (whichDio < 12)) {
    channel_mapping[whichDio] = -1;
  }

  return zeroCell;
}

// int Dio.doSetMode()
Cell ESPCtrlIo_EspIo_doSetMode(SedonaVM* vm, Cell* params)
{
  int whichDio = params[0].ival;
  int mode     = params[1].ival;

#ifdef SHOW_DEBUG
  printf("native:Dio.doInit( %d, %s )\n", whichDio, (bDir?"in":"out"));  
#endif

  return zeroCell;
}




// int  Dio.doRead()
Cell ESPCtrlIo_EspIo_doRead(SedonaVM* vm, Cell* params)
{
  int whichDio = params[0].ival;

  Cell val;
  val.fval = 3.0;

  return val;
}



// int  Dio.doWrite(bool bValue)
Cell ESPCtrlIo_EspIo_doWrite(SedonaVM* vm, Cell* params)
{
  int whichDio = params[0].ival;
  float fValue = params[1].fval;

  return zeroCell;
}
