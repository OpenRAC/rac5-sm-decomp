/* LEVEL_06.REL 0x019000 -- twelve bytes of floats copied out of a global.
   The retail names the global first (lui/addiu), then moves the three
   floats as a 16-byte unaligned quadword plus the trailing word. */
typedef struct {
    float f[3];
} Vec3;

extern Vec3 D_21C968;

Vec3 *func(Vec3 *dst)
{
    *dst = D_21C968;
    return dst;
}
