#pragma once
#include "tcp_connection.h"

class Packet_UMsgManager {
public:
	void ParsePacket_UMsg(TCPConnection::Packet::pointer packet);
};

extern Packet_UMsgManager packet_UMsgManager;