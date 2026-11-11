/* LEVEL_09:0x0D4FA8 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_001F051C;
extern unsigned int D_001F052C;

void func_01AB60(unsigned int a);

void func_0D4FA8(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_001F051C == 0) {
        return;
    }
    if (D_001F052C == 0) {
        if (a0 != 0) {
            func_01AB60(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_001F052C = v;
}
