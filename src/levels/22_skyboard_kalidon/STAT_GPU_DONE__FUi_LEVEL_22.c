/* LEVEL_22:0x08F340 -- placement copy of FRONTEND_0064B8.c: raises a high-water word, records the input, calls a helper, then stores a 64-bit difference into a table slot. */

extern unsigned int D_00155AC8;
extern unsigned int D_00155ACC;
extern int D_00155AC0;
extern long long D_00155AB8;
extern int D_001F4B00[];

long long func_0910B0(void);

void STAT_GPU_DONE__FUi(unsigned int a0)
{
    long long r;

    D_00155AC8 = a0;
    if (D_00155ACC < a0) {
        D_00155ACC = a0;
    }
    r = func_0910B0();
    D_001F4B00[D_00155AC0 & 0x1F] = (int)(r - D_00155AB8);
}
