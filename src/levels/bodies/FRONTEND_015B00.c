/* FRONTEND:0x015B00 -- when a global flag is set, stores the argument (or two when the argument is at most one) into a second global, calling a helper first when that global is clear and the argument is non-zero. */

extern int D_00030354;
extern unsigned int D_00030364;

void func_002250(unsigned int a);

void func_015B00(unsigned int a0)
{
    unsigned int one;
    unsigned int v;

    if (D_00030354 == 0) {
        return;
    }
    if (D_00030364 == 0) {
        if (a0 != 0) {
            func_002250(a0);
        }
    }
    one = 1;
    v = 2;
    if (one < a0) {
        v = a0;
    }
    D_00030364 = v;
}
