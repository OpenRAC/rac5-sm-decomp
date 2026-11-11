/* LEVEL_18:0x0C63C8 -- placement copy of FRONTEND_015B00.c: when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_001B5A4C;
extern unsigned int D_001B5A5C;

void func_019428(unsigned int a);

void func_0C63C8(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_001B5A4C == 0) {
        return;
    }
    if (D_001B5A5C == 0) {
        if (a0 != 0) {
            func_019428(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_001B5A5C = v;
}
