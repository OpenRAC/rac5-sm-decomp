/* LEVEL_03:0x0A0A48 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_0020EDC8;
extern unsigned int D_0020EDCC;
extern int D_0020EDC0;
extern long long D_0020EDB8;
extern int D_002B9DC0[];

long long func_0A2820(void);

void func_0A0A48(unsigned int a0)
{
    long long r;

    D_0020EDC8 = a0;
    if (D_0020EDCC < a0) {
        D_0020EDCC = a0;
    }
    r = func_0A2820();
    D_002B9DC0[D_0020EDC0 & 0x1F] = (int)(r - D_0020EDB8);
}
