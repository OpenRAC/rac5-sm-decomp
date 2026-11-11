/* LEVEL_17:0x08F488 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_00197D18;
extern unsigned int D_00197D1C;
extern int D_00197D10;
extern long long D_00197D08;
extern int D_00247D90[];

long long func_0911F8(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_00197D18 = a0;
    if (D_00197D1C < a0) {
        D_00197D1C = a0;
    }
    r = func_0911F8();
    D_00247D90[D_00197D10 & 0x1F] = (int)(r - D_00197D08);
}
