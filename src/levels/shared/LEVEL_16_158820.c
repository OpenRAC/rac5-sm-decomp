typedef struct { char pad24[0x24]; int f24; } Inner;
typedef struct { char pad40[0x40]; Inner *f40; char pad44[0x14]; char *f58; } Outer;
typedef struct { int f00; int f04; float f08; int f0C; } C;

void func_158820(Outer *a0)
{
    C *p = (C *)a0->f58;

    if (a0->f40->f24 == 0x4B6F098C) {
        p->f0C = 1;
        p->f08 = 0.25000497698783875f;
    }
}
