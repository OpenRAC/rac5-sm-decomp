/* LEVEL_07.REL 0x01AEC0 -- twelve bytes of floats copied out of a global. */
typedef struct {
    float f[3];
} Vec3;

extern Vec3 D_2454E8;

Vec3 *func(Vec3 *dst)
{
    *dst = D_2454E8;
    return dst;
}
