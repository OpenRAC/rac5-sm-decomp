/* LEVEL_18:0x08EFA0 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001A5B98;
extern unsigned int D_001A5B9C;
extern int D_001A5B90;
extern long long D_001A5B88;
extern int D_00256E10[];

long long func_090D10(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_001A5B98 = a0;
    if (D_001A5B9C < a0) {
        D_001A5B9C = a0;
    }
    r = func_090D10();
    D_00256E10[D_001A5B90 & 0x1F] = (int)(r - D_001A5B88);
}
