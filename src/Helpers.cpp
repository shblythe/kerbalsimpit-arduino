/** @file Helpers.cpp
    Helper functions to send outgoing messages.
*/
#include "KerbalSimpit.h"

void KerbalSimpit::activateCAG(byte actiongroup)
{
  send(CAGACTIVATE_MESSAGE, &actiongroup, 1);
}

void KerbalSimpit::deactivateCAG(byte actiongroup)
{
  send(CAGDEACTIVATE_MESSAGE, &actiongroup, 1);
}

void KerbalSimpit::toggleCAG(byte actiongroup)
{
  send(CAGTOGGLE_MESSAGE, &actiongroup, 1);
}

void KerbalSimpit::activateAction(byte action)
{
  send(AGACTIVATE_MESSAGE, &action, 1);
}

void KerbalSimpit::deactivateAction(byte action)
{
  send(AGDEACTIVATE_MESSAGE, &action, 1);
}

void KerbalSimpit::toggleAction(byte action)
{
  send(AGTOGGLE_MESSAGE, &action, 1);
}

void KerbalSimpit::setSASMode(byte mode)
{
  send(SAS_MODE_MESSAGE, &mode, 1);
}

void KerbalSimpit::sendWatchdog()
{
  send(WATCHDOG_MESSAGE,0,1);
}
