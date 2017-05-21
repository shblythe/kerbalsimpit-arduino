/** @file PayloadStructs.h
    Structs for compound message types.
*/
#ifndef PayloadStructs_h
#define PayloadStructs_h

#include <Arduino.h>

/** An Altitude message. */
struct altitudeMessage {
  float sealevel; /**< Altitude above sea level. */
  float surface; /**< Surface altitude at current position. */
} __attribute__((packed));

/** An Apsides message. */
struct apsidesMessage {
  float periapsis; /**< Current vessel's orbital periapsis. */
  float apoapsis; /**< Current vessel's orbital apoapsis. */
} __attribute__((packed));

/** An Apsides Time message. */
struct apsidesTimeMessage {
  int periapsis; /** Time until the current vessel's orbital periapsis, in seconds. */
  int apoapsis; /** Time until the current vessel's orbital apoapsis, in seconds. */
} __attribute__((packed));

/** A Resource message.
    All resource messages use this struct for sending data. */
struct resourceMessage {
  float total; /**< Maximum capacity of the resource. */
  float available; /**< Current resource level. */
} __attribute__((packed));

/** A Velocity message. */
struct velocityMessage {
  float orbital; /**< Orbital velocity. */
  float surface; /**< Surface velocity. */
  float vertical; /**< Vertical velocity. */
} __attribute__((packed));

/** A Target information message. */
struct targetMessage {
  float distance; /**< Distance to target. */
  float velocity; /**< Velocity relative to target. */
} __attribute__((packed));


// Message parsing functions

/** Parse a message containing Altitude data.
    @param msg The byte array of the message body.
    @returns altitudeMessage A formatted altitudeMessage struct.
*/
altitudeMessage parseAltitude(byte msg[]);
/** Parse a message containing Apsides data.
    @returns apsidesMessage A formatted apsidesMessage struct.
*/
apsidesMessage parseApsides(byte msg[]);

/** Parse a message containing Apsides Time data.
    @returns apsidesTimeMessage A formatted apsidesTimeMessage struct.
*/
apsidesTimeMessage parseApsidesTime(byte msg[]);

/** Parse a message countaining Resource data.
    @returns resourceMessage A formatted resourceMessage struct.
*/
resourceMessage parseResource(byte msg[]);
/** Parse a message containing Velocity data.
    @returns velocityMessage A formatted velocityMessage struct.
*/
velocityMessage parseVelocity(byte msg[]);
/** Parse a message containing Target data.
    @returns targetMessage A formatted targetMessage struct.
*/
targetMessage parseTarget(byte msg[]);
#endif
