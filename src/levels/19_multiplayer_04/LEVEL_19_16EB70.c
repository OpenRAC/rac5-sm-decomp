/* LEVEL_19:0x16EB70 -- placement copy of LEVEL_16_16DCB8.c: emits four colored particle bursts from a point half a unit above an object. */
struct Obj {
    char pad0[0x30];
    float pos[3];
};

extern char D_001CDF38[];

extern void func_0CA140(int mode, float *pos, char *data, unsigned int col1, unsigned int col2, float a, float b, float c, float d, float e, int z, int n, int life);

static __inline__ void Vec3_Copy(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

void func_16EB70(struct Obj *o)
{
    float p[3];

    Vec3_Copy(p, o->pos);
    p[1] += 0.5f;
    func_0CA140(3, p, D_001CDF38, 0xFF80FFFF, 0x80FFFF, 0.0f, 0.4f, 0.2f, -0.75f, 0.1f, 0, 3, 10);
    func_0CA140(2, p, D_001CDF38, 0xFF80FFFF, 0x80FFFF, 0.0f, 0.4f, 0.2f, -0.75f, 0.1f, 0, 1, 10);
    func_0CA140(2, p, D_001CDF38, 0xFF80FFFF, 0x80FFFF, 0.0f, 0.4f, 0.2f, -0.75f, 0.1f, 0, 1, 10);
    func_0CA140(1, p, D_001CDF38, 0xFF80FFFF, 0x80FFFF, 0.0f, 0.2f, 0.2f, -0.15f, 0.1f, 0, 1, 0x30);
}
