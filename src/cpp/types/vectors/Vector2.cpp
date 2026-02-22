#include "types/vectors/Vector2.h"

namespace Types::Vectors {
    Vector2::Vector2(float xInput, float yInput) : x(xInput), y(yInput) {}

    const Vector2 Vector2::ZERO = Vector2(0.0f, 0.0f);
}