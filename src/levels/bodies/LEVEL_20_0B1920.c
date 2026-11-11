/* LEVEL_20:0x0B1920 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_00116CAC;
extern unsigned int D_00116CBC;

void func_017B98(void);

void func_0B1920(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_00116CAC == 0) {
        return;
    }
    if (D_00116CBC == 0) {
        if (a0 != 0) {
            func_017B98();
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_00116CBC = v;
}
