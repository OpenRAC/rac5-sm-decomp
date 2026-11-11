/* LEVEL_17:0x13E7D8 -- placement copy of LEVEL_16_142AF0.c: queries a mode, picks a replacement value, and applies it when it differs. */
struct A { char p0[0x58]; int *f58; };
extern int func_112590();
extern int func_1174F8();
extern int func_117650();
extern void func_13E3B0(struct A *a, int b);
extern void func_13E410(struct A *a, int b);

void func_13E7D8(struct A *a0)
{
    int s1 = 0;
    int s2;
    int v;

    s2 = *a0->f58;
    v = func_112590();
    if (v == 1) {
        s1 = func_1174F8();
    } else {
        if (func_112590() == 2) {
            s1 = func_117650();
        }
    }
    if (s1 != s2) {
        func_13E3B0(a0, s2);
        func_13E410(a0, s1);
    }
}
