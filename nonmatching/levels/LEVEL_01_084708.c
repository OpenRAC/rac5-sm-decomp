/* USA LEVEL_01.REL:0x084708, 388-byte candidate (21 November 2026).
 * Measured pinned --as: 1 differing words; first difference at 0x188.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    float x;
    float y;
    float z;
} Vec3;

typedef struct {
    float m[16];
} Mat4;

typedef struct {
    char pad00[0x44];
    Mat4 mat;
    char pad84[4];
    unsigned char shape;
} Vol;

extern void func_125E78(Vec3 *dst, Mat4 *mat, Vec3 *v);

int func_084708(Vol *vol, Vec3 *p)
{
    Vec3 l;

    func_125E78(&l, &vol->mat, p);
    switch (vol->shape) {
    case 0:
        return -1.0f <= l.x && l.x <= 1.0f && -1.0f <= l.y && l.y <= 1.0f && -1.0f <= l.z && l.z <= 1.0f;
    case 1:
        return l.x * l.x + l.y * l.y + l.z * l.z <= 1.0f;
    case 2:
        return -1.0f <= l.y && l.y <= 1.0f && l.x * l.x + l.z * l.z <= 1.0f;
    }
    return 0;
}
