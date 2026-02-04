#ifndef Packet_H
#define Packet_H

#include <array>

#define PACKET_128_SIZE 128
#define PACKET_256_SIZE 256
#define PACKET_512_SIZE 512

namespace FSE::Networking::Packet {
    struct PacketBaseTag {};

    template<int SIZE>
    struct PacketBase : PacketBaseTag {
        PacketBase(int packetID, std::array<char, SIZE> data);

        int packetID;
        std::array<char, SIZE> data;
    };

    struct Packet128 : PacketBase<PACKET_128_SIZE> {
        Packet128(int packetID, std::array<char, PACKET_128_SIZE> data);
    };

    struct Packet256 : PacketBase<PACKET_256_SIZE> {
        Packet256(int packetID, std::array<char, PACKET_256_SIZE> data);
    };

    struct Packet512 : PacketBase<PACKET_512_SIZE> {
        Packet512(int packetID, std::array<char, PACKET_512_SIZE> data);
    };
}

#endif