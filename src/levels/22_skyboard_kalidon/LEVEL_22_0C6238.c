/* LEVEL_22:0x0C6238 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_00165A9C;
extern unsigned int D_00165AAC;

void func_017D88(unsigned int a);

void func_0C6238(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_00165A9C == 0) {
        return;
    }
    if (D_00165AAC == 0) {
        if (a0 != 0) {
            func_017D88(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_00165AAC = v;
}
