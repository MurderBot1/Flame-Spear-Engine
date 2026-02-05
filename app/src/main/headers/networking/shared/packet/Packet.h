#ifndef Packet_H
#define Packet_H

#include <array>
#include <cstddef>
#include <cstdint>

#define PACKET_32_SIZE 32
#define PACKET_64_SIZE 64
#define PACKET_128_SIZE 128
#define PACKET_256_SIZE 256
#define PACKET_512_SIZE 512
#define PACKET_1024_SIZE 512

namespace FSE::Networking::Packet {
    struct PacketBaseTag {};

    template<size_t SIZE>
    struct PacketBase : PacketBaseTag {
        PacketBase(int packetID, std::array<char, SIZE> data);

        void constructHash();
        uint64_t getHash();

        int packetID;
        uint64_t hash;
        std::array<char, SIZE> data;
    };

    struct Packet32 : PacketBase<PACKET_32_SIZE> {
        Packet32(int packetID, std::array<char, PACKET_32_SIZE> data);
    };

    struct Packet64 : PacketBase<PACKET_64_SIZE> {
        Packet64(int packetID, std::array<char, PACKET_64_SIZE> data);
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

    struct Packet1024 : PacketBase<PACKET_1024_SIZE> {
        Packet1024(int packetID, std::array<char, PACKET_1024_SIZE> data);
    };
}

#endif