/* LEVEL_19:0x0C6CC8 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_001B574C;
extern unsigned int D_001B575C;

extern void func_019AE0(void);

void func_0C6CC8(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_001B574C == 0) {
        return;
    }
    if (D_001B575C == 0) {
        if (a0 != 0) {
            func_019AE0();
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_001B575C = v;
}
