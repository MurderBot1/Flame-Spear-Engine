#include "networking/shared/packet/PacketBuilder.h"

template<typename T>
FSE::Networking::Packet::PacketBuilder<T>::PacketBuilder(int ID)
    : packet(ID, {}) {
    sizeRemaining = packet.data.size();
}
