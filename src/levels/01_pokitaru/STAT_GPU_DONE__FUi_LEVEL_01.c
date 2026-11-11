/* LEVEL_01:0x0A0CC8 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_001F6748;
extern unsigned int D_001F674C;
extern int D_001F6740;
extern long long D_001F6738;
extern int D_0029EF40[];

long long func_0A2AA0(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_001F6748 = a0;
    if (D_001F674C < a0) {
        D_001F674C = a0;
    }
    r = func_0A2AA0();
    D_0029EF40[D_001F6740 & 0x1F] = (int)(r - D_001F6738);
}
