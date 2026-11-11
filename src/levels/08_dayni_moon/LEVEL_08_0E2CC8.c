/* LEVEL_08:0x0E2CC8 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_0024F5DC;
extern unsigned int D_0024F5EC;

void func_01C0E8(unsigned int a);

void func_0E2CC8(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_0024F5DC == 0) {
        return;
    }
    if (D_0024F5EC == 0) {
        if (a0 != 0) {
            func_01C0E8(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_0024F5EC = v;
}
