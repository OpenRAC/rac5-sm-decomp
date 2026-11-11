/* LEVEL_23:0x097A08 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001C9B48;
extern unsigned int D_001C9B4C;
extern int D_001C9B40;
extern long long D_001C9B38;
extern int D_00270380[];

long long func_0997E0(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_001C9B48 = a0;
    if (D_001C9B4C < a0) {
        D_001C9B4C = a0;
    }
    r = func_0997E0();
    D_00270380[D_001C9B40 & 0x1F] = (int)(r - D_001C9B38);
}
