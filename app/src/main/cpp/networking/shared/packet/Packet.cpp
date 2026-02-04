#include "networking/shared/packet/Packet.h"

template <int SIZE>
inline FSE::Networking::Packet::PacketBase<SIZE>::PacketBase(int packetID, std::array<char, SIZE> data) {
    this->packetID = packetID;
    this->data = data;
}

FSE::Networking::Packet::Packet128::Packet128(int packetID, std::array<char, PACKET_128_SIZE> data)
        : PacketBase(packetID, data) {

}

FSE::Networking::Packet::Packet256::Packet256(int packetID, std::array<char, PACKET_256_SIZE> data)
        : PacketBase(packetID, data) {

}

FSE::Networking::Packet::Packet512::Packet512(int packetID, std::array<char, PACKET_512_SIZE> data)
        : PacketBase(packetID, data) {

}
