#ifndef Packet_H
#define Packet_H

#include <array>
#include <cstddef>
#include <cstdint>

#define PACKET_32_SIZE   32
#define PACKET_64_SIZE   64
#define PACKET_128_SIZE  128
#define PACKET_256_SIZE  256
#define PACKET_512_SIZE  512
#define PACKET_1024_SIZE 1024

namespace FSE::Networking::Packet {

    struct PacketBaseTag {};

    template<size_t SIZE>
    struct PacketBase : PacketBaseTag {
        explicit PacketBase(int packetID);

        void constructHash();
        uint64_t getHash() const;

        int packetID;
        uint64_t hash;
        std::array<char, SIZE> data;
    };

    typedef PacketBase<PACKET_32_SIZE> Packet32;
    typedef PacketBase<PACKET_64_SIZE> Packet64;
    typedef PacketBase<PACKET_128_SIZE> Packet128;
    typedef PacketBase<PACKET_256_SIZE> Packet256;
    typedef PacketBase<PACKET_512_SIZE> Packet512;
    typedef PacketBase<PACKET_1024_SIZE> Packet1024;
}

#endif