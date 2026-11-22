/* USA LEVEL_15.REL:0x103F70, 320-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 12 differing words; first difference at 0x2C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct Vec4 {
    float f[4];
} Vec4;

typedef struct World {
    char pad_00[0x34];
    char first[0xC];
    char second[0x10];
} World;

extern World *D_002EDA40;
extern int D_002F3E14;
extern float sqrtf(float);
extern int func_0E1A68(char * a, char * b, float * c, float * d, float * e, float * f, int g, int h, float t, float lensq, float len);
extern int func_0DB020(float t, float * o0, float * o1, Vec4 * o2, int g, int h, World * world, float * c, float u, int k);

unsigned char func_103F70(float t, float u, float *base, int a, int b)
{
    World *world = D_002EDA40;
    char *first = world->first;
    char *second = world->second;
    float *c = base - 0xDA;
    float lensq;
    float len;
    Vec4 q;
    float v[4];
    unsigned char ok;

    lensq = c[0] * c[0] + c[1] * c[1] + c[2] * c[2];
    len = u * sqrtf(lensq);
    ok = func_0E1A68(first, second, c, base - 0xD7, base - 0xD4, base - 0xD1, a, b, t, lensq, len);
    if (ok == 0)
        return 0;
    if (func_0DB020(t, v, v + 1, &q, a, b, world, c, u, D_002F3E14) != 0)
        return 1;
    return 0;
}
