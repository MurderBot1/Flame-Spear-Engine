#ifndef Packet_H
#define Packet_H
#include <array>

namespace FSE::Networking::Packet {
    struct Packet128 {
        Packet128(int ID, std::array<char, 128> data);

        int packetID;
        std::array<char, 128> data;
    };

    struct Packet256 {
        Packet256(int ID, std::array<char, 256> data);

        int packetID;
        std::array<char, 256> data;
    };

    struct Packet512 {
        Packet512(int ID, std::array<char, 512> data);

        int packetID;
        std::array<char, 512> data;
    };
}

#endif