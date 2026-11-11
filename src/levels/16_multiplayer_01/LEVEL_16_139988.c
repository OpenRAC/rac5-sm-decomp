/* LEVEL_16:0x139988 -- picks a state code from an object's check and a lookup result. */
typedef struct B {
    char pad0[0x30];
    int f30;
} B;
typedef struct C {
    char pad0[0x54];
    int f54;
    int pad58;
    int f5C;
    char pad60[0x10];
    unsigned char f70;
} C;
typedef struct A {
    char pad0[0x45];
    unsigned char f45;
    char pad46[0xE];
    B *f54;
    C *f58;
} A;
extern int func_139910(A *a);
extern int func_02F0A0(B *a, A *b, int c, int d, int e, int f, float g, float h);

int func_139988(A *a)
{
    B *s2;
    C *s1;
    int r;
    s2 = a->f54;
    s1 = a->f58;
    if (func_139910(a) == 0) {
        unsigned c = a->f45;
        if (c - 0xD < 2 || c == 0xB)
            return 0x16;
        return 4;
    }
    r = func_02F0A0(s2, a, s1->f5C, s2->f30, s1->f70, 0, 0.9f, 1.85f);
    if (r == 2)
        return s1->f54 <= 0 ? 0xD : 0xE;
    return r ? 0xE : 0xB;
}
