/* LEVEL_02:0x0A75D8 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_0020B708;
extern unsigned int D_0020B70C;
extern int D_0020B700;
extern long long D_0020B6F8;
extern int D_002B6440[];

long long func_0A93B0(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_0020B708 = a0;
    if (D_0020B70C < a0) {
        D_0020B70C = a0;
    }
    r = func_0A93B0();
    D_002B6440[D_0020B700 & 0x1F] = (int)(r - D_0020B6F8);
}
