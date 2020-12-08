#include "sedona.h"

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#include <errno.h>

/*****************************************************************************/

// int doEspPublishMsg(int Pub_ID, float value)
Cell ESPPubSub_PubSub_doPublishMsg(SedonaVM* vm, Cell* params) {
  int pubId     = params[0].ival;
  float value   = params[1].fval;
  Cell val;
  val.ival = -1;

printf("EspPub publish value %f\n", value);

  return val;
}

// int doEspPublishInit(Str topic)
Cell ESPPubSub_PubSub_doPublishInit(SedonaVM* vm, Cell* params) {
  char *topic = params[0].aval;
  Cell val;
  val.ival = 3;

printf("EspPub publish setup for %s\n", topic);

  return val;
}

// int doEspPublishDeinit(Str topic)
Cell ESPPubSub_PubSub_doPublishDeinit(SedonaVM* vm, Cell* params) {
  char pubId = params[0].ival;
  Cell val;
  val.ival = 0;

printf("EspPub publish setup remove id = %d\n", pubId);

  return val;
}

// int doEspSubscrib(Str topic)
Cell ESPPubSub_PubSub_doSubscribe(SedonaVM* vm, Cell* params)
{
  char *topic = params[0].aval;
  Cell val;
  val.ival = -1;

  return val;
}

// int doEspUnsubscrib(int Sub_ID)
Cell ESPPubSub_PubSub_doUnsubscribe(SedonaVM* vm, Cell* params)
{
  int id = params[0].ival;

  return zeroCell;
}

// float doEspSubscribRead(int Sub_ID)
Cell ESPPubSub_PubSub_doSubscribeRead(SedonaVM* vm, Cell* params)
{
  int id = params[0].ival;

  Cell val;
  val.fval = -1.0;

  return val;
}
