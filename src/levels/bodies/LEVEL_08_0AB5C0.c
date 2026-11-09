/* LEVEL_08:0x0AB5C0 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_0023F608;
extern unsigned int D_0023F60C;
extern int D_0023F600;
extern long long D_0023F5F8;
extern int D_002EE1C0[];

long long func_0AD398(void);

void func_0AB5C0(unsigned int a0)
{
    long long r;

    D_0023F608 = a0;
    if (D_0023F60C < a0) {
        D_0023F60C = a0;
    }
    r = func_0AD398();
    D_002EE1C0[D_0023F600 & 0x1F] = (int)(r - D_0023F5F8);
}
