/* LEVEL_15:0x103E90 -- tests a swept contact against the world block and, when it hits, resolves it into the three result vectors. */
typedef struct Vec4 {
    float f[4];
} Vec4;

typedef struct World {
    char pad_00[0x34];
    char first[0xC];
    char second[0x10];
} World;

extern World *D_002EDA40;
extern int func_0E1A68(char * a, char * b, float * c, float * d, float * e, float * f, int g, int h, float t, float lensq, float zero);
extern int func_0DA500(Vec4 * out0, Vec4 * out1, Vec4 * out2, int g, int h, float t, World * world, float * c, int zero);

unsigned char func_103E90(float t, float *base, int a, int b)
{
    World *world = D_002EDA40;
    Vec4 out0;
    Vec4 out1;
    Vec4 out2;
    float *c = base - 0xDA;
    unsigned char ok;
    int ret;

    ok = func_0E1A68(world->first, world->second, c, base - 0xD7, base - 0xD4, base - 0xD1, a, b, t, c[0] * c[0] + c[1] * c[1] + c[2] * c[2], 0.0f);
    if (ok == 0)
        ret = 0;
    else
        ret = func_0DA500(&out2, &out0, &out1, a, b, t, world, c, 0);
    return ret;
}
