/* LEVEL_23:0x0CEB28 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_001D9B1C;
extern unsigned int D_001D9B2C;

void func_01A280(unsigned int a);

void func_0CEB28(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_001D9B1C == 0) {
        return;
    }
    if (D_001D9B2C == 0) {
        if (a0 != 0) {
            func_01A280(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_001D9B2C = v;
}
