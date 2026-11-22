/* LEVEL_15:0x10C8B0 -- integrates the object's velocity into its position (scaled by the step in +0x50), rebuilds the pose matrix at +0x84 from the rotation helper and the new position, rescales its axes and flips the step's sign, stopping the attached sound. */
typedef struct Vec3 {
    float x, y, z;
} Vec3;

typedef struct Xf {
    float rot[3][3];
    Vec3 pos;
} Xf;

typedef struct Rec9 {
    float e[9];
} Rec9;

extern void func_0E8948(float *m, float *q);
extern void func_0EC3A0(float *out, float *a, float *b);
extern void func_0ECE10(int flag, Rec9 *v, float m0, float m1, float m2);
extern void func_12B488(int *slot, int id);

static __inline__ void AddScaled3(float *dst, float *a, float k)
{
    dst[0] = dst[0] + a[0] * k;
    dst[1] = dst[1] + a[1] * k;
    dst[2] = dst[2] + a[2] * k;
}

static __inline__ void Add3(float *out, float *a, float *b)
{
    out[0] = a[0] + b[0];
    out[1] = a[1] + b[1];
    out[2] = a[2] + b[2];
}

void func_10C8B0(char *o)
{
    Xf xf;

    AddScaled3((float *)(o + 0x1FC), (float *)(o + 0x44), *(float *)(o + 0x50));
    Add3((float *)(o + 0xC4), (float *)(o + 0x1FC), (float *)(o + 0xC));
    func_0E8948((float *)&xf, (float *)(o + 0xB4));
    xf.pos = *(Vec3 *)(o + 0xC4);
    func_0EC3A0((float *)(o + 0x84), (float *)(o + 0x54), (float *)&xf);
    func_0ECE10(0, (Rec9 *)(o + 0x84), *(float *)(o + 0x218), *(float *)(o + 0x218), *(float *)(o + 0x218));
    *(float *)(o + 0x50) = -*(float *)(o + 0x50);
    func_12B488((int *)(o + 0x34), 0x26);
}
