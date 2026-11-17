/* Boot:0x01E76450, observed body 316 bytes; not a matching replacement.
 * GNU -O2 -G0 emits a 312-byte function and text section.
 * First difference: +0x34. One square-root latency word is missing; the
 * affected branch displacements change accordingly. The known division
 * padding route also changes the division spacing and does not match.
 * Retry after independently qualifying the required square-root/division
 * scheduling with regression controls. No compiler output is edited.
 *
 * The symbol encodes a C++ bool. This C view uses its 32-bit argument carrier
 * only for valid boolean values 0 and 1; it is not a general integer API.
 * The observed direct caller supplies 0. The original C++ bool compiler route
 * and any indirect callers remain unproved. No shared prototype is changed.
 * VEC3 below describes only the three accessed float fields, not a proven
 * complete engine allocation size or alignment.
 */
typedef struct { float x, y, z; } VEC3;
typedef unsigned int VEC_BooleanCarrier;
typedef char VEC_BooleanCarrier_must_be_32_bits[
    sizeof(VEC_BooleanCarrier) == 4 ? 1 : -1];

extern float sqrtf(float);
extern float acosf(float);

float VEC_AngleBetweenVectors__FPC4VEC3T0b(const VEC3 *a, const VEC3 *b,
                                       VEC_BooleanCarrier normalized) {
    float dot = a->x * b->x + a->y * b->y + a->z * b->z;
    if (!normalized) {
        float length_a = a->x * a->x + a->y * a->y + a->z * a->z;
        float length_b = b->x * b->x + b->y * b->y + b->z * b->z;
        if (length_a < 2.384185791015625e-7f || length_b < 2.384185791015625e-7f)
            return 0.0f;
        dot *= 1.0f / sqrtf(length_a * length_b);
    }
    if (dot >= 0.99951171875f)
        return 0.0f;
    if (dot <= -0.99951171875f)
        return 3.1415927410125732421875f;
    return acosf(dot);
}
