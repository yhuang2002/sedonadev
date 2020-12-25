#include "sedona.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include <errno.h>

/*****************************************************************************/

// int doObjectInit(int mstpAddr, int ObjectId, int attributeId)
Cell ESPBacnet_BacnetStack_doObjectInit(SedonaVM* vm, Cell* params) {
  int mstpAddr = params[0].ival;
  int objectId = params[1].aval;
  int attrId = params[2].aval;

  return zeroCell;
}

// int doObjectDeinit(int pointer)
Cell ESPBacnet_BacnetStack_doObjectDeinit(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;

  return zeroCell;
}

// int doPropSetup(int pointer, int attributeId)
Cell ESPBacnet_BacnetStack_doPropSetup(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;
  int attrId = params[1].aval;

  return zeroCell;
}

// int doPropCheck(int pointer, int attributeId)
Cell ESPBacnet_BacnetStack_doPropCheck(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;
  int attrId = params[1].aval;

  return zeroCell;
}

// float doPropRead(int pointer, int attributeId)
Cell ESPBacnet_BacnetStack_doPropRead(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;
  int attrId = params[1].aval;

  return zeroCell;
}

// int doPropWrite(int pointer, int attributeId, float value)
Cell ESPBacnet_BacnetStack_doPropWrite(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;
  int attrId = params[1].aval;
  float value = params[2].fval;

  return zeroCell;
}
