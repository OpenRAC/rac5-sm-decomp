/* LEVEL_08:0x1D51C0 -- placement copy of LEVEL_01_1A2B08.c: advances an accumulated float, clamps it at 1.0 and dispatches one table entry; returns whether it clamped. */
extern char D_002736C0[];
extern void func_1D5268(char *o, char *p, char *q, char *r, char *s, float f);

int func_1D51C0(char *o)
{
    int ret;
    unsigned int v;
    unsigned int a;
    char *base;
    char *p;
    float f;

    ret = 0;
    base = D_002736C0;
    v = *(unsigned char *)(o + 0x46);
    a = *(unsigned char *)(o + 0x45);
    p = base + v * 0x70 + a * 0x38;
    f = *(float *)(o + 0x70) + 1.0f / (*(float *)(p + 0x30) * 30.0f);
    *(float *)(o + 0x70) = f;
    if (f > 1.0f) {
        *(float *)(o + 0x70) = 1.0f;
        ret = 1;
    }
    func_1D5268(o, p, p + 0xC, p + 0x18, p + 0x24, *(float *)(p + 0x34));
    return ret;
}
