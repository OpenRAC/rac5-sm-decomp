/* LEVEL_21:0x081628 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_0014B3C8;
extern unsigned int D_0014B3CC;
extern int D_0014B3C0;
extern long long D_0014B3B8;
extern int D_001B6F80[];

long long func_083398(void);

void func_081628(unsigned int a0)
{
    long long r;

    D_0014B3C8 = a0;
    if (D_0014B3CC < a0) {
        D_0014B3CC = a0;
    }
    r = func_083398();
    D_001B6F80[D_0014B3C0 & 0x1F] = (int)(r - D_0014B3B8);
}
