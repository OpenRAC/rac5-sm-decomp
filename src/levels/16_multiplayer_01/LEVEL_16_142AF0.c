/* LEVEL_16:0x142AF0 -- queries a mode, picks a replacement value, and applies it when it differs. */
struct A { char p0[0x58]; int *f58; };
extern int func_112E00();
extern int func_117A98();
extern int func_117BF0();
extern void func_1429A0(struct A *a, int b);
extern void func_142A00(struct A *a, int b);

void func_142AF0(struct A *a0)
{
    int s1 = 0;
    int s2;
    int v;

    s2 = *a0->f58;
    v = func_112E00();
    if (v == 1) {
        s1 = func_117A98();
    } else {
        if (func_112E00() == 2) {
            s1 = func_117BF0();
        }
    }
    if (s1 != s2) {
        func_1429A0(a0, s2);
        func_142A00(a0, s1);
    }
}
