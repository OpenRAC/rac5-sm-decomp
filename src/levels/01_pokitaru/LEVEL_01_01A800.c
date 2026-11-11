/* LEVEL_01:0x01A800 -- copie de douze octets depuis un global. */
typedef struct {
    float f[2];
    int   n;
} Sample;

extern Sample D_0022FBE8;

Sample *func_01A800(Sample *dst)
{
    *dst = D_0022FBE8;

    return dst;
}
