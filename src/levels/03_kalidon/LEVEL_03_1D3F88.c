/* LEVEL_03:0x1D3F88 -- classifies an object by squared distance to a target. */
typedef struct {
    char pad0[0x40];
    int h;
    char pad1[0x4C - 0x44];
    float radius;
} Info;
typedef struct {
    char pad0[0x30];
    float x;
    char pad1[4];
    float z;
    char pad2[0x54 - 0x3C];
    Info *info;
} Obj;
extern void func_01A0B0(float *v);
extern int func_084588(int h, float *v);

int func_1D3F88(Obj *o)
{
    float v[3];
    float w[3];
    Info *info = o->info;
    float r2, d2;
    func_01A0B0(v);
    w[0] = v[0] - o->x;
    w[2] = v[2] - o->z;
    d2 = w[0] * w[0] + w[2] * w[2];
    r2 = info->radius * info->radius;
    if (func_084588(info->h, v) == 0)
        return 0x19;
    if (r2 < d2)
        return 0x19;
    if (d2 <= 2.25f)
        return 0x14;
    if (d2 <= 2.25f)
        return 0xE;
    if (d2 <= 256.0f)
        return 0x10;
    return 0xE;
}
