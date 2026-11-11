/* LEVEL_16:0x138C00 -- decrements a counter, then picks one of two helper paths. */
struct S1 { char p0[0x50]; int f50; };
struct S2 { char p0[0x2C]; void *f2C; };
struct O {
    char p0[0x45];
    unsigned char f45;
    char p1[0x54 - 0x46];
    struct S2 *f54;
    struct S1 *f58;
};
extern int func_139910(struct O *a);
extern void func_1394D0(struct O *a, int b, int c);
extern int func_0763F8(void *a, void *b);

void func_138C00(struct O *a0)
{
    struct S2 *s2 = a0->f54;
    struct S1 *s1 = a0->f58;

    s1->f50 = s1->f50 - 1;
    if (func_139910(a0) != 0) {
        func_1394D0(a0, a0->f45, 0xB);
        return;
    }
    if (s1->f50 > 0) {
        return;
    }
    if (func_0763F8(s2->f2C, (char *)a0 + 0x30) != 0) {
        func_1394D0(a0, a0->f45, 4);
    } else {
        func_1394D0(a0, a0->f45, 0xF);
    }
}
