/* LEVEL_21:0x0B8338 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_0015B39C;
extern unsigned int D_0015B3AC;

void func_017958(unsigned int a);

void func_0B8338(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_0015B39C == 0) {
        return;
    }
    if (D_0015B3AC == 0) {
        if (a0 != 0) {
            func_017958(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_0015B3AC = v;
}
