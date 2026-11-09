/* LEVEL_18:0x13E3E0 -- placement copy of LEVEL_16_142AF0.c: queries a mode, picks a replacement value, and applies it when it differs. */
struct A { char p0[0x58]; int *f58; };
extern int func_111BB8();
extern int func_116AC8();
extern int func_116C20();
extern void func_13E290(struct A *a, int b);
extern void func_13E2F0(struct A *a, int b);

void func_13E3E0(struct A *a0)
{
    int s1 = 0;
    int s2;
    int v;

    s2 = *a0->f58;
    v = func_111BB8();
    if (v == 1) {
        s1 = func_116AC8();
    } else {
        if (func_111BB8() == 2) {
            s1 = func_116C20();
        }
    }
    if (s1 != s2) {
        func_13E290(a0, s2);
        func_13E2F0(a0, s1);
    }
}
