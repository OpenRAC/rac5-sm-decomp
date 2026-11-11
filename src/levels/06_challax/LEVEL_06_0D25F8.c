/* LEVEL_06:0x0D25F8 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_001F561C;
extern unsigned int D_001F562C;

void func_019F70(unsigned int a);

void func_0D25F8(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_001F561C == 0) {
        return;
    }
    if (D_001F562C == 0) {
        if (a0 != 0) {
            func_019F70(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_001F562C = v;
}
