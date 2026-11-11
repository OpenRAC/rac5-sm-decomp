/* LEVEL_01:0x1E6CC0 -- derives scaled deltas, an inverse range factor and unpacked alpha from raw fields. */
typedef struct {
    float f0, f1, f2, f3, f4, f5, f6;
    unsigned packed;
    char pad20[0x2C - 0x20];
    float f2C, f30, o34, o38, o3C, o40;
    unsigned o44;
    float o48, o4C;
} S;

void func_1E6CC0(S *s)
{
    float t;
    s->o34 = (s->f1 - s->f0) * 4.656612873077393e-10f;
    s->o38 = (s->f3 - s->f2) * 4.656612873077393e-10f;
    s->o3C = s->f5 - s->f6;
    if (s->f4 > 0.99f)
        t = 100.0f;
    else
        t = 1.0f / (1.0f - s->f4);
    s->o40 = t;
    s->o44 = s->packed & 0xFFFFFF;
    s->o48 = (float)((s->packed >> 24) & 0xFF);
    s->o4C = (s->f30 - s->f2C) * 4.656612873077393e-10f;
}
