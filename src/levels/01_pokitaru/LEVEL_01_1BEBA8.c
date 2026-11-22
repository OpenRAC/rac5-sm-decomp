/* LEVEL_01:0x1BEBA8 -- classifies an object by squared distance to a target. */
typedef struct {
    char pad0[0x1C];
    int w1C;
    char pad1[0x38 - 0x20];
    int h;
    char pad2[0x44 - 0x3C];
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
extern void func_01A2A0(float *v);
extern int func_084708(int h, float *v);
extern int func_1C4940(int a, float *v);

int func_1BEBA8(Obj *o)
{
    float v[3];
    float w[3];
    Info *info = o->info;
    float r2, d2;
    func_01A2A0(v);
    w[0] = v[0] - o->x;
    w[2] = v[2] - o->z;
    d2 = w[0] * w[0] + w[2] * w[2];
    r2 = info->radius * info->radius;
    if (func_084708(info->h, v) == 0)
        return 0x17;
    if (r2 < d2)
        return 0x17;
    if (info->w1C != 0 && func_1C4940(info->w1C, v) != 0)
        return 0xF;
    if (d2 <= 2.25f)
        return 0x13;
    if (d2 <= 2.25f)
        return 0xD;
    if (d2 <= 256.0f)
        return 0xF;
    return 0xD;
}
