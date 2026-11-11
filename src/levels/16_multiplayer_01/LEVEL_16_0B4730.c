/* LEVEL_16.REL 0x0B4730 -- sixteen bytes of floats copied into a global. */
typedef struct {
    float f[4];
} Vec4;

extern Vec4 D_279958;

void func(Vec4 *src)
{
    D_279958 = *src;
}
