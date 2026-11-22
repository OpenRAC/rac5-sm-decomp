/* LEVEL_04:0x1D1A68 -- placement copy of LEVEL_01_1BEBA8.c: classifies an object by squared distance to a target. */
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
extern void func_019F78(float *v);
extern int func_087C38(int h, float *v);
extern int func_1D3E00(int a, float *v);

int func_1D1A68(Obj *o)
{
    float v[3];
    float w[3];
    Info *info = o->info;
    float r2, d2;
    func_019F78(v);
    w[0] = v[0] - o->x;
    w[2] = v[2] - o->z;
    d2 = w[0] * w[0] + w[2] * w[2];
    r2 = info->radius * info->radius;
    if (func_087C38(info->h, v) == 0)
        return 0x17;
    if (r2 < d2)
        return 0x17;
    if (info->w1C != 0 && func_1D3E00(info->w1C, v) != 0)
        return 0xF;
    if (d2 <= 2.25f)
        return 0x13;
    if (d2 <= 2.25f)
        return 0xD;
    if (d2 <= 256.0f)
        return 0xF;
    return 0xD;
}
