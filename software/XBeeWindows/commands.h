#ifndef COMMANDS_H
#define COMMANDS_H

#include "defines.h"

void telemetryRequest(unsigned char *address64,unsigned char *address16,unsigned char type, unsigned char frameID);
void telemetryReceive(unsigned char *address64,unsigned char *address16,unsigned char type,float value);

void telemetryToCoordinatorSet(unsigned char *address64,unsigned char *address16,unsigned char type,unsigned char on, unsigned char frameID);
void telemetryToCoordinatorStatusRequest(unsigned char *address64,unsigned char *address16,unsigned char type,unsigned char frameID);
void telemetryToCoordinatorReportRecieved(unsigned char *address64,unsigned char *address16,unsigned char type,unsigned char status);

void dataTypeError(unsigned char *address64,unsigned char *address16,unsigned char *data);
void packetTypeError(unsigned char *inPacket);

void kopterLandRequest(unsigned char *address64,unsigned char *address16,unsigned char options,unsigned char frameID);
void kopterLandStatusRequest(unsigned char *address64,unsigned char *address16,unsigned char frameID);
void kopterLandReportRecieved(unsigned char *address64,unsigned char *address16,unsigned char status);

void kopterTrajectoryRequest(unsigned char *address64,unsigned char *address16,unsigned char options,unsigned char frameID);
void kopterTrajectoryStatusRequest(unsigned char *address64,unsigned char *address16,unsigned char frameID);
void kopterTrajectoryReportRecieved(unsigned char *address64,unsigned char *address16,unsigned char status);

void kopterTrajectoryAddPointRequest(unsigned char *address64,unsigned char *address16,unsigned char index,float time,float elevatorPos,float aileronPos,float throttlePos,unsigned char frameID);
void kopterTrajectoryPointStatusRequest(unsigned char *address64,unsigned char *address16,unsigned char frameID);
void kopterTrajectoryPointReportReceived(unsigned char *address64,unsigned char *address16,unsigned char index,float time,float elevatorPos,float aileronPos,float throttlePos);

void kopterSetpointsSetRequest(unsigned char *address64,unsigned char *address16,unsigned char type,unsigned char positionType,float value,unsigned char frameID);
void kopterSetpointStatusRequest(unsigned char *address64,unsigned char *address16,unsigned char type,unsigned char frameID);
void kopterSetpointsReportReceived(unsigned char *address64,unsigned char *address16,unsigned char type,float value);

void kopterControllersRequest(unsigned char *address64,unsigned char *address16,unsigned char option,unsigned char frameID);
void kopterControllersStatusRequest(unsigned char *address64,unsigned char *address16,unsigned char frameID);
void kopterControllersReportReceived(unsigned char *address64,unsigned char *address16,unsigned char status);

void kopterGumstixRequest(unsigned char *address64,unsigned char *address16,unsigned char options,unsigned char frameID);
void kopterGumstixStatusRequest(unsigned char *address64,unsigned char *address16,unsigned char frameID);
void kopterGumstixReportRecieved(unsigned char *address64,unsigned char *address16,unsigned char status);
#endif /*COMMANDS_H*/