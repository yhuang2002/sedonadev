#include "sedona.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include <errno.h>

/*****************************************************************************/

// int doGenericInit(int mstpAddr, int ObjectId, int attributeId)
Cell ESPBacnet_BacnetStack_doGenericInit(SedonaVM* vm, Cell* params) {
  int mstpAddr = params[0].ival;
  int objectId = params[1].aval;
  int attrId = params[2].aval;

  return zeroCell;
}

// int doGenericDeinit(int pointer)
Cell ESPBacnet_BacnetStack_doGenericDeinit(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;

  return zeroCell;
}

// int doBinaryInit(int mstpAddr, int ObjectId)
Cell ESPBacnet_BacnetStack_doBinaryInit(SedonaVM* vm, Cell* params) {
  int mstpAddr = params[0].ival;
  int objectId = params[1].aval;

  return zeroCell;
}

// int doBinaryDeinit(int pointer)
Cell ESPBacnet_BacnetStack_doBinaryDeinit(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;

  return zeroCell;
}

// int doAnalogInit(int mstpAddr, int ObjectId)
Cell ESPBacnet_BacnetStack_doAnalogInit(SedonaVM* vm, Cell* params) {
  int mstpAddr = params[0].ival;
  int objectId = params[1].aval;

  return zeroCell;
}

// int doAnalogDeinit(int pointer)
Cell ESPBacnet_BacnetStack_doAnalogDeinit(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;

  return zeroCell;
}

// int doMultiStateInit(int mstpAddr, int ObjectId)
Cell ESPBacnet_BacnetStack_doMultiStateInit(SedonaVM* vm, Cell* params) {
  int mstpAddr = params[0].ival;
  int objectId = params[1].aval;

  return zeroCell;
}

// int doMultiStateDeinit(int pointer)
Cell ESPBacnet_BacnetStack_doMultiStateDeinit(SedonaVM* vm, Cell* params) {
  void *pointer = params[0].ival;

  return zeroCell;
}