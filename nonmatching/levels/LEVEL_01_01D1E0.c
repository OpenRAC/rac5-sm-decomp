/* Candidate for LEVEL_01.REL:0x01D1E0.
 * Evaluates a transformed path against a sequence of 76-byte records.
 * Helper signatures and record fields are provisional.
 * gnu-ee-trial-divpad links 692 bytes against a 712-byte candidate;
 * first difference is at body byte 22. This is not a match.
 */
typedef unsigned char u8;
typedef struct __attribute__((aligned(16))) {
    float x, y, z, pad;
} Vec3;
typedef struct {
    Vec3 projected;
    Vec3 difference;
    Vec3 offset;
    Vec3 point;
    Vec3 delta;
} Scratch;

extern float sqrtf(float);
extern int func_01CD08(float, float, float, float *, float *, float *, float *, float *);
extern float func_01CE48(float, float, Vec3 *, Vec3 *, void *, int);

float func_01D1E0(float value, float factor, float *target, float *direction,
                   u8 *context, float *matrix)
{
    Scratch scratch;
    float length;
    float inverse;
    float inverse2;
    float factor_scaled;
    float position_scaled;
    u8 *record;
    u8 *end;
    int kind;

    length = sqrtf(matrix[0] * matrix[0] + matrix[1] * matrix[1]
                   + matrix[2] * matrix[2]);
    inverse = 1.0f / length;
    inverse2 = inverse * inverse;
    factor_scaled = factor * inverse;
    if (func_01CD08(inverse2, value, factor_scaled,
                    (float *)(context + 0x34), (float *)(context + 0x40),
                    matrix, target, direction) == 0)
        return value;

    position_scaled = value * inverse;
    kind = *(int *)(context + 8);
    record = *(u8 **)(context + 0xC);
    end = record + *(int *)(context + 4) * 0x4C;

    scratch.difference.x = target[0] - matrix[12];
    scratch.difference.y = target[1] - matrix[13];
    scratch.difference.z = target[2] - matrix[14];
    scratch.projected.x = (direction[0] * matrix[0]
                         + direction[1] * matrix[1]
                         + direction[2] * matrix[2]) * inverse;
    scratch.projected.y = (direction[0] * matrix[4]
                         + direction[1] * matrix[5]
                         + direction[2] * matrix[6]) * inverse;
    scratch.projected.z = (direction[0] * matrix[8]
                         + direction[1] * matrix[9]
                         + direction[2] * matrix[10]) * inverse;
    scratch.offset.x = (scratch.difference.x * matrix[0]
                      + scratch.difference.y * matrix[1]
                      + scratch.difference.z * matrix[2]) * inverse2;
    scratch.offset.y = (scratch.difference.x * matrix[4]
                      + scratch.difference.y * matrix[5]
                      + scratch.difference.z * matrix[6]) * inverse2;
    scratch.offset.z = (scratch.difference.x * matrix[8]
                      + scratch.difference.y * matrix[9]
                      + scratch.difference.z * matrix[10]) * inverse2;

    while (record != end) {
        scratch.point.x = scratch.offset.x + scratch.projected.x * position_scaled;
        scratch.point.y = scratch.offset.y + scratch.projected.y * position_scaled;
        scratch.point.z = scratch.offset.z + scratch.projected.z * position_scaled;
        scratch.delta.x = scratch.point.x - scratch.offset.x;
        scratch.delta.y = scratch.point.y - scratch.offset.y;
        scratch.delta.z = scratch.point.z - scratch.offset.z;
        position_scaled = func_01CE48(position_scaled, factor_scaled,
                                     &scratch.offset, &scratch.projected,
                                     record, kind);
        record += 0x4C;
    }
    return position_scaled * length;
}
