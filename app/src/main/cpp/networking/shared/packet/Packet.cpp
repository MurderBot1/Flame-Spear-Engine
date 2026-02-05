#include "networking/shared/packet/Packet.h"

template <size_t SIZE>
inline FSE::Networking::Packet::PacketBase<SIZE>::PacketBase(int packetID, std::array<char, SIZE> data) {
    this->packetID = packetID;
    this->data = data;
}

template <size_t SIZE>
void FSE::Networking::Packet::PacketBase<SIZE>::constructHash() {
    hash = getHash();
}

template <size_t SIZE>
uint64_t FSE::Networking::Packet::PacketBase<SIZE>::getHash() {
    uint64_t h = 0x9E3779B185EBCA87ULL; // golden ratio

    for (size_t i = 0; i < SIZE; i++) {
        h ^= static_cast<unsigned char>(data[i]) * 0x9E3779B185EBCA87ULL;
        h = (h << 27) | (h >> 37);
        h *= 0x9E3779B185EBCA87ULL;
    }

    return h;
}

FSE::Networking::Packet::Packet32::Packet32(int packetID, std::array<char, PACKET_32_SIZE> data)
    : PacketBase(packetID, data)
{
}

FSE::Networking::Packet::Packet64::Packet64(int packetID, std::array<char, PACKET_64_SIZE> data)
    : PacketBase(packetID, data)
{
}

FSE::Networking::Packet::Packet128::Packet128(int packetID, std::array<char, PACKET_128_SIZE> data)
    : PacketBase(packetID, data)
{
}

FSE::Networking::Packet::Packet256::Packet256(int packetID, std::array<char, PACKET_256_SIZE> data)
        : PacketBase(packetID, data) {

}

FSE::Networking::Packet::Packet512::Packet512(int packetID, std::array<char, PACKET_512_SIZE> data)
        : PacketBase(packetID, data) {

}

FSE::Networking::Packet::Packet1024::Packet1024(int packetID, std::array<char, PACKET_1024_SIZE> data) 
        : PacketBase(packetID, data) {
        
}