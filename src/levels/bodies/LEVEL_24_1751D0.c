typedef struct { char pad24[0x24]; int f24; } Head;
typedef struct { char pad08[8]; int f08; char pad0C[0x20]; float f2C; char pad30[0x1C]; unsigned char f4C; } Inner;
typedef struct { char pad40[0x40]; Head *f40; char pad44[0x14]; Inner *f58; } Outer;
float func_175158(int a0);
void func_1751D0(Outer *a2, int a1)
{
    Inner *p;
    float r;

    if (a2->f40->f24 != 0xECFD0651)
        return;
    p = a2->f58;
    r = func_175158(a1);
    p->f2C = r;
    if (r != -1.0f) {
        p->f08 = a1;
        p->f4C = 1;
    }
}
