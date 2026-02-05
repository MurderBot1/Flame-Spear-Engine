#include "networking/shared/packet/PacketBuilder.h"

template<typename T>
FSE::Networking::Packet::PacketBuilder<T>::PacketBuilder(int ID)
    : packet(ID, {}) {
    sizeRemainingInBytes = packet.data.size();
    totalSize = packet.data.size();
}

template <typename T>
void FSE::Networking::Packet::PacketBuilder<T>::withBool(bool var) {
    if (sizeRemainingInBytes < 1) {
        return;
    }

    packet.data[totalSize - sizeRemainingInBytes] = (var) 
            ? 0x01 
            : 0x00;

    sizeRemainingInBytes--;
}

template <typename T>
void FSE::Networking::Packet::PacketBuilder<T>::withChar(char var) {
    if (sizeRemainingInBytes < 1) {
        return;
    }

    packet.data[totalSize - sizeRemainingInBytes] = var;
    
    sizeRemainingInBytes--;
}

template <typename T>
void FSE::Networking::Packet::PacketBuilder<T>::withDouble(double var) {
    if (sizeRemainingInBytes < 8) {
        return;
    }

    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&var);

    for (size_t i = 0; i < sizeof(double); ++i) {
        packet.data[totalSize - sizeRemainingInBytes + i] = bytePtr[i];
    }

    sizeRemainingInBytes -= sizeof(double);
}

template <typename T>
void FSE::Networking::Packet::PacketBuilder<T>::withFloat(float var) {
    if (sizeRemainingInBytes < 4) {
        return;
    }

    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&var);

    for (size_t i = 0; i < sizeof(float); ++i) {
        packet.data[totalSize - sizeRemainingInBytes + i] = bytePtr[i];
    }

    sizeRemainingInBytes -= sizeof(float);
}

template <typename T>
void FSE::Networking::Packet::PacketBuilder<T>::withInt(int var) {
    if (sizeRemainingInBytes < 4) {
        return;
    }

    unsigned char* bytePtr = reinterpret_cast<unsigned char*>(&var);

    for (size_t i = 0; i < sizeof(int); ++i) {
        packet.data[totalSize - sizeRemainingInBytes + i] = bytePtr[i];
    }

    sizeRemainingInBytes -= sizeof(int);
}

template <typename T>
void FSE::Networking::Packet::PacketBuilder<T>::withString(std::string var) {
    if (sizeRemainingInBytes < var.size()) {
        return;
    }

    for (size_t i = 0; i < var.size(); ++i) {
        packet.data[totalSize - sizeRemainingInBytes + i] = var[i];
    }

    sizeRemainingInBytes -= var.size();
}
