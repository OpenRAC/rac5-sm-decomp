typedef struct { int f00; char pad04[0xD8]; float fDC; } Inner;
typedef struct { char pad00[0x46]; unsigned char f46; char pad47[0x11]; Inner *f58; } T;
int func_069C48(int a0, int a1);
int func_1CAEC0(T *a0)
{
    Inner *p = a0->f58;

    if (a0->f46 != 0)
        return 0;
    if (p->fDC != 0.0f)
        return 0;
    func_069C48(p->f00, 1);
    a0->f46 = 1;
    return 1;
}
