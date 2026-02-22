#ifndef Vector2_H
#define Vector2_H

namespace Types::Vectors {
    class Vector2 {
        Vector2(float x, float y);
        
        float x, y;

        public:
            static const Vector2 ZERO;
    };
}

#endif