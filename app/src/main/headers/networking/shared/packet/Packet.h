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

    struct Packet32   : PacketBase<PACKET_32_SIZE>   { explicit Packet32(int id); };
    struct Packet64   : PacketBase<PACKET_64_SIZE>   { explicit Packet64(int id); };
    struct Packet128  : PacketBase<PACKET_128_SIZE>  { explicit Packet128(int id); };
    struct Packet256  : PacketBase<PACKET_256_SIZE>  { explicit Packet256(int id); };
    struct Packet512  : PacketBase<PACKET_512_SIZE>  { explicit Packet512(int id); };
    struct Packet1024 : PacketBase<PACKET_1024_SIZE> { explicit Packet1024(int id); };

}

#endif