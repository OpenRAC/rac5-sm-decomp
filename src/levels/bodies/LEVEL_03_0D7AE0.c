/* LEVEL_03:0x0D7AE0 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_0021ED9C;
extern unsigned int D_0021EDAC;

void func_01B4D8(unsigned int a);

void func_0D7AE0(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_0021ED9C == 0) {
        return;
    }
    if (D_0021EDAC == 0) {
        if (a0 != 0) {
            func_01B4D8(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_0021EDAC = v;
}
