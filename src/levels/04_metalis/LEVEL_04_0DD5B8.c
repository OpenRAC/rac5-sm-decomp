/* LEVEL_04:0x0DD5B8 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_0021FBDC;
extern unsigned int D_0021FBEC;

void func_01B3F0(unsigned int a);

void func_0DD5B8(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_0021FBDC == 0) {
        return;
    }
    if (D_0021FBEC == 0) {
        if (a0 != 0) {
            func_01B3F0(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_0021FBEC = v;
}
