/* LEVEL_19:0x13FA60 -- placement copy of LEVEL_16_142AF0.c: queries a mode, picks a replacement value, and applies it when it differs. */
struct A { char p0[0x58]; int *f58; };
extern int func_1135A8();
extern int func_1184F0();
extern int func_118648();
extern void func_13F638(struct A *a, int b);
extern void func_13F698(struct A *a, int b);

void func_13FA60(struct A *a0)
{
    int s1 = 0;
    int s2;
    int v;

    s2 = *a0->f58;
    v = func_1135A8();
    if (v == 1) {
        s1 = func_1184F0();
    } else {
        if (func_1135A8() == 2) {
            s1 = func_118648();
        }
    }
    if (s1 != s2) {
        func_13F638(a0, s2);
        func_13F698(a0, s1);
    }
}
