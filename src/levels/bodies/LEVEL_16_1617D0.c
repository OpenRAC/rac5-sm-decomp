typedef struct {
    char pad[0xA0];
    float fA0;
} Sub;

typedef struct {
    char pad[0x58];
    Sub *f58;
} S;

int func_1617D0(S *a0, float f12)
{
    Sub *v0 = a0->f58;
    float f1 = v0->fA0;
    float f2 = 0.5f;
    float f0;

    if (f1 == f2)
        return 1;

    f0 = f1 + f12 * 0.2f;
    v0->fA0 = f0;
    if (f2 <= f0)
        v0->fA0 = f2;

    if (v0->fA0 == f2)
        return 1;
    return 0;
}
